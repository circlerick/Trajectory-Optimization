% Definition of the Hamiltonian first derivatives H_x and H_p
function [H_x,H_p]= HamiltonianFirstDerivatives(x,p,S,physical)

% Definition of the Hamiltonian first derivatives H_x and H_p with evaluation
% of the matlabFunction H0_x_fun, H0_p_fun, S_x_fun and S_p_fun at the
% numerical values x and p (if EPS > 0, S_x_fun and S_p_fun are replaced by
% uS_x_fun and uS_p_fun)
% Inputs:
% x: state vector [NSTATEx1]
% p: costate vector  [NSTATEx1]
% S: Switching function
% physical: structure of physical variables and functions
%
% Outputs:
% H_x: derivative of H wrt x
% H_p: derivative of H wrt p

NSTATE = physical.NSTATE;
EPS = physical.EPS;
Tmax = physical.Tmax;
c = physical.c;
H_x = zeros([NSTATE,1]);
H_p = zeros([NSTATE,1]);

if EPS > 0
    if S < EPS*Tmax/c && S > -EPS*Tmax/c
        H0_x = H0_x_fun(x,p,Tmax,c,EPS);
        H0_p = H0_p_fun(x,p,Tmax,c,EPS);
        uS_x = uS_x_fun(x,p,Tmax,c,EPS);
        uS_p = uS_p_fun(x,p,Tmax,c,EPS);
        H_x = H0_x + uS_x;
        H_p = H0_p + uS_p;
    else
        if sign(S) ~= physical.shoot
            H_x = H0_x_fun(x,p,Tmax,c,EPS);
            H_p = H0_p_fun(x,p,Tmax,c,EPS);
        else
            H0_x = H0_x_fun(x,p,Tmax,c,EPS);
            H0_p = H0_p_fun(x,p,Tmax,c,EPS);
            S_x = S_x_fun(x,p,Tmax,c,EPS);
            S_p = S_p_fun(x,p,Tmax,c,EPS);
            H_x = H0_x + S_x;
            H_p = H0_p + S_p;
        end
    end
else
    if sign(S) ~= physical.shoot
        H_x = H0_x_fun(x,p,Tmax,c,EPS);
        H_p = H0_p_fun(x,p,Tmax,c,EPS);
    else
        H0_x = H0_x_fun(x,p,Tmax,c,EPS);
        H0_p = H0_p_fun(x,p,Tmax,c,EPS);
        S_x = S_x_fun(x,p,Tmax,c,EPS);
        S_p = S_p_fun(x,p,Tmax,c,EPS);
        H_x = H0_x + S_x;
        H_p = H0_p + S_p;
    end
end

