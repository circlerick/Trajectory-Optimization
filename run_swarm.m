function lam_opt = run_swarm(physical,par,boundary)
clc
% Generate the co-state swarm for the X0: Swarm initial definition 
EPS = physical.EPS;
K = par.vmax; 
ITERS = par.ITERS;
JNET = par.JNET;
X0 = boundary.X0;
box_lb = par.box_lb;
box_ub = par.box_ub;
center = (box_ub + box_lb)/2;
radius = (box_ub - box_lb)/2;
v_max = K*radius; 
val = length(box_ub);
lam_net = zeros(val,JNET);    %current costate of each particle  
v_net = zeros(val,JNET);
dR = 10000*ones(1,JNET);  % Best distance co-state of each particle
obj_net = 10000*ones(1,JNET); % Current distance to target 
% Initialize the swarm co-states and velocities
for i = 1 : JNET
    lam_net(:,i) = center + radius.*(1 - 2*rand(size(radius)));
    v_net(:,i) = v_max.*(2*rand(size(v_max)) - 1);
end
lam_opt_net = lam_net; % Best co-state of each particle
lam_opt = lam_net(:,1);

% Swarm Iteration 
for iter = 1:ITERS

    for j=1:JNET  
        lam = lam_net(:,j);

        switch par.problem
            case 'minimumtime'
                obj = objfun_S_time_mex(lam,X0,physical,boundary,par);
            case 'freetime'
                obj = objfun_S_time_mex(lam,X0,physical,boundary,par);
            case 'fixedtime'
                if EPS > 0
                    obj = objfun_S_energy_mex(lam,X0,physical,boundary);
                else
                    obj = objfun_S_fuel_mex(lam,X0,physical,boundary);
                end
        end

        dR(j) = obj;

    end
    
% Setting the swarm new costate 

for k = 1:JNET
    if dR(k) < obj_net(k)
        obj_net(k) = dR(k);
        lam_opt_net(:,k) = lam_net(:,k);
    end
end
[dRmin,index]=min(obj_net);   
lam_opt = lam_opt_net(:,index);
% SWARM algorithm
% lam_net(:,1)=lam_opt;
for j=1:JNET
% update velocities
v_net(:,j)= K*((1+rand(1,val))*v_net(:,j)*0.1 + 1.49445*rand(1,val)*(lam_opt_net(:,j) ... 
            - lam_net(:,j)) + 1.49445*rand(1,val)*(lam_opt-lam_net(:,j)));

% fix box velocity  limits
for i=1:val
if abs(v_net(i,j))>v_max(i,1)    
v_net(i,j)=sign(v_net(i,j))*v_max(i,1);
end
end

% update co-states
lam_net(:,j)= lam_net(:,j) + v_net(:,j);

% fix co-state  box limits
for i = 1:val

    if lam_net(i,j) > box_ub(i)
        lam_net(i,j) = box_ub(i);
        v_net(i,j)=0; % the Inertia term is nulled
    elseif lam_net(i,j) < box_lb(i)  
        lam_net(i,j) = box_lb(i);
        v_net(i,j)=0; % the Inertia term is nulled
    end
end
end

iteration_swarm = iter
best_obj = dRmin
end

