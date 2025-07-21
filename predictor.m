            options = optimoptions('fsolve','Algorithm', 'trust-region-dogleg', 'Display','iter-detailed', ...
    'StepTolerance',1e-5,'FunctionTolerance',1e-12,'OptimalityTolerance',1e-3, 'FiniteDifferenceType', ...
    'forward', SpecifyObjectiveGradient=false, MaxIterations=10);
k1 = 0.1;
old_sol = solutions(:,end);
diff2 = (3*solutions(:,end) - 4*solutions(:,end-1) + solutions(:,end-2))/(steps(i-2)-val)*(val - steps(i-1));
[k_opt,val1] = fsolve(@(k) strange_function(k,physical,boundary,diff2,old_sol,par), k1, options);
newsol = old_sol - k_opt*diff2;
val1 = val1^2;
options = optimoptions('fsolve','Algorithm', 'levenberg-marquardt', 'Display','iter-detailed', ...
    'StepTolerance',1e-9,'FunctionTolerance',1e-10,'OptimalityTolerance',1e-3, 'FiniteDifferenceType', ...
    'forward', SpecifyObjectiveGradient=true, MaxIterations=100);
% [obj,states,times] = objfun_S_energy_mex(newsol,boundary.X0,physical,boundary);
% plot_func(states,times,physical,par,boundary);

function [val] = strange_function(k,physical,boundary,diff,old_sol,par) 


newsol = old_sol - k*diff;
% val = objfun_S_time_mex(newsol,boundary.X0,physical,boundary,par);
if physical.EPS > 0
val = objfun_S_energy_mex(newsol,boundary.X0,physical,boundary);
else
val = objfun_S_fuel_mex(newsol,boundary.X0,physical,boundary);
end
val = sqrt(val);
end