% OBJFUN_SUFF_SCRIPT   Generate MEX-function objfun_suff_mex from objfun_suff.
% 
% Script generated from project 'objfun_suff.prj' on 18-Jul-2024.
% 
% See also CODER, CODER.CONFIG, CODER.TYPEOF, CODEGEN.

%% Create configuration object of class 'coder.MexCodeConfig'.
cfg = coder.config('mex');
cfg.GenerateReport = true;
cfg.ReportPotentialDifferences = false;

%% Define argument types for entry-point 'objfun_suff'.
ARGS = cell(1,1);
ARGS{1} = cell(5,1);
ARGS{1}{1} = coder.typeof(0,[Inf  1],[1 0]);
ARGS{1}{2} = coder.typeof(0,[Inf  1],[1 0]);
ARGS{1}{3} = coder.typeof(0,[Inf  1],[1 0]);
ARGS_1_4 = struct;
ARGS_1_4.Tmax = coder.typeof(0);
ARGS_1_4.g = coder.typeof(0);
ARGS_1_4.mu = coder.typeof(0);
ARGS_1_4.RE = coder.typeof(0);
ARGS_1_4.RM = coder.typeof(0);
ARGS_1_4.c = coder.typeof(0);
ARGS_1_4.Earth = coder.typeof(0,[Inf  1],[1 0]);
ARGS_1_4.Moon = coder.typeof(0,[Inf  1],[1 0]);
ARGS_1_4.NSTATE = coder.typeof(0);
ARGS_1_4.shoot = coder.typeof(0);
ARGS_1_4.g0_x = coder.typeof(0,[Inf  1],[1 0]);
ARGS_1_4.EPS = coder.typeof(0);
ARGS{1}{4} = coder.typeof(ARGS_1_4);
ARGS_1_5 = struct;
ARGS_1_5.T0 = coder.typeof(0);
ARGS_1_5.Tfin = coder.typeof(0);
ARGS_1_5.A = coder.typeof(0,[Inf Inf],[1 1]);
ARGS_1_5.Xf = coder.typeof(0,[Inf  1],[1 0]);
ARGS_1_5.X0 = coder.typeof(0,[Inf  1],[1 0]);
ARGS_1_5.Sigma = coder.typeof(0,[Inf  1],[1 0]);
ARGS_1_5.Pigreco = coder.typeof(0,[Inf Inf],[1 1]);
ARGS_1_5.g0_xx = coder.typeof(0,[Inf Inf],[1 1]);
ARGS{1}{5} = coder.typeof(ARGS_1_5);

%% Invoke MATLAB Coder.
cd('E:\Users\ricca\Desktop\TESI\code_with_gen\c3bp_rev1');
codegen -config cfg objfun_suff -args ARGS{1}

