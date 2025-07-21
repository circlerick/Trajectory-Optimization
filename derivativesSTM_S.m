% computation of equations of motion, state transtion matrix derivatives
% and switching function derivative
function [xd,pd]= derivativesSTM_S(inp1,inp2,inp3,inp4)

if nargin == 3
   % 3 input case: 
   % inp1: states and costates vector [NSTATEx1], inp2: structure for physical variables
   % and functions, inp3: switching function
   physical=inp2;
   NSTATE = physical.NSTATE;
   x=inp1(1:NSTATE);
   p=inp1(NSTATE+1:2*NSTATE);
   phi = reshape(inp1(2*NSTATE+1:end-1),[2*NSTATE,2*NSTATE]);
   S = inp3;
else
   % 4 inputs case: 
   % inp1: states vector [NSTATEx1], inp2: costates vector [NSTATEx1], inp3: structure for physical variables
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
   xd(1:NSTATE,1)=H_p(1:NSTATE,1); % xd: states derivatives  [NSTATEx1]
   pd(1:NSTATE,1)=-H_x(1:NSTATE,1); % pd: costates derivatives  [NSTATEx1]
else    
   xd(1:NSTATE,1)=H_p(1:NSTATE,1); % xd: states derivatives  [NSTATEx1]
   pd(1:NSTATE,1)=-H_x(1:NSTATE,1); % pd: costates derivatives  [NSTATEx1]
   dphi = [H_xp' H_pp; -H_xx -H_xp]*phi; % state transtion matrix derivatives [2NSTATEx2NSTATE]
   dSTM = reshape(dphi,[(2*NSTATE)^2,1]); % converstion of STM derivatives in vector
   [~,dSdt]= Switching_Function(x,p,physical); % Switching function derivative
   xd = [xd;pd;dSTM;dSdt];
end