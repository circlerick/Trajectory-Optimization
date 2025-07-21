% computation of equations of motion and switching function derivative
function xxd= derivatives_S(inp1,inp2,inp3,inp4)

if nargin == 3
   % 3 inputs case: 
   % inp1: states and costates vector [NSTATEx1], inp2: structure for physical variables
   % and functions, inp3: switching function
   physical=inp2;
   NSTATE = physical.NSTATE;
   x=inp1(1:NSTATE);
   p=inp1(NSTATE+1:2*NSTATE);
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

xd=zeros(NSTATE,1);pd=zeros(NSTATE,1);xxd=zeros(2*NSTATE+1,1);
[H_x,H_p]=HamiltonianFirstDerivatives(x,p,S,physical); 
xd(1:NSTATE,1)=H_p(1:NSTATE,1);  % states derivatives [NSTATEx1]
pd(1:NSTATE,1)=-H_x(1:NSTATE,1); % costates derivatives [NSTATEx1]
[~,dSdt]= Switching_Function(x,p,physical); % Switching function derivative
xxd(1:NSTATE) = xd;
xxd(NSTATE+1:2*NSTATE) = pd;
xxd(2*NSTATE+1) = dSdt;