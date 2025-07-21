% Stops ode integration when value is = 0. Used determine switching times or to avoid trajectories
% too close to some positions (eg intersection with Earth or Moon)
function [value, isterminal, direction] = stopfuel(~,s)
global physical
direction = 0;
value = 1;

% check if the switching function has a zero
if physical.EPS > 0
    EPS = physical.EPS*physical.Tmax/physical.c;
    Sw = s(end);

    if Sw < -EPS || Sw > EPS
        value = EPS - abs(Sw);
    end

else
    value = s(end);
end

% check is spacecraft is too close to the Earth or the Moon
NSTATE = physical.NSTATE;
Earth=physical.Earth;
Moon=physical.Moon;
warning1 = norm(Earth- s(1:round((NSTATE-1)/2)));
warning2 = norm(Moon- s(1:round((NSTATE-1)/2))); 
if warning1 < physical.RE
    value = 0;
elseif warning2 < physical.RM
    value = 0;
end
isterminal = 1;

end