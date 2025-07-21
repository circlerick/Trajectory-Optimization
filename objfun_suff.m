% Propagate a trajectory backwards
function [states,times] = objfun_suff(lam0,X0,STM0,physical,boundary)

% Inputs:
% lam0: initial costates vector [NSTATEx1]
% X0: initial states vector [NSTATEx1]
% physical: structure for physical variables
% boundary: structure for control problem inputs
% par: structure for simulation variables
% STM0: backward vectorized matrix containing U and V

% Output:
% states: states vector
% times: times vector

EPS = physical.EPS; 
NSTATE = physical.NSTATE;
Tmax = physical.Tmax;
c = physical.c;

% integrazione
T0 = boundary.Tfin;
Tfin = boundary.T0;
told = T0;
S= Switching_Function(X0,lam0,physical);
if EPS > 0
    if S < EPS*Tmax/c && S > -EPS*Tmax/c
        type = 0;
    else
        if sign(S) ~= physical.shoot 
            type = -1;
        else
            type = 1;
        end
    end
else
    if sign(S) ~= physical.shoot 
        type = -1;
    else
        type = 1;
    end
end
SIGN = physical.shoot*type;
s0 = [X0; lam0; STM0; S]; % stato e costato iniziali
% Initialize outputs and ode initial values
tempt = zeros(1e6,1);
temps = zeros(1e6,length(s0));
temps(1,:) = s0';
tempt(1) = T0;
% Initialize indeces of sates and times
index1 = 1;
index2 = 0;

% Loop from perturbation ending of controllability time
while told ~= Tfin
    % Propagate backwards 
    options = odeset('reltol', 0.5e-13, 'abstol', 0.5e-13,'Events',@(t,s) stopfuel(t,s),'MaxStep',5e-4);
    [tt,xx] = ode89(@(t,s) derivativesSTM_suff(s,physical,SIGN),[told Tfin],s0,options);
    told = tt(end);

    % Save states and times
    index2 = index1 + length(tt) - 1;
    temps(index1+1:index2,:) = xx(2:end,:);
    tempt(index1+1:index2) = tt(2:end);
    index1 = index2;

    if tt(end) ~= Tfin
        % Compute U and V when a jump occurs
        if EPS == 0
        % Extrapolate values befor jumps    
        Xmin = xx(end,1:NSTATE)';
        lam_min = xx(end,NSTATE+1:2*NSTATE)';
        dydt_plus = derivatives(xx(end,1:2*NSTATE)',physical,SIGN);
        [~,dSdt]= Switching_Function(Xmin,lam_min,physical);
        % Compute values after the jump
        SIGN = -SIGN;
        phif = xx(end,2*NSTATE+1:end-1);
        dydt_min = derivatives(xx(end,1:2*NSTATE)',physical,SIGN);
        deltax = sign(dSdt)*(dydt_min(1:NSTATE)-dydt_plus(1:NSTATE));
        deltap = -sign(dSdt)*(dydt_min(1+NSTATE:2*NSTATE)-dydt_plus(1+NSTATE:2*NSTATE));
        UN_plus = reshape(phif(1:NSTATE^2),[NSTATE,NSTATE]);
        VN_plus = reshape(phif(1+NSTATE^2:2*NSTATE^2),[NSTATE,NSTATE]);
        Un_plus = reshape(phif(2*NSTATE^2+1:3*NSTATE^2),[NSTATE,NSTATE]);
        Vn_plus = reshape(phif(1+3*NSTATE^2:end),[NSTATE,NSTATE]);
        UN_min = UN_plus + (deltax*deltap'*UN_plus - deltax*deltax'*VN_plus)/abs(dSdt);
        VN_min = VN_plus + (deltap*deltap'*UN_plus - deltap*deltax'*VN_plus)/abs(dSdt);
        UN_min = reshape(UN_min,[NSTATE^2,1]);
        VN_min = reshape(VN_min,[NSTATE^2,1]);
        Un_min = Un_plus + (deltax*deltap'*Un_plus - deltax*deltax'*Vn_plus)/abs(dSdt);
        Vn_min = Vn_plus + (deltap*deltap'*Un_plus - deltap*deltax'*Vn_plus)/abs(dSdt);
        Un_min = reshape(Un_min,[NSTATE^2,1]);
        Vn_min = reshape(Vn_min,[NSTATE^2,1]);
        S = Switching_Function(xx(end,1:NSTATE)',xx(end,NSTATE+1:2*NSTATE)',physical);
        % Define new initial vector for ode in the next loop
        s0(1:end) = [xx(end,1:2*NSTATE)'; UN_min; VN_min; Un_min; Vn_min; S];   
            
        else
            % If EPS > 0, there are no jumps 
            s0 = xx(end,:)';
            if SIGN ~= 0
                SIGN = 0;
            else
                if xx(end-1,end) > 0
                    SIGN = 1;
                else
                    SIGN = -1;
                end
            end
        end
    else
        s0 = xx(end,:)';
    end
end

% Save states and times
states = temps(1:index2,:);
times = tempt(1:index2);

end