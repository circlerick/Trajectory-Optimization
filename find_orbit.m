function [obj,xx,tof] = find_orbit(var,physical,boundary)
        
NSTATE = physical.NSTATE;
x0 = boundary.Xf;
xx0 = [x0(1);x0(2);0;var];
% integrazione

options = odeset('reltol', 5e-14, 'abstol', 5e-14,'Events',@(t,s) axiscross(t,s,physical),MaxStep=0.1);
lambda = zeros(NSTATE,1);
s0 = [xx0;1;lambda]; % stato e costato iniziali
Tfin = 5;
S = -sign(physical.shoot);
[tt,xx] = ode113(@(t,s) derivatives(s,physical,S),[0 Tfin],s0,options);
tof = tt(end);
xf = xx(end,:)';
obj = [xf(1)-x0(1);xf(2)-x0(2);xf(3)];

end

function [value, isterminal, direction] = axiscross(~,s,physical)

% Ferma l'integrazione della ode quando value = 0
value = s(1) - (1-physical.mu);
isterminal = 1;
direction = +1;

end