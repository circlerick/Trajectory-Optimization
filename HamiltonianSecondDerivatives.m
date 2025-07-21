% Definition of the Hamiltonian second derivatives H_xx,H_xp, and H_pp
function [H_xx,H_xp,H_pp]= HamiltonianSecondDerivatives(x,p,S,physical)

% Definition of the Hamiltonian second derivatives H_xx,H_xp, and H_pp with evaluation
% of the matlabFunction H0_xx_fun, H0_pp_fun, H0_xp_fun, S_xx_fun, S_xp_fun and S_pp_fun at the
% numerical values x and p (if EPS > 0, S_xx_fun, S_xp_fun and S_pp_fun are replaced by
% uS_xx_fun, uS_xp_fun and uS_pp_fun)
% Inputs:
% x: state vector [NSTATEx1]
% p: costate vector [NSTATEx1]
% S: Switching function
% physical: structure of physical variables and functions

EPS = physical.EPS;
Tmax = physical.Tmax;
c = physical.c;

if EPS > 0
    if S > -EPS*Tmax/c && S < EPS*Tmax/c
        H0_xx = H0_xx_fun(x,p,Tmax,c,EPS);
        H0_pp = H0_pp_fun(x,p,Tmax,c,EPS);
        H0_xp = H0_xp_fun(x,p,Tmax,c,EPS);
        uS_xx = uS_xx_fun(x,p,Tmax,c,EPS);
        uS_pp = uS_pp_fun(x,p,Tmax,c,EPS);
        uS_xp = uS_xp_fun(x,p,Tmax,c,EPS);
        H_xx = H0_xx + uS_xx;
        H_pp = H0_pp + uS_pp;
        H_xp = H0_xp + uS_xp;
    else
        if sign(S) ~= physical.shoot
            H0_xx = H0_xx_fun(x,p,Tmax,c,EPS);
            H0_pp = H0_pp_fun(x,p,Tmax,c,EPS);
            H0_xp = H0_xp_fun(x,p,Tmax,c,EPS);
            H_xx = H0_xx;
            H_pp = H0_pp;
            H_xp = H0_xp;
        else
            H0_xx = H0_xx_fun(x,p,Tmax,c,EPS);
            H0_pp = H0_pp_fun(x,p,Tmax,c,EPS);
            H0_xp = H0_xp_fun(x,p,Tmax,c,EPS);
            S_xx = S_xx_fun(x,p,Tmax,c,EPS);
            S_pp = S_pp_fun(x,p,Tmax,c,EPS);
            S_xp = S_xp_fun(x,p,Tmax,c,EPS);
            H_xx = H0_xx + S_xx;
            H_pp = H0_pp + S_pp;
            H_xp = H0_xp + S_xp;
        end
    end
else
if sign(S) ~= physical.shoot
  H_xx = H0_xx_fun(x,p,Tmax,c,EPS);
  H_pp = H0_pp_fun(x,p,Tmax,c,EPS);
  H_xp = H0_xp_fun(x,p,Tmax,c,EPS);

else
  H0_xx = H0_xx_fun(x,p,Tmax,c,EPS);
  H0_pp = H0_pp_fun(x,p,Tmax,c,EPS);
  H0_xp = H0_xp_fun(x,p,Tmax,c,EPS);
  S_xx = S_xx_fun(x,p,Tmax,c,EPS);
  S_pp = S_pp_fun(x,p,Tmax,c,EPS);
  S_xp = S_xp_fun(x,p,Tmax,c,EPS);
  H_xx = H0_xx + S_xx;
  H_pp = H0_pp + S_pp;
  H_xp = H0_xp + S_xp;
end
end

