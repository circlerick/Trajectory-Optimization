% Homotopy on a specific value, starting from an initial feasible solution
function solutions = homotopy(lambda0,par,where,what)

% Inputs:
% lambda0: starting costate solution [NSTATEx1]
% par: structure
% where: character array, must be the name of a structure used in the problem
% what: character array, must be a field of the structure "what". This is
% the value that will change during the homotopy

% Output:
% solution: vector of costate solutions

clc
% Initialize problem data
global physical boundary
options = optimoptions('fsolve','Algorithm', 'levenberg-marquardt', 'Display','iter-detailed', ...
    'StepTolerance',1e-9,'FunctionTolerance',1e-12,'OptimalityTolerance',1e-3, 'FiniteDifferenceType', ...
    'forward', SpecifyObjectiveGradient=true, MaxIterations=200);

steps = par.steps; % homotopy steps
val_in = par.val1; % homotopy initial value
val_f = par.val2; % homotopy final value
solutions = lambda0;
% load('try.mat')
% steps = par.steps;
% solutions = solutions(:,1:46);
lambda_opt = solutions(:,end);
for i = 2:length(steps)

    % compute homotopy step and change the associated value in the
    % structure
    val = steps(i);
    switch where
        case 'physical'
            physical = setfield(physical,what,val);
        case 'boundary'
            boundary = setfield(boundary,what,val);
        case 'par'
            par = setfield(par,what,val);
        otherwise
            disp('Error: no structure with this name')
            return
    end
    
    % after the 3rd step, the script will use a costate predictor 
    if i > 3
        diff = 0.5*(3*solutions(:,end) - 4*solutions(:,end-1) + solutions(:,end-2))/(steps(i-2)-steps(i));
        newsol = solutions(:,end) - diff*(steps(i) - steps(i-1));

        % the obj function is evaluated using the previous step costate and
        % the costate computed with the predictor formula
        switch par.problem
            case 'minimumtime'
                val1 = objfun_S_time_mex(newsol,boundary.X0,physical,boundary,par);
                val2 = objfun_S_time_mex(solutions(:,end),boundary.X0,physical,boundary,par);
            case 'freetime'
                val1 = objfun_S_time_mex(newsol,boundary.X0,physical,boundary,par);
                val2 = objfun_S_time_mex(solutions(:,end),boundary.X0,physical,boundary,par);
            case 'fixedtime'
                if physical.EPS > 0
%                     val1 = objfun_S_energy_mex(newsol,boundary.X0,physical,boundary);
                    val2 = objfun_S_energy_mex(lambda_opt,boundary.X0,physical,boundary);
                else
%                     val1 = objfun_S_fuel_mex(newsol,boundary.X0,physical,boundary);
                    val2 = objfun_S_fuel_mex(lambda_opt,boundary.X0,physical,boundary);
                end
        end

          run predictor
        % selection of the costate that provides the best obj value
        if val1 < val2
            sol2 = newsol;
        else
            sol2 = solutions(:,end);
        end
    else
        sol2 = solutions(:,end);
    end

    % homotopy step with fsolve
    switch par.problem
        case 'minimumtime'
            [lambda_opt,res] = fsolve(@(lambda) objfunSTM_S_time_mex(lambda,boundary.X0,physical,boundary,par), sol2, options);

        case 'freetime'
            [lambda_opt,res] = fsolve(@(lambda) objfunSTM_S_time_mex(lambda,boundary.X0,physical,boundary,par), sol2, options);
        case 'fixedtime'
            if physical.EPS > 0
                [lambda_opt,res] = fsolve(@(lambda) objfunSTM_S_energy_mex(lambda,boundary.X0,physical,boundary), sol2, options);
            else
                [lambda_opt,res] = fsolve(@(lambda) objfunSTM_S_fuel_mex(lambda,boundary.X0,physical,boundary), sol2, options);
            end
    end
    solutions = [solutions, lambda_opt];

    % if the residual is too high the homotopy is stopped
    if norm(res) > 5e-3
        disp('Error: Homotopy step did not converge')
        return       
    end


end
