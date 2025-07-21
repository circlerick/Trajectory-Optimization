%% Main script: it includes all the inputs and functions that have to be changed for the specific optimal control problem
% Instructions: -set all the inputs for the specific control problem:
%                   states vector xsym, costates vector psym, Hamiltonian H0, switching function Ssym, physical inputs, simulation inputs, swarm inputs, control problem inputs (X0,Tfin,A,b,c0,c1,c2)
%               -run this main script
%               -run Main_Extremal (first order conditions)
%               -run main_suff (second order conditions)
%               

%% Current optimal control problem: CP3BP

clc
clear all
close all


%% Inputs and functions that have to be settled
problem = 'fixedtime'; % possible types of problem: use 'freetime' when final time is not fixed, use 'minimumtime' if the final time is free and you want to minimize it, use 'fixedtime' otherwise 
EPS = 0;               % logical variable for homotopy in the integral cost (from minimum energy to minimum fuel problem)

%% Physical inputs
NSTATE=5;                  % degrees of freedom

% Adimensionalization units
G = 6.67430e-20;              % universal constant [km^3/(kg*s^2)]
mE = 5.972e24;                % Earth mass [kg]
mM = 7.342e22;                % Moon mass [kg]
mU = 500;                     % mass unit [kg]
lU = 3.84405000e5;            % length unit [km], E-M mean distance
tU = 3.75676967e5;            % time unit
% mu = mM/(mM + mE);          % mu of Earth-Moon system
mu = 1.21506683e-2;
vU = lU/tU;                   % velocity unit
g = 9.80665/(vU/tU)*1e-3;     % Earth mean grav. acc [km/s^2]
Earth = [-mu; 0];             % Earth position
Moon = [(1-mu); 0];           % Moon position

% Spacecraft parameters
m0 = 500/mU;                  % initial mass [kg]
Tmax = 0.5/(mU*vU/tU)*1e-3;     % max thrust [kN]
Isp = 3000/tU;                % specific impulse [s]
c = Isp*g;                    % gas effective velocity

% Constraints
RE = 6378/lU;                 % Earth mean radius
RM = 1737.4/lU;               % Moon mean radius
Hin = 1e4/lU;                 % initial orbit altitude [km]
hf = 7e4/lU;                  % final orbit altitude [km]
vcircE = sqrt(G*mE/(RE + Hin)*tU^2/lU^3); % orbit velocity [km/s]
vcircM = sqrt(G*mM/(hf)*tU^2/lU^3); % orbit velocity [km/s]
distE_min = RE + 10/lU;
distM_min = RM + 100/lU;

%% Definition of the Hamiltonian H=H0+k(S)S (k(S)=1 for S>=0 and k(S)=0 for
%% S<0)
syms csym EPSsym Tsym real
syms x [NSTATE 1] real
syms p [NSTATE 1] real
xsym=x;      % states vector
psym=p;      % costates vector
% 2D case
r1 = sqrt((x1+mu)^2 + x2^2);     % distance of the spacecraft from the Earth
r2 = sqrt((x1+mu-1)^2 + x2^2);   % distance of the spacecraft from the Moon
gin = [(x1 - (1-mu)*(x1+mu)/r1^3 - mu*(x1+mu-1)/r2^3); (x2 - (1-mu)*x2/r1^3 - mu*x2/r2^3)];
hin = [2*x4; -2*x3];


% Case 3D
% r1 = sqrt((x1+mu)^2 + x2^2 + x3^2);
% r2 = sqrt((x1+mu-1)^2 + x2^2 + x3^2);
% gin = [(x1 - (1-mu)*(x1+mu)/r1^3 - mu*(x1+mu-1)/r2^3); (x2 - (1-mu)*x2/r1^3 - mu*x2/r2^3); -(1-mu)*x3/r1^3 - mu*x3/r2^3];
% hin = [2*x5; -2*x4; 0];

shoot = +1;   % logical variable for Pontryagin maximum/minimum Principle (set +1 for maximum and -1 for minimum)
if shoot > 0
    switch problem
        case 'minimumtime'
            % Case 2D
            Ssym = Tsym*(sqrt(p3^2+p4^2)/x5-p5/csym);               % symbolic S
            H0 = dot([p1 p2],[x3 x4]) + dot([p3 p4],(gin+hin)) - 1; % symbolic H0
            uSsym = Ssym;
        case 'fixedtime'
            % definition of the Hamiltonian adding the homotopy parameter in the integral cost: use uSsym instead of Ssym
            Ssym = Tsym*(sqrt(p3^2+p4^2)/x5-p5/csym-1/csym);
            if EPS > 0
                u = (EPSsym+Ssym*csym/Tsym)/(2*EPSsym);
                uSsym = u*(Ssym - Tsym/csym*(-EPSsym+EPSsym*u));
            else
                uSsym = Ssym;
            end
            H0 = dot([p1 p2],[x3 x4]) + dot([p3 p4],(gin+hin)); % symbolic H0
    end
else
    switch problem
        case 'minimumtime'
            % Caso 2D
            Ssym = Tsym*(-sqrt(p3^2+p4^2)/x5-p5/csym);
            H0 = dot([p1 p2],[x3 x4]) + dot([p3 p4],(gin+hin)) + 1;
    
            % Caso 3D
            % Ssym = Tmax*(-sqrt(p4^2+p5^2+p6^2)/x7-p7/c);
            % H0 = dot([p1 p2 p3],[x4 x5 x6]) + dot([p4 p5 p6],(gin+hin)) + 1;
    
            uSsym = Ssym;

        case 'fixedtime'
%             Ssym = Tsym*(-sqrt(p3^2+p4^2)/x5-p5/c+1/csym);
%             if EPS > 0
%                 u = (EPSsym-Ssym*csym/Tsym)/(2*EPSsym);
%                 uSsym = u*(Ssym + Tsym/csym*(-EPSsym+EPSsym*u));
%             else
%                 uSsym = Ssym;
%             end
%             H0 = dot([p1 p2],[x3 x4]) + dot([p3 p4],(gin+hin));
%     end

            Ssym = Tsym*(-sqrt(p4^2+p5^2+p6^2)/x7-p7/c+1/csym);
            if EPS > 0
                u = (EPSsym-Ssym*csym/Tsym)/(2*EPSsym);
                uSsym = u*(Ssym + Tsym/csym*(-EPSsym+EPSsym*u));
            else
                uSsym = Ssym;
            end
            H0 = dot([p1 p2 p3],[x4 x5 x6]) + dot([p4 p5 p6],(gin+hin));
    end
end
                                            

%% Simulations Inputs
Nint=600;                     % integration steps
Nstep = 20;                   % Steps for homotophy
i = Nstep:-1:1;
steps = (i.^2-1)./(Nstep^2-1);
Tmin = Tmax/20;                % Thrust target for homotopy
val1 = 1;                  % Starting value for homotopy
val2 = 0;                  % Final value for homotopy

%% Control Problem Inputs
x01 = -mu;
x02 = -(RE+Hin);
xf1 = 1-mu+hf;
xf2 = 0;
v0 = [vcircE; 0];
% vf = [vcircM; 0];
% vf = [0; -0.489686448043498]; % velocity for 70.000km DRO
x03 = v0(1);
x04 = v0(2);
% Caso 2D
X0=[x01 x02 x03 x04 m0]';  % initial state

% Caso 3D
% x01 = -0.019488511458668; % x01 = -mu;
% x02  = -0.016033479812051; % x02 = -(RE+Hin);
% v0 = [8.918881923678198; -4.081793688818725; 0];% v0 = [vcircE; 0];
% % % vf = [vcircM; 0];
% % vf = [0; -0.489686448043498; 0]; % velocity for 70.000km DRO
% x03 = v0(1);
% x04 = v0(2);
% % % Caso 2D
% % X0=[x01 x02 x03 x04 m0]';                  % initial state
% % % Caso 3D
% X0=[x01 x02 0 v0' m0]';

% For halo orbit
% minTOF = 8.6404*24*3600/tU; % 10N
% minTOF = 29.1512*1.3*24*3600/tU; % 2N
% minTOF = 84.3688*24*3600/tU; % 2N


% For lunar DRO
%minTOF = 2.51415458253978; % old
%minTOF = 2.3837046913798; % new

% For lunar DRO - new point
% minTOF =  2.0781758856351*1.3; % 3N new new
% minTOF = 2.9273373266759*1.3; % 2N
% minTOF = 5.40609459513934*1.3; % For 1N Tmax
minTOF = 10.1417345344686*1.3; % 0.5N
% minTOF = 16.7382491134173*1.5; % 0.3N 

Tfin = minTOF;    % final time
T0 = 0;                % initial time
syms m real            % free variables in the final state    

% Caso 2D
% b= [0.987855268947401 0.231415971463804 0.353976989530796 -0.0130170663063889 m]'; % lunar orbit at x axis crossing (x = 1-mu)
b = [0.9878493317 0.231399371017172 0.354042170150869 -0.0130096105758475 m]';
% b= [xf1 xf2 vf(1) vf(2) m]';                      % final state conditions (lunar orbit at y axis crossing)
% b= [0.823385182067467 0 0 0.134184170262437 m]';                      % final state conditions (halo orbit)
A=[1 0 0 0 0; 0 1 0 0 0; 0 0 1 0 0; 0 0 0 1 0; 0 0 0 0 0];    % linear transformation of the final state conditions

% Caso 3D
% b= [0.823385182067467 0 -0.022277556273235 0 0.134184170262437 0 m]';                      % final state conditions (halo orbit)
% A=[1 0 0 0 0 0 0; 0 1 0 0 0 0 0; 0 0 1 0 0 0 0; 0 0 0 1 0 0 0; 0 0 0 0 1 0 0; 0 0 0 0 0 1 0; 0 0 0 0 0 0 0];    % linear transformation of the final state conditions

Xfsym=sym(A)*b;                         % final state
Xf=double(Xfsym);
[Q,R]=qr(A);
Sigma=Q(:,diag(R) == 0);                % tangent space to the target
Pigreco=Q(:,diag(R) > 0);               % normal space to the target
c0=zeros(1,1);
c1=zeros(NSTATE,1);
c2=zeros(NSTATE,NSTATE);
g0=c0+c1'*xsym+1/2*xsym'*c2*xsym;       % final cost
dg0_dx = gradient(g0, xsym);
g0_x_fun=matlabFunction(dg0_dx,'Vars',xsym);
g0_x=g0_x_fun(Xf);                      % final cost first derivatives at the final state
d2g0_dxdx= jacobian(dg0_dx, xsym);
g0_xx_fun=matlabFunction(d2g0_dxdx,'Vars',xsym);
g0_xx=g0_xx_fun(Xf);                    % final cost second derivatives at the final state
   
%% Swarm Inputs
vmax = 0.2;                    % coefficient for max velocity magnitude (scalar between 0 and 1)
ITERS=20;                      % number of iterations of the swarm algorithm (scalar > 0)
JNET=100;                       % Swarm Population (scalar > 0)

switch problem
    case 'minimumtime'
        Tfmax = 3600*24*100/tU;
        Tfmin = 3600*24*151/tU;
        if shoot > 0
            % bounds for swarm box
            box_lb=[-30 -30 -0.5 -0.5 -40 Tfmin]';
            box_ub=[30 30 0.5 0.5 -10 Tfmax]';
        else
            % bounds for swarm box
            box_lb=[-10 -10 -0.1 -0.1 0.1 Tfmin]';
            box_ub=[10 10 0.1 0.1 5 Tfmax]';
        end

    case 'freetime'
        Tfmax = 3600*24*15/tU;
        Tfmin = 3600*24*5/tU;
        if shoot > 0
            % bounds for swarm box
            box_lb=[-10 -10 -0.05 -0.05 -5 Tfmin]';
            box_ub=[10 10 0.05 0.50 -0.05 Tfmax]';
        else
            % bounds for swarm box
            box_lb=[-10 -10 -0.1 -0.1 0.1 Tfmin]';
            box_ub=[10 10 0.1 0.1 5 Tfmax]';
        end

    case 'fixedtime'
        if shoot > 0
            % bounds for swarm box
            box_lb=[-5 -5 -0.05 -0.05 -0.25]';
            box_ub=[5 5 0.05 0.05 -0.1]';
        else
            % bounds for swarm box
            box_lb=[-2 -2 -0.05 -0.05 0.1]';
            box_ub=[2 2 0.05 0.05 2]';
        end
end

% NOG inputs
Tper = 50*24*3600/tU; % perturbation time
MaxPert = 1e-4; % perturbation max magnitude

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

% H0 symbolic function
matlabFunction(H0,'Vars',{xsym,psym,Tsym,csym,EPSsym},'Optimize',true,'File','H0_fun.m'); 

% Switching symbolic function 
matlabFunction(Ssym,'Vars',{xsym,psym,Tsym,csym,EPSsym},'Optimize',true,'File','S_fun.m');
matlabFunction(uSsym,'Vars',{xsym,psym,Tsym,csym,EPSsym},'Optimize',true,'File','uS_fun.m');

% Hamiltonian and Switching function First Derivatives symbolic functions
dH0_dx = gradient(H0, xsym);
dH0_dp = gradient(H0, psym);
dS_dx = gradient(Ssym, xsym);
dS_dp = gradient(Ssym, psym);
duS_dx = gradient(uSsym, xsym);
duS_dp = gradient(uSsym, psym);
matlabFunction(dH0_dx,'Vars',{xsym,psym,Tsym,csym,EPSsym},'Optimize',true,'File','H0_x_fun.m');
matlabFunction(dH0_dp,'Vars',{xsym,psym,Tsym,csym,EPSsym},'Optimize',true,'File','H0_p_fun.m');
matlabFunction(dS_dx,'Vars',{xsym,psym,Tsym,csym,EPSsym},'Optimize',true,'File','S_x_fun.m');
matlabFunction(dS_dp,'Vars',{xsym,psym,Tsym,csym,EPSsym},'Optimize',true,'File','S_p_fun.m');
matlabFunction(duS_dx,'Vars',{xsym,psym,Tsym,csym,EPSsym},'Optimize',true,'File','uS_x_fun.m');
matlabFunction(duS_dp,'Vars',{xsym,psym,Tsym,csym,EPSsym},'Optimize',true,'File','uS_p_fun.m');
   
% Hamiltonian and Switching function Second Derivatives symbolic functions
d2H0_dxdx = jacobian(dH0_dx, xsym);
d2H0_dpdp = jacobian(dH0_dp, psym);
d2H0_dxdp = jacobian(dH0_dx, psym);
d2S_dxdx = jacobian(dS_dx, xsym);
d2S_dpdp = jacobian(dS_dp, psym);
d2S_dxdp = jacobian(dS_dx, psym);
d2uS_dxdx = jacobian(duS_dx, xsym);
d2uS_dpdp = jacobian(duS_dp, psym);
d2uS_dxdp = jacobian(duS_dx, psym);
matlabFunction(d2H0_dxdx,'Vars',{xsym,psym,Tsym,csym,EPSsym},'Optimize',true,'File','H0_xx_fun.m');
matlabFunction(d2H0_dpdp,'Vars',{xsym,psym,Tsym,csym,EPSsym},'Optimize',true,'File','H0_pp_fun.m');
matlabFunction(d2H0_dxdp,'Vars',{xsym,psym,Tsym,csym,EPSsym},'Optimize',true,'File','H0_xp_fun.m');
matlabFunction(d2S_dxdx,'Vars',{xsym,psym,Tsym,csym,EPSsym},'Optimize',true,'File','S_xx_fun.m');
matlabFunction(d2S_dpdp,'Vars',{xsym,psym,Tsym,csym,EPSsym},'Optimize',true,'File','S_pp_fun.m');
matlabFunction(d2S_dxdp,'Vars',{xsym,psym,Tsym,csym,EPSsym},'Optimize',true,'File','S_xp_fun.m');
matlabFunction(d2uS_dxdx,'Vars',{xsym,psym,Tsym,csym,EPSsym},'Optimize',true,'File','uS_xx_fun.m');
matlabFunction(d2uS_dpdp,'Vars',{xsym,psym,Tsym,csym,EPSsym},'Optimize',true,'File','uS_pp_fun.m');
matlabFunction(d2uS_dxdp,'Vars',{xsym,psym,Tsym,csym,EPSsym},'Optimize',true,'File','uS_xp_fun.m');

%% Save variables and functions in structures

% Simulation variables
par.Nint=Nint;                    % integration steps
par.ITERS=ITERS;                  % number of iterations of the swarm algorithm
par.JNET=JNET;                    % Swarm Population
par.problem = problem;
par.steps = steps;
par.val1 = val1;
par.val2 = val2;
par.box_lb = box_lb;
par.box_ub = box_ub;
par.tU = tU;
par.lU = lU;
par.vmax = vmax;

% Control Problem variables
global boundary
boundary.T0 = 0;                 % initial time
boundary.Tfin=Tfin;              % final time
boundary.A=A;                    % linear transformation of the final state conditions
boundary.Xf=Xf;                  % final state
boundary.X0=X0;                  % initial state
boundary.Sigma=Sigma;            % tangent space to the target
boundary.Pigreco=Pigreco;        % normal space to the target
boundary.g0_xx = g0_xx;          % final cost second derivatives at the final state

% Physical variables and functions
global physical 
physical.Tmax=Tmax;              % max thrust
physical.g=g;                    % Earth mean grav. acc
physical.mu=mu;                  % mu of Earth-Moon system
physical.RE=distE_min;           % Earth warning distance
physical.RM=distM_min;           % Moon warning distance
physical.c=c;                    % gas ejection velocity
physical.Earth = Earth;          % Earth position
physical.Moon = Moon;            % Moon position
physical.NSTATE=NSTATE;          % degrees of freedom
physical.shoot = shoot;
physical.g0_x=g0_x;              % final cost first derivatives at the final state
physical.EPS = EPS;
physical.mu = mu;

clearvars -except functions physical boundary par Tper MaxPert