% derivatives of state, costate, U, V and swtich with costate update
function xxd= derivatives_NOG_update(inp1,inp2,inp3,Pigreco)
% Inputs: 
% inp1: [4*NSTATE+4*NSTATE^2+1x1]
% [x,p] nominal [2*NSTATEx1]
% [x,p] perturbed [2*NSTATEx1]
% [U,V] nominal [4*NSTATE^2x1]
% S perturbed
%
% inp2: physical
%
% inp3: S nominal sign of switching function in interval

% Output:
% xxd: derivatives vector [4*NSTATE+4*NSTATE^2+1x1]

physical=inp2;
NSTATE = physical.NSTATE;
x_nom=inp1(1:NSTATE);
p_nom=inp1(NSTATE+1:2*NSTATE);
x_per=inp1(2*NSTATE+1:3*NSTATE);
p_per=inp1(3*NSTATE+1:4*NSTATE);
phi = inp1(4*NSTATE+1:4*NSTATE+4*NSTATE^2);
UN = reshape(phi(1:NSTATE^2),[NSTATE,NSTATE]);
VN = reshape(phi(NSTATE^2+1:2*NSTATE^2),[NSTATE,NSTATE]);
Un = reshape(phi(2*NSTATE^2+1:3*NSTATE^2),[NSTATE,NSTATE]);
Vn = reshape(phi(3*NSTATE^2+1:4*NSTATE^2),[NSTATE,NSTATE]);
S = inp3;
% Sper = inp1(end);
QN = -VN*inv(UN);
deltaX = -x_nom + x_per; 
p_new = p_nom + (-QN + (Vn + QN*Un)*Pigreco*inv(Pigreco'*inv(UN)*Un*Pigreco)*Pigreco'*inv(UN))*deltaX;

% Derivatives of nominal state and costate
xd_nom=zeros(NSTATE,1); pd_nom=zeros(NSTATE,1);
[H_x_nom,H_p_nom]=HamiltonianFirstDerivatives(x_nom,p_nom,S,physical); 
[H_xx_nom,H_xp_nom,H_pp_nom]= HamiltonianSecondDerivatives(x_nom,p_nom,S,physical);
xd_nom(1:NSTATE,1)=H_p_nom(1:NSTATE,1);
pd_nom(1:NSTATE,1)=-H_x_nom(1:NSTATE,1);
dUN = (H_xp_nom'*UN + H_pp_nom*VN);
dVN = (-H_xx_nom*UN - H_xp_nom*VN);
dUN = reshape(dUN,[NSTATE^2,1]);
dVN = reshape(dVN,[NSTATE^2,1]);
dUn = (H_xp_nom'*Un + H_pp_nom*Vn);
dVn = (-H_xx_nom*Un - H_xp_nom*Vn);
dUn = reshape(dUn,[NSTATE^2,1]);
dVn = reshape(dVn,[NSTATE^2,1]);

% Derivatives of perturbed costate and Switch

% Derivatives of perturbed state, with costate update
% Sper = Switching_Function(x_per,p_new,physical);
[Sper]= Switching_Function(x_per,p_new,physical);
[~,H_p_per] = HamiltonianFirstDerivatives(x_per,p_new,Sper,physical); 
xd_per = H_p_per(1:NSTATE,1);
pd_per = zeros(size(p_per));

% assembly of output vector
xxd = [xd_nom;pd_nom;xd_per;pd_per;dUN;dVN;dUn;dVn;0];
