% Computes switching Function and its derivatives
function [S,Sd,Sdd]= Switching_Function(x,p,physical)

% Definition of the Switching function and its derivatives with evaluation of the
% matlabFunction S_fun, S_x_fun, S_p_fun, S_xx_fun, S_pp_fun, S_xp_fun
% Input:
% x: state vector [NSTATEx1]
% p: costate vector [NSTATEx1]
% physical: structure of physical variables and functions
% Output:
% S: switching function
% Sd: switching function first derivatives
% Sdd: switching function second derivatives

Tmax = physical.Tmax;
c = physical.c;
EPS = physical.EPS;
S = S_fun(x,p,Tmax,c,EPS);

if nargout > 1

S_x = S_x_fun(x,p,Tmax,c,EPS);
S_p = S_p_fun(x,p,Tmax,c,EPS);
[H_x,H_p]= HamiltonianFirstDerivatives(x,p,S,physical);

if nargout > 2

S_xx = S_xx_fun(x,p,Tmax,c,EPS);
S_pp = S_pp_fun(x,p,Tmax,c,EPS);
S_xp = S_xp_fun(x,p,Tmax,c,EPS);
[H_xx,H_xp,H_pp]= HamiltonianSecondDerivatives(x,p,S,physical);
Sdd = H_p'*S_xx*H_p + S_x'*H_xp*H_p - H_p'*S_xp*H_x - S_p'*H_xx*H_p -H_x'*S_xp*H_p - S_x'*H_pp*H_x + H_x'*S_pp*H_x+ S_p'*H_xp*H_x ;    
end

Sd  = S_x'*H_p-S_p'*H_x;
end

end

