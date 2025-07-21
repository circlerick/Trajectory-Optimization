% Stop function used in the real-time NOG algorithm. Stops the integration
% when value is equal to 0
function [value, isterminal, direction] = stopNOG(~,s)
% Inputs: 
% s: state and costate vector at the current ode step

global physical boundary
Pigreco = boundary.Pigreco;
NSTATE = physical.NSTATE;
% Extrapolates state, costate, U, V
x_nom = s(1:NSTATE);
    p_nom = s(NSTATE+1:2*NSTATE);
    x_per = s(2*NSTATE+1:3*NSTATE);
    phi = s(4*NSTATE+1:4*NSTATE+4*NSTATE^2);
    UN = reshape(phi(1:NSTATE^2),[NSTATE,NSTATE]);
    VN = reshape(phi(NSTATE^2+1:2*NSTATE^2),[NSTATE,NSTATE]);
    Un = reshape(phi(2*NSTATE^2+1:3*NSTATE^2),[NSTATE,NSTATE]);
    Vn = reshape(phi(3*NSTATE^2+1:4*NSTATE^2),[NSTATE,NSTATE]);
    QN = -VN*inv(UN);
    deltaX = -x_nom + x_per; 
    p_new = p_nom + (-QN + (Vn + QN*Un)*Pigreco*inv(Pigreco'*inv(UN)*Un*Pigreco)*Pigreco'*inv(UN))*deltaX;
    value = Switching_Function(x_per,p_new,physical); % stop integration when there is a switching time
% value = s(end);

% stops the integration ifthe spacecraft is too close to Earth or Moon
Earth=physical.Earth;
Moon=physical.Moon;
warning1 = norm(Earth- s(1:round((NSTATE-1)/2)));
warning2 = norm(Moon- s(1:round((NSTATE-1)/2))); 
if warning1 < physical.RE
    value = 0;
elseif warning2 < physical.RM
    value = 0;
end
direction = 0;
isterminal = 1;


end