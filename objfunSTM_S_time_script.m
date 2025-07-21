% OBJFUNSTM_S_TIME_SCRIPT   Generate MEX-function objfunSTM_S_time_mex from
%  objfunSTM_S_time.
% 
% Script generated from project 'objfunSTM_S_time.prj' on 25-Jul-2024.
% 
% See also CODER, CODER.CONFIG, CODER.TYPEOF, CODEGEN.

%% Create configuration object of class 'coder.MexCodeConfig'.
cfg = coder.config('mex');
cfg.GenerateReport = true;
cfg.ReportPotentialDifferences = false;

%% Define argument types for entry-point 'objfunSTM_S_time'.
ARGS = cell(1,1);
ARGS{1} = cell(5,1);
ARGS{1}{1} = coder.typeof(0,[Inf  1],[1 0]);
ARGS{1}{2} = coder.typeof(0,[Inf  1],[1 0]);
ARGS_1_3 = struct;
ARGS_1_3.Tmax = coder.typeof(0);
ARGS_1_3.g = coder.typeof(0);
ARGS_1_3.mu = coder.typeof(0);
ARGS_1_3.RE = coder.typeof(0);
ARGS_1_3.RM = coder.typeof(0);
ARGS_1_3.c = coder.typeof(0);
ARGS_1_3.Earth = coder.typeof(0,[Inf  1],[1 0]);
ARGS_1_3.Moon = coder.typeof(0,[Inf  1],[1 0]);
ARGS_1_3.NSTATE = coder.typeof(0);
ARGS_1_3.shoot = coder.typeof(0);
ARGS_1_3.g0_x = coder.typeof(0,[Inf  1],[1 0]);
ARGS_1_3.EPS = coder.typeof(0);
ARGS{1}{3} = coder.typeof(ARGS_1_3);
ARGS_1_4 = struct;
ARGS_1_4.T0 = coder.typeof(0);
ARGS_1_4.Tfin = coder.typeof(0);
ARGS_1_4.A = coder.typeof(0,[Inf Inf],[1 1]);
ARGS_1_4.Xf = coder.typeof(0,[Inf  1],[1 0]);
ARGS_1_4.X0 = coder.typeof(0,[Inf  1],[1 0]);
ARGS_1_4.Sigma = coder.typeof(0,[Inf  1],[1 0]);
ARGS_1_4.Pigreco = coder.typeof(0,[Inf Inf],[1 1]);
ARGS_1_4.g0_xx = coder.typeof(0,[Inf Inf],[1 1]);
ARGS{1}{4} = coder.typeof(ARGS_1_4);
ARGS_1_5 = struct;
ARGS_1_5.Nint = coder.typeof(0);
ARGS_1_5.ITERS = coder.typeof(0);
ARGS_1_5.JNET = coder.typeof(0);
ARGS_1_5.problem = coder.typeof('X',[1 Inf],[0 1]);
ARGS_1_5.steps = coder.typeof(0,[1 Inf],[0 1]);
ARGS_1_5.val1 = coder.typeof(0);
ARGS_1_5.val2 = coder.typeof(0);
ARGS_1_5.box_lb = coder.typeof(0,[Inf  1],[1 0]);
ARGS_1_5.box_ub = coder.typeof(0,[Inf  1],[1 0]);
ARGS_1_5.tU = coder.typeof(0);
ARGS_1_5.lU = coder.typeof(0);
ARGS_1_5.vmax = coder.typeof(0);
ARGS{1}{5} = coder.typeof(ARGS_1_5);

%% Invoke MATLAB Coder.
cd('E:\Users\ricca\Desktop\TESI\code_with_gen');
codegen -config cfg objfunSTM_S_time -args ARGS{1}

