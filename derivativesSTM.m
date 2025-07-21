% computation of equations of motion, state transtion matrix derivatives
% and switching function derivative
function [xd,pd]= derivativesSTM(inp1,inp2,inp3,inp4)

% computation of equations of motion and state transtion matrix derivatives
% Output:
% xd: states derivatives 
% pd: costates derivatives 
if nargin == 3
% 3 input case: 
% inp1: states and costates vector, inp2: structure for physical variables
% and functions, inp3: switching function    
   physical=inp2;
   NSTATE = physical.NSTATE;
   x=inp1(1:NSTATE);
   p=inp1(NSTATE+1:2*NSTATE);
   phi = reshape(inp1(2*NSTATE+1:end),[2*NSTATE,2*NSTATE]);
   S = inp3;
else
% 4 input case: 
% inp1: states vector, inp2: costates vector, inp3: structure for physical variables
% and functions, inp4: switching function    
   physical=inp3; 
   NSTATE = physical.NSTATE;
   x=inp1;
   p=inp2;
   S = inp4;
end

xd=zeros(NSTATE,1);pd=zeros(NSTATE,1);
[H_x,H_p]=HamiltonianFirstDerivatives(x,p,S,physical); 
[H_xx,H_xp,H_pp]= HamiltonianSecondDerivatives(x,p,S,physical);

if nargout > 1
   xd(1:NSTATE,1)=H_p(1:NSTATE,1); 
   pd(1:NSTATE,1)=-H_x(1:NSTATE,1);
else   
   xd(1:NSTATE,1)=H_p(1:NSTATE,1);
   pd(1:NSTATE,1)=-H_x(1:NSTATE,1);
   dphi = [H_xp' H_pp; -H_xx -H_xp]*phi;
   dSTM = reshape(dphi,[(2*NSTATE)^2,1]);
   xd = [xd;pd;dSTM];
end