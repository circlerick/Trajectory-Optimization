% Definition of the Hamiltonian function H
function [H]= Hamiltonian(x,p,S,physical)

% Definition of the Hamiltonian function H with evaluation of the
% matlabFunction H0_fun and S_fun at the numerical values x and p (if EPS > 0, S_fun is replaced by uS_fun)
% Input:
% x: state vector [NSTATEx1]
% p: costate vector [NSTATEx1]
% S: Switching function
% physical: structure of physical variables and functions

EPS = physical.EPS;
Tmax = physical.Tmax;
c = physical.c;

if EPS > 0
    if S < EPS*Tmax/c && S > -EPS*Tmax/c
        H0 = H0_fun(x,p,Tmax,c,EPS);
        uS = uS_fun(x,p,Tmax,c,EPS);
        H = H0 + uS;
    else
        if sign(S) ~= physical.shoot 
            H = H0_fun(x,p,Tmax,c,EPS);
        else
            H0 = H0_fun(x,p,Tmax,c,EPS);
            S = S_fun(x,p,Tmax,c,EPS);
            H = H0 + S;
        end
    end
else
    if sign(S) ~= physical.shoot 
        H = H0_fun(x,p,Tmax,c,EPS);
    else
        H0 = H0_fun(x,p,Tmax,c,EPS);
        S = S_fun(x,p,Tmax,c,EPS);
        H = H0 + S;
    end
end
