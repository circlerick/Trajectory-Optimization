% compute the objective function for a free time
% problem
function [obj, states, times] = objfun_S_time(lam0,X0,physical,boundary,par)

% Inputs:
% lam0: initial costates vector [NSTATEx1]
% X0: initial states vector [NSTATEx1]
% physical: structure for physical variables
% boundary: structure for control problem inputs
% par: structure for simulation variables

% Output:
% obj: objective function residual
% states: matrix of states and costates during the propagation
% times: vector of times during the propagation 

% initialize outputs and constants
obj = 1000;
states = 0;
times = 0;
T0 = boundary.T0;
Tfin = lam0(end);
xx = 0;
tt = 0;
val = 1000;
EPS = physical.EPS; 
NSTATE = physical.NSTATE;
Tmax = physical.Tmax;
c = physical.c;

% integration
switch par.problem
    case 'minimumtime'
        options = odeset('reltol', 5e-14, 'abstol', 5e-14,'Events',@(t,s) stopfunc(t,s));
        s0 = [X0; lam0(1:end-1)]; % initial state and costate
        S= Switching_Function(X0,lam0(1:end-1),physical);
        S = sign(S);
        [tt,xx] = ode113(@(t,s) derivatives(s,physical,S),[T0 Tfin],s0,options);

        if nargout > 1
            times = tt;
            states = xx;
        end

    case 'freetime'
        told = T0;
        RE = physical.RE;
        RM = physical.RM; 
        Earth=physical.Earth;
        Moon=physical.Moon;
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
        s0 = [X0; lam0(1:end-1);S]; % initial state, costate and switching function

        if nargout > 1
            tempt = zeros(1e6,1);
            temps = zeros(1e6,2*NSTATE+1);
            temps(1,:) = s0';
            tempt(1) = T0;
            index1 = 1;
            index2 = 0;
        end

        while told ~= Tfin && norm(Earth- s0(1:round(NSTATE/2)-1)) >= RE && norm(Moon - s0(1:round(NSTATE/2)-1)) >= RM
            % integration with switching time detection
            options = odeset('reltol', 0.5e-13, 'abstol', 0.5e-13,'Events',@(t,s) stopfuel(t,s),'MaxStep',1e-3);
            [tt,xx] = ode89(@(t,s) derivatives_S(s,physical,SIGN),[told Tfin],s0,options);
            told = tt(end);

            if nargout > 1
                index2 = index1 + length(tt) - 1;
                temps(index1+1:index2,:) = xx(2:end,:);
                tempt(index1+1:index2) = tt(2:end);
                index1 = index2;
            end

            if tt(end) ~= Tfin
                s0(1:end) = xx(end,1:end)';
                if EPS == 0
                    [~,dSdt] = Switching_Function(s0(1:NSTATE),s0(1+NSTATE:2*NSTATE),physical);
                    SIGN = dSdt;
                else
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

        end

        if nargout > 1
            states = temps(1:index2,:);
            times = tempt(1:index2);
        end

    otherwise
        disp('Error, no match found with problem type');
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
val = [Hf;deltaX;deltaP];
    case 'freetime'
Sf= Switching_Function(xf,pf,physical);
Hf = Hamiltonian(xf,pf,Sf,physical);
deltaX = Pigreco'*(xf-Xf); 
deltaP = Sigma'*(pf+g0_x);
val = [Hf;deltaX;deltaP];
end

% objective function
obj = sum(val.^2);

end