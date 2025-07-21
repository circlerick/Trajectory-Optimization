% Compute the derivatives of state, costate, U, V used for backward
% propagation.
function xxd = derivativesSTM_suff(inp1,inp2,inp3)

% Inputs:
% inp1: states and costates vector and vectorized U and V [(2*NSTATE+4*NSTATE^2)x1]
% inp2: structure for physical variables and functions
% inp3: switching function

% Output:
% xxd: vector of derivatives [(2*NSTATE+4*NSTATE^2)x1]

physical=inp2;
NSTATE = physical.NSTATE;
xxd = zeros(2*NSTATE+1+4*NSTATE^2,1);
x=inp1(1:NSTATE);
p=inp1(NSTATE+1:2*NSTATE);
phi = inp1(2*NSTATE+1:2*NSTATE+4*NSTATE^2);
% Extrapolate matrices
UN = reshape(phi(1:NSTATE^2),[NSTATE,NSTATE]);
VN = reshape(phi(NSTATE^2+1:2*NSTATE^2),[NSTATE,NSTATE]);
Un = reshape(phi(2*NSTATE^2+1:3*NSTATE^2),[NSTATE,NSTATE]);
Vn = reshape(phi(3*NSTATE^2+1:end),[NSTATE,NSTATE]);
S = inp3;

% Compute Hamiltonian derivatives
xd=zeros(NSTATE,1);pd=zeros(NSTATE,1);
[H_x,H_p]=HamiltonianFirstDerivatives(x,p,S,physical); 
[H_xx,H_xp,H_pp]= HamiltonianSecondDerivatives(x,p,S,physical);

% Compute inputs derivatives 
xd(1:NSTATE,1)=H_p(1:NSTATE,1);
pd(1:NSTATE,1)=-H_x(1:NSTATE,1);
dUN = (H_xp'*UN + H_pp*VN);
dVN = (-H_xx*UN - H_xp*VN);
dUN = reshape(dUN,[NSTATE^2,1]);
dVN = reshape(dVN,[NSTATE^2,1]);
dUn = (H_xp'*Un + H_pp*Vn);
dVn = (-H_xx*Un - H_xp*Vn);
dUn = reshape(dUn,[NSTATE^2,1]);
dVn = reshape(dVn,[NSTATE^2,1]);
[~,dSdt]= Switching_Function(x,p,physical);
% Assembly of output vector
xxd(1:end) = [xd;pd;dUN;dVN;dUn;dVn;dSdt];

