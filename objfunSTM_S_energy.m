% compute the objective function and its gradient for a minimum energy
% problem
function [obj,grad] = objfunSTM_S_energy(lam0,X0,physical,boundary)

% Inputs:
% lam0: initial costates vector [NSTATEx1]
% X0: initial states vector [NSTATEx1]
% physical: structure for physical variables
% boundary: structure for control problem inputs

% Output:
% obj: objective function residual
% grad: gradient of the shooting function

% initialize outputs and constants
obj = 1000;
grad = 0;
EPS = physical.EPS; 
if EPS == 0
    disp('Error: EPS must be > 0 in the minimum energy problem')
    return
end
NSTATE = physical.NSTATE;
Tmax = physical.Tmax;
c = physical.c;
xx = 0;
tt = 0;
phif = 0;
T0 = boundary.T0;
Tfin = boundary.Tfin;
told = T0;
RE = physical.RE;
RM = physical.RM; 
Earth=physical.Earth;
Moon=physical.Moon;
S= Switching_Function(X0,lam0,physical);
% compute initial switch
if S < EPS*Tmax/c && S > -EPS*Tmax/c
    type = 0;
else
    if sign(S) ~= physical.shoot 
        type = -1;
    else
        type = 1;
    end
end

SIGN = physical.shoot*type;
phi = eye(2*NSTATE);
STM0 = reshape(phi,[4*NSTATE^2,1]);
s0 = [X0; lam0; STM0; S]; % initial state, costate, STM matrix and switching function

% integration loop
while told ~= Tfin && norm(Earth- s0(1:round(NSTATE/2)-1)) > RE && norm(Moon - s0(1:round(NSTATE/2)-1)) > RM
    % integration with switching time detection
    options = odeset('reltol', 0.4e-13, 'abstol', 0.4e-13,'Events',@(t,s) stopfuel(t,s),'MaxStep',0.3e-3);
    [tt,xx] = ode113(@(t,s) derivativesSTM_S(s,physical,SIGN),[told Tfin],s0,options);
    % update switch type and initial state of ode
    if tt(end) ~= Tfin
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
    told = tt(end);
end
% extrapolate final state transition matrix
phif = reshape(xx(end,2*NSTATE+1:end-1),[2*NSTATE,2*NSTATE]);

% final values
Xf = boundary.Xf;
g0_x = physical.g0_x;
Sigma=boundary.Sigma; 
Pigreco=boundary.Pigreco;        
xf = xx(end,1:NSTATE)';
pf = xx(end,NSTATE+1:2*NSTATE)';
deltaX = Pigreco'*(xf-Xf); 
deltaP = Sigma'*(pf+g0_x);
% objective function residual
obj = [deltaX;deltaP];

% compute gradient if requested
if nargout > 1
    gradX = Pigreco'*phif(1:NSTATE,(NSTATE+1):2*NSTATE);
    gradP = Sigma'*phif((NSTATE+1):2*NSTATE,(NSTATE+1):2*NSTATE);    
    grad = [gradX; gradP];
end

end