% compute the objective function and its gradient for a problem where the
% final time is free.
function [obj,grad] = objfunSTM_S_time(lam0,X0,physical,boundary,par)

% Inputs:
% lam0: initial costates vector [NSTATEx1]
% X0: initial states vector [NSTATEx1]
% physical: structure for physical variables
% boundary: structure for control problem inputs
% par: structure for simulation variables

% Outputs:
% obj: objective function residual
% grad: gradient of the shooting function

% initialize outputs and constants
obj = 1000;
grad = 0;
EPS = physical.EPS; 
NSTATE = physical.NSTATE;
Tmax = physical.Tmax;
c = physical.c;
xx = 0;
tt = 0;
T0 = boundary.T0;
Tfin = lam0(end);
phif = zeros(2*NSTATE);
phi = eye(2*NSTATE);
STM0 = reshape(phi,[4*NSTATE^2,1]);
Sf = 0;

% integration
switch par.problem
    case 'minimumtime'
        if EPS ~= 0
            disp('Error: EPS can only be set to 0 in minimum time')
            return
        end
        options = odeset('reltol', 5e-14, 'abstol', 5e-14,'Events', @(t,s) stopfunc(t,s));
        s0 = [X0; lam0(1:end-1); STM0]; % initial state, costate and STM matrix
        S= Switching_Function(X0,lam0(1:end-1),physical);
        S = sign(S);
        [~,xx] = ode113(@(t,s) derivativesSTM(s,physical,S),[T0 Tfin],s0,options);
        % extrapolate final value of state transition matrix
        phif = reshape(xx(end,2*NSTATE+1:end),[2*NSTATE,2*NSTATE]);
    
    case 'freetime'
        told = T0;
        RE = physical.RE;
        RM = physical.RM; 
        Earth=physical.Earth;
        Moon=physical.Moon;
        % compute switching function
        S= Switching_Function(X0,lam0(1:end-1),physical);
        if EPS > 0
            if S < EPS*Tmax/c && S > -EPS*Tmax/c
                type = 0;
            else
                if sign(S) ~= physical.shoot 
                    type = -1;
                else
                    type = 1;
                end
            end
        else
            if sign(S) ~= physical.shoot 
                type = -1;
            else
                type = 1;
            end
        end
        SIGN = physical.shoot*type;
        s0 = [X0; lam0(1:end-1); STM0; S]; % initial state, costate, STM matrix and switching function

        % integration loop
        while told ~= Tfin && norm(Earth- s0(1:round(NSTATE/2)-1)) > RE && norm(Moon - s0(1:round(NSTATE/2)-1)) > RM
            % integration with switching time detection
            options = odeset('reltol', 1e-13, 'abstol', 1e-13,'Events',@(t,s) stopfuel(t,s),'MaxStep',1e-3);
            [tt,xx] = ode89(@(t,s) derivativesSTM_S(s,physical,SIGN),[told Tfin],s0,options);
            % extrapolate final value of state transition matrix
            phif = reshape(xx(end,2*NSTATE+1:end-1),[2*NSTATE,2*NSTATE]);

            % computes kump discontinuity if present and update the initial
            % state of ode for the next loop
            if tt(end) ~= Tfin

                if EPS == 0
                Xmin = xx(end,1:NSTATE)';
                lam_min = xx(end,NSTATE+1:2*NSTATE)';
                S_x = S_x_fun(Xmin,lam_min,Tmax,c,EPS);
                S_p = S_p_fun(Xmin,lam_min,Tmax,c,EPS);
                [~,dSdt]= Switching_Function(Xmin,lam_min,physical);
                dydt_min = derivatives(xx(end,1:2*NSTATE)',physical,SIGN);
                SIGN = dSdt;
                dydt_plus = derivatives(xx(end,1:2*NSTATE)',physical,SIGN);
                psi = eye(2*NSTATE) + (dydt_plus - dydt_min)*([S_x(Xmin,lam_min);S_p(Xmin,lam_min)]'/dSdt);
                phi = psi*phif;
                S = Switching_Function(xx(end,1:NSTATE)',xx(end,NSTATE+1:2*NSTATE)',physical);
                s0 = [xx(end,1:2*NSTATE)'; reshape(phi,[(2*NSTATE)^2,1]);S];                        
                    
                else
                    s0 = xx(end,:)';
                    if SIGN ~= 0
                        SIGN = 0;
                    else
                        if sign(xx(end-1,end)) == physical.shoot
                            SIGN = physical.shoot;
                        else
                            SIGN = -physical.shoot;
                        end
                    end
                end
            end
            told = tt(end);
        end
    otherwise
        disp('Wrong ptoblem type selected')
        return

end

% final values
Xf = boundary.Xf;
g0_x = physical.g0_x;
Sigma=boundary.Sigma; 
Pigreco=boundary.Pigreco;        
xf = xx(end,1:NSTATE)';
pf = xx(end,NSTATE+1:2*NSTATE)';

switch par.problem
    case 'minimumtime'
Sf= Switching_Function(xf,pf,physical);
Hf = Hamiltonian(xf,pf,Sf,physical);
deltaX = Pigreco'*(xf-Xf); 
deltaP = Sigma'*(pf+g0_x);
% objective function residual
obj = [Hf;deltaX;deltaP];
    case 'freetime'
Sf= Switching_Function(xf,pf,physical);
Hf = Hamiltonian(xf,pf,Sf,physical);
deltaX = Pigreco'*(xf-Xf); 
deltaP = Sigma'*(pf+g0_x);
% objective function residual
obj = [Hf;deltaX;deltaP];

end

% computes the gradient if requested
if nargout > 1
    gradX = Pigreco'*phif(1:NSTATE,(NSTATE+1):2*NSTATE);
    gradP = Sigma'*phif((NSTATE+1):2*NSTATE,(NSTATE+1):2*NSTATE);    
    switch par.problem
        case 'minimumtime'
    [H_x,H_p]=HamiltonianFirstDerivatives(xf,pf,Sf,physical); 
    gradH = H_x'*phif(1:NSTATE,(NSTATE+1):2*NSTATE) + H_p'*phif((NSTATE+1):2*NSTATE,(NSTATE+1):2*NSTATE);
    grad = [gradH 0; gradX Pigreco'*H_p; gradP Sigma'*(-H_x)];
        case 'freetime'
    [H_x,H_p]=HamiltonianFirstDerivatives(xf,pf,Sf,physical); 
    gradH = H_x'*phif(1:NSTATE,(NSTATE+1):2*NSTATE) + H_p'*phif((NSTATE+1):2*NSTATE,(NSTATE+1):2*NSTATE);
    grad = [gradH 0; gradX Pigreco'*H_p; gradP Sigma'*(-H_x)];
    end
end

end