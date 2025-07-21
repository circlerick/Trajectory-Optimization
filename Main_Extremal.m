% This script can be used to find a feasible costate solution for the
% problem initialize in Main_3BP. 2 approaches are implemented: firstly a
% particle swarm is used to find a solution, then the solution is refined
% using fsolve. Analytic derivatives are implemented in fsolve to improve
% the solver convergence.

% Use particle swarm to find an initial solution
clc
sol1 = run_swarm(physical,par,boundary);
 
%% Refinement of the solution using fsolve
clc 

% options for fsolve
% sol1 = sol10 + sol10.*[1-2*rand(size(sol10))]/1000;

options = optimoptions('fsolve','Algorithm', 'levenberg-marquardt', 'Display','iter-detailed', ...
    'StepTolerance',1e-10,'FunctionTolerance',1e-12,'OptimalityTolerance',1e-5, 'FiniteDifferenceType', ...
    'forward', SpecifyObjectiveGradient=true, UseParallel=true, MaxIterations=30);


options = optimoptions('fsolve','Algorithm', 'trust-region-dogleg', 'Display','iter-detailed', ...
    'StepTolerance',1e-9,'FunctionTolerance',1e-8,'OptimalityTolerance',1e-3, 'FiniteDifferenceType', ...
    'forward', SpecifyObjectiveGradient=true, UseParallel=true, MaxIterations=50);

switch par.problem
    case 'minimumtime'
        
        [sol2,res] = fsolve(@(lambda) objfunSTM_S_time(lambda,boundary.X0,physical,boundary,par), sol1, options);
        [obj,states,times] = objfun_S_time(sol2,boundary.X0,physical,boundary,par);
    case 'freetime'
        [sol2,res] = fsolve(@(lambda) objfunSTM_S_time_mex(lambda,boundary.X0,physical,boundary,par), sol1, options);
        [obj,states,times] = objfun_S_time_mex(sol2,boundary.X0,physical,boundary,par);
    case 'fixedtime'
        if physical.EPS > 0
            [sol2,res] = fsolve(@(lambda) objfunSTM_S_energy_mex(lambda,boundary.X0,physical,boundary), sol1, options);
            [obj,states,times] = objfun_S_energy_mex(sol2,boundary.X0,physical,boundary);
        else
            [sol2,res] = fsolve(@(lambda) objfunSTM_S_fuel_mex(lambda,boundary.X0,physical,boundary), sol1, options);
            [obj,states,times] = objfun_S_fuel_mex(sol2,boundary.X0,physical,boundary);
        end
end

% plot of the solution
plot_func(states,times,physical,par,boundary);
sol2
states(end,5)
%% Homotopy section
% solutions = homotopy(sol2,par,'boundary','Tfin');

solutions = homotopy(sol2,par,'physical','EPS');
% solutions = homotopy(sol2,par,'physical','Tmax');
sol3 = solutions(:,end);
switch par.problem
    case 'minimumtime' 
        [obj,states,times] = objfun_S_time_mex(sol3,boundary.X0,physical,boundary,par);
    case 'freetime'
        [obj,states,times] = objfun_S_time_mex(sol3,boundary.X0,physical,boundary,par);
    case 'fixedtime'
        if physical.EPS > 0 
            [obj,states,times] = objfun_S_energy_mex(sol3,boundary.X0,physical,boundary);
        else
            [obj,states,times] = objfun_S_fuel_mex(sol3,boundary.X0,physical,boundary);
        end
end
plot_func(states,times,physical,par,boundary);

%%
mf = [];

% val = [1,11,21,31,41,51,61,71,81,91,101,111,121];
val = [1,2,3,4,5,6,7,8,9,10,11];
for k = 1:length(val)

    j = val(k);
%     physical.Tmax = steps(j);
    sol = solutions(:,j);
%     [obj,states,times] = objfun_S_time_mex(sol,boundary.X0,physical,boundary,par);
 
% boundary.Tfin = par.steps(j);
    physical.EPS = par.steps(j);
        if physical.EPS > 0
            [obj,states,times] = objfun_S_energy_mex(sol,boundary.X0,physical,boundary);
        else
            [obj,states,times] = objfun_S_fuel_mex(sol,boundary.X0,physical,boundary);
        end
    Sw = states(:,end)*physical.c/physical.Tmax;

    thrust = zeros(size(Sw));
    for i = 1:length(Sw)
    if physical.EPS > 0
        if Sw(i) < physical.EPS && Sw(i) > -physical.EPS
            thrust(i) = (physical.EPS+physical.shoot*Sw(i))/(2*physical.EPS);
        else
            if sign(Sw(i)) ~= physical.shoot 
                thrust(i) = 0;
            else
                thrust(i) = 1;
            end
        end
    else
        if sign(Sw(i)) ~= physical.shoot 
            thrust(i) = 0;
        else
            thrust(i) = 1;
        end
    end
    end
    mf = [mf; states(end,5)];
%     figure(1)
%     hold on 
%     grid on 
%     plot(times*par.tU/24/3600,Sw,LineWidth=2)
%     xlabel('Time [days]',FontSize=20)
%     ylabel('S(t)',FontSize=20)
%     pbaspect([16 9 1])
%     set(gca,'FontSize',36)
%     figure(2)
%     hold on 
%     grid on 
%     plot(times*par.tU/24/3600,thrust,LineWidth=2)    
%     xlabel('Time [days]',FontSize=20)
%     ylabel('u(S)',FontSize=20)
%     set(gca,'FontSize',36)
% %     title('Energy-to-Fuel homotopy: thrust policy',FontSize=20)
%     xlim([0,times(end)*par.tU/3600/24*1.01])
%     pbaspect([16 9 1])
    

end
% % 
    figure()
    hold on 
    grid on
    plot(steps(val),mf,'*',MarkerSize=30,LineWidth=2)
%     xlabel('Thrust [N]',FontSize=16)
%     plot(par.steps(val)*par.tU/24/3600,mf,'*',MarkerSize=30,LineWidth=2)
    xlabel('Final time [days]',FontSize=16)    
    ylabel('Final mass [MU]',FontSize=16)
    set(gca,'FontSize',36)
    pbaspect([16 9 1])
