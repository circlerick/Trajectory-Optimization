% compute the objective function for a minimum fuel
% problem
function [obj,states,times] = objfun_S_fuel(lam0,X0,physical,boundary)

% Inputs:
% lam0: initial costates vector [NSTATEx1]
% X0: initial states vector [NSTATEx1]
% physical: structure for physical variables
% boundary: structure for control problem inputs

% Output:
% obj: objective function residual
% states: matrix of states and costates during the propagation
% times: vector of times during the propagation 

% initialize outputs and constants
obj = 1000;
states = 0;
times = 0;
T0 = boundary.T0;
Tfin = boundary.Tfin;
xx = 0;
tt = 0;
NSTATE = physical.NSTATE;
EPS = physical.EPS;
if EPS ~= 0
    disp('Error: EPS must be set to 0 in the minimum fuel problem')
    return
end
told = T0;
RE = physical.RE;
RM = physical.RM; 
Earth=physical.Earth;
Moon=physical.Moon;
S= Switching_Function(X0,lam0,physical);

if sign(S) ~= physical.shoot 
    type = -1;
else
    type = 1;
end

SIGN = physical.shoot*type;
s0 = [X0; lam0; S]; % initial state, costate and switching function

if nargout > 1
    tempt = zeros(1e6,1);
    temps = zeros(1e6,2*NSTATE+1);
    temps(1,:) = s0';
    tempt(1) = T0;
    index1 = 1;
    index2 = 0;
end

% integration
while told ~= Tfin && norm(Earth- s0(1:round(NSTATE/2)-1)) >= RE && norm(Moon - s0(1:round(NSTATE/2)-1)) >= RM
     % integration with switching time detection
    options = odeset('reltol', 0.4e-13, 'abstol', 0.4e-13,'Events',@(t,s) stopfuel(t,s),'MaxStep',2e-3);
    [tt,xx] = ode113(@(t,s) derivatives_S(s,physical,SIGN),[told Tfin],s0,options);
    told = tt(end);

    if nargout > 1
        index2 = index1 + length(tt) - 1;
        temps(index1+1:index2,:) = xx(2:end,:);
        tempt(index1+1:index2) = tt(2:end);
        index1 = index2;
    end

    if tt(end) ~= Tfin
        temp = zeros(size(s0));
        temp(1:end) = xx(end,:)';
        s0 = temp;
        [~,dSdt] = Switching_Function(s0(1:NSTATE),s0(1+NSTATE:2*NSTATE),physical);
        SIGN = dSdt;
    end
end

% final values
Xf = boundary.Xf;
g0_x = physical.g0_x;
Sigma=boundary.Sigma; 
Pigreco=boundary.Pigreco;        
xf = xx(end,1:NSTATE)';
pf = xx(end,NSTATE+1:2*NSTATE)';

deltaX = Pigreco'*(xf-Xf); 
deltaP = Sigma'*(pf+g0_x);
val = [deltaX;deltaP];
if tt(end) < Tfin*0.99
    val = 100;
end

% objective function
obj = sum(val.^2);

if nargout > 1
    states = temps(1:index2,:);
    times = tempt(1:index2);
end

end