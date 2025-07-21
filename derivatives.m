% computation of equations of motion
function xxd = derivatives(inp1,inp2,inp3,inp4)
% Output:
% xxd: state and costate derivatives [2*NSTATEx1]

if nargin == 3
   % 3 inputs case: 
   % inp1: state and costate vector [NSTATEx1], inp2: structure for physical variables
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

xxd=zeros(2*NSTATE,1);
[H_x,H_p]=HamiltonianFirstDerivatives(x,p,S,physical); 
% state derivatives
xxd(1:NSTATE) = H_p;
% costate derivatives
xxd(NSTATE+1:2*NSTATE) = -H_x;