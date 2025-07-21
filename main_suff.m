%% SUFF COND
% This script tries to find if second order conditions are satisfied for a
% given trajectory. Then, if possible, applies the NOG. Requires a feasible
% costate solution computed in Main_Extremal (sol2)

% WARNING: it is possible to use this script only in the case 'fixedtime'
% and physical.shoot = 1 !
clc
% Initialize perturbation time
if Tper <= boundary.T0 || Tper >= boundary.Tfin
    disp('Error: perturbation time must be > T0 and < Tfin')
    return
end
X0 = boundary.X0;
NSTATE = physical.NSTATE;
Pigreco = boundary.Pigreco;
Sigma = boundary.Sigma;
g0_xx = boundary.g0_xx;

% Save switching times of nominal trajectory
[obj,states,ttt] = objfun_S_fuel_mex(sol2,X0,physical,boundary);
lamf = states(end,NSTATE+1:2*NSTATE)';
xf = states(end,1:NSTATE)';
lam_nom = states;
t_nom = ttt; 
index_sw = find(abs(states(:,end)) <= 1e-12);
times_sw = ttt(index_sw);

%% Check second order conditions and controllability

clc
N = 1;
val = 0;
% figure()
% Loop on N to find if second order condition are satisfied
while N < 100000 && val == 0

% Initialize U and V matrices 
UN = eye(NSTATE);
VN = -(N*Pigreco*Pigreco'+g0_xx);
Un = zeros(NSTATE);
Vn = eye(NSTATE);
STMf = [reshape(UN,[(NSTATE)^2,1]);reshape(VN,[(NSTATE)^2,1]);reshape(Un,[(NSTATE)^2,1]);reshape(Vn,[(NSTATE)^2,1])];

% Propagate backward from Tfin to T0
[states_back,times_back] = objfun_suff_mex(lamf,xf,STMf,physical,boundary);

% Extrapolate values of U and V and compute detU
[a,~] = size(states_back);
detU = zeros(a,1);
UN_back = zeros(NSTATE,NSTATE,a);
VN_back = zeros(NSTATE,NSTATE,a);
Un_back = zeros(NSTATE,NSTATE,a);
Vn_back = zeros(NSTATE,NSTATE,a);
phi = states_back(:,2*NSTATE+1:end-1);
for i = 1:a 
    UN_back(:,:,i) = reshape(phi(i,1:NSTATE^2),[NSTATE,NSTATE]);
    VN_back(:,:,i) = reshape(phi(i,NSTATE^2+1:2*NSTATE^2),[NSTATE,NSTATE]);
    Un_back(:,:,i) = reshape(phi(i,2*NSTATE^2+1:3*NSTATE^2),[NSTATE,NSTATE]);
    Vn_back(:,:,i) = reshape(phi(i,3*NSTATE^2+1:4*NSTATE^2),[NSTATE,NSTATE]);
    detU(i) = det(UN_back(:,:,i))/norm(UN_back(:,:,i));
end
scatter(times_back*par.tU/3600/24,detU,5)
grid on
% title('Determinant of U')
xlabel('Time [days]')
ylabel('det(U)')
set(gca,'FontSize',24)
pbaspect([10 8 1])

% Stop the loop if determinant of U is always > 0
if any(detU <= 0)
    N = N+1;
    val = 0;
else
    val = 1;
end

end

if any(detU <= 0)
    disp('Warning: second order conditions not satisfied for any N')
    return
end

% Compute inverse of condition number
condW = zeros(a,1);
for i = 1:a 
    W = Pigreco'*inv(UN_back(:,:,i))*Un_back(:,:,i)*Pigreco;
    condW(i) = 1/cond(W);
end

figure()
scatter(times_back*par.tU/3600/24,condW,5)
% title('Inverse of condition number')
xlabel('Time [days]')
ylabel('1/C')
grid on
set(gca,'FontSize',24)
pbaspect([10 8 1])

%% Apply NOG on perturbed trajectory
clc
close all

% Propagate nominal trajectory from T0 to perturbation time
boundary.T0 = 0;
Tf_old = boundary.Tfin;
[~,index] = min(abs(times_back-Tper));
boundary.Tfin = times_back(index);
[~,states,ttt] = objfun_S_fuel_mex(sol2,X0,physical,boundary);

% Save nominal state and costate at perturbation time
lamf = states(end,NSTATE+1:2*NSTATE)';
xf = states(end,1:NSTATE)';

% Apply perturbation on nominal state 
deltaX = sign(1-2*rand(size(xf))).*xf*MaxPert;
X0_new = xf + deltaX;

% Compute the first update of the costate
QN = -VN_back(:,:,index)*inv(UN_back(:,:,index));
sol_new = lamf + (-QN + (Vn_back(:,:,index) + QN*Un_back(:,:,index))*Pigreco*inv( ...
    Pigreco'*inv(UN_back(:,:,index))*Un_back(:,:,index)*Pigreco)*Pigreco'*inv(UN_back(:,:,index)))*deltaX;

% Change T0 to perturbation time
Sold = Switching_Function(xf,lamf,physical);
boundary.T0 = ttt(end);
boundary.Tfin = Tf_old;

% Define controllability interval
NOG = struct();
index_NOG = find(condW < 1e-3);
NOG.tmax_NOG = times_back(index_NOG(end));

% Save U and V at perturbation time
NOG.UN = UN_back(:,:,index);
NOG.VN = VN_back(:,:,index);
NOG.Un = Un_back(:,:,index);
NOG.Vn = Vn_back(:,:,index);

% Define nominal switching times in the controllability interval
index_times_min = find(times_sw > ttt(end));
index_times_max = find(times_sw < times_back(index_NOG(end)));
NOG.tspan = times_sw(index_times_min(1):index_times_max(end));
if times_sw(index_times_max(end)) ~= NOG.tmax_NOG
    NOG.tspan = [times_sw(index_times_min(1):index_times_max(end)); NOG.tmax_NOG];
end
NOG.Sw_nom = Sold;
NOG.x_nom = xf; 
NOG.lam_nom = lamf;

% NOG
[obj_open,states_open,times_open] = objfun_S_fuel_mex(lamf,X0_new,physical,boundary); % open loop trajectory
plot_func(states_open,times_open,physical,par,boundary);

% [obj1,states,times] = objfun_S_fuel_mex(sol_new,X0_new,physical,boundary); % 1 costate update
% plot_func(states,times,physical,par,boundary);

[obj2,states_new,times_new] = objfun_S_NOG_mex(sol_new,X0_new,physical,boundary,NOG); % real-time costate update
% plot_func(states_new,times_new,physical,par,boundary); % plot of the solution
