% Stops ode integration when value is = 0. Used to avoid trajectories too
% close to some positions (eg intersection with Earth or Moon)
function [value, isterminal, direction] = stopfunc(~,s)
global physical

value = 1;
NSTATE = physical.NSTATE;
Earth=physical.Earth;
Moon=physical.Moon;

% check is spacecraft is too close to the Earth or the Moon
if norm(Earth- s(1:round((NSTATE-1)/2))) < physical.RE
    value = -1;
elseif norm(Moon- s(1:round((NSTATE-1)/2))) < physical.RM
    value = -1;
end

isterminal = 1;
direction = 0;

end