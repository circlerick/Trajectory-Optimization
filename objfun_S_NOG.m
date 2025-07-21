% Real-time NOG algorithm: updates the costate of the perturbed trajectory
% in real time during the propagation
function [obj,states,times] = objfun_S_NOG(lam0,X0,physical,boundary,NOG)

% Inputs
% lam0: costate at perturbation time [NSTATEx1]
% X0: state at perturbation time [NSTATEx1]
% physical, boundary, NOG: structures of values

% Outputs
% obj: sum of square residual values of the objective function
% states: matrix of propagation states
% times: vector of propagation times

% initialize outputs and constant values
obj = 1000;
states = 0;
times = 0;
EPS = physical.EPS; 
if EPS ~= 0
    disp('Error: EPS must be set to 0 to use this script')
    return
end
NSTATE = physical.NSTATE;
Pigreco = boundary.Pigreco;
tspan = NOG.tspan;
T0 = boundary.T0;
Tfin = boundary.Tfin;
xx = 0;
tt = 0;

% Compute perturbed switch and extrapolate nominal switch
Snew = Switching_Function(X0,lam0,physical);
SIGN_per = sign(Snew);
SIGN_nom = sign(NOG.Sw_nom);

% extrapolate U and V and convert to vectors
UN = reshape(NOG.UN,[NSTATE^2,1]);
VN = reshape(NOG.VN,[NSTATE^2,1]);
Un = reshape(NOG.Un,[NSTATE^2,1]);
Vn = reshape(NOG.Vn,[NSTATE^2,1]);
phi0 = [UN; VN; Un; Vn];
% Define initial state of ode
s0 = [NOG.x_nom; NOG.lam_nom; X0; lam0; phi0; Snew]; 
% Initialize loop index and output values
told = boundary.T0;
i = 1;
tempt = zeros(1e6,1);
temps = zeros(1e6,2*NSTATE);
temps(1,:) = [X0', lam0'];
tempt(1) = T0;
index1 = 1;
index2 = 0;

        while i <= length(tspan) 

            % 2 possible propagation type depending of switch sign of
            % nominal and perturbed trajectories
            if SIGN_nom*SIGN_per > 0
                % switches with same sign: propagation with costate update
                options = odeset('reltol', 0.5e-13, 'abstol', 0.5e-13,'Events',@(t,s) stopNOG(t,s),'MaxStep',0.5e-3);
                [tt,xx] = ode89(@(t,s) derivatives_NOG_update(s,physical,SIGN_nom,Pigreco), [told tspan(i)], s0,options);

                % Compute switch and costate during the leg of trajectory
                % with update
                for j = 1:length(tt)
                    phif = xx(j,4*NSTATE+1:end-1);
                    UN = reshape(phif(1:NSTATE^2),[NSTATE,NSTATE]);
                    VN = reshape(phif(1+NSTATE^2:2*NSTATE^2),[NSTATE,NSTATE]);
                    Un = reshape(phif(2*NSTATE^2+1:3*NSTATE^2),[NSTATE,NSTATE]);
                    Vn = reshape(phif(1+3*NSTATE^2:end),[NSTATE,NSTATE]);
                    QN = -VN*inv(UN);
                    deltaX = -xx(j,1:NSTATE)' + xx(j,2*NSTATE+1:3*NSTATE)'; 
                    xx(j,3*NSTATE+1:4*NSTATE) = (xx(j,NSTATE+1:2*NSTATE)' + (-QN + (Vn + QN*Un)*Pigreco*inv(Pigreco'*inv(UN)*Un*Pigreco)*Pigreco'*inv(UN))*deltaX)';
                    xx(j,end) = Switching_Function(xx(j,2*NSTATE+1:3*NSTATE)',xx(j,3*NSTATE+1:4*NSTATE)',physical);
                end

                % Save states and times for output vector
                index2 = index1 + length(tt) - 1;
                temps(index1+1:index2,:) = xx(2:end,2*NSTATE+1:4*NSTATE);
                tempt(index1+1:index2) = tt(2:end);
                index1 = index2;

            else
                % switches with opposite sign: costate of perturbed
                % trajectory is propagated using equations of motion
                options = odeset('reltol', 0.5e-13, 'abstol', 0.5e-13,'Events',@(t,s) stopfuel(t,s),'MaxStep', 0.5e-3);
                [tt,xx] = ode89(@(t,s) derivatives_NOG(s,physical,SIGN_nom), [told tspan(i)], s0,options);

                % Save states and times for output vector
                index2 = index1 + length(tt) - 1;
                temps(index1+1:index2,:) = xx(2:end,2*NSTATE+1:4*NSTATE);
                tempt(index1+1:index2) = tt(2:end);
                index1 = index2;

            end
            told = tt(end);

            % When ode doesn't stop at a switching time of the nominal
            % trajectory, the loop repeats using the previous final values
            % as initial values (changing the perturbed switch sign only)
            if tt(end) ~= tspan(i)

                % update od ode initial value
                s0(1:end) = xx(end,:)';

                if SIGN_nom*SIGN_per > 0
                % update of perturbed costate
                if abs(s0(end)) > 1e-9
                    SIGN_per = sign(xx(end,end));
                else
                    [~,dSdt] = Switching_Function(s0(2*NSTATE+1:3*NSTATE),s0(3*NSTATE+1:4*NSTATE),physical);
                    SIGN_per = sign(dSdt);
                end
                else
                    phif = xx(end,4*NSTATE+1:end-1);
                    UN = reshape(phif(1:NSTATE^2),[NSTATE,NSTATE]);
                    VN = reshape(phif(1+NSTATE^2:2*NSTATE^2),[NSTATE,NSTATE]);
                    Un = reshape(phif(2*NSTATE^2+1:3*NSTATE^2),[NSTATE,NSTATE]);
                    Vn = reshape(phif(1+3*NSTATE^2:end),[NSTATE,NSTATE]);
                    QN = -VN*inv(UN);
                    deltaX = -xx(end,1:NSTATE)' + xx(end,2*NSTATE+1:3*NSTATE)'; 
                    new_lam = xx(end,NSTATE+1:2*NSTATE)' + (-QN + (Vn + QN*Un)*Pigreco*inv(Pigreco'*inv(UN)*Un*Pigreco)*Pigreco'*inv(UN))*deltaX;
                    SIGN_per = sign(Switching_Function(s0(2*NSTATE+1:3*NSTATE),new_lam,physical));
                end


            else

                % compute discontinuity jump
                % extrapolate values befor jump
                Xmin = xx(end,1:NSTATE)';
                lam_min = xx(end,NSTATE+1:2*NSTATE)';
                dydt_min = derivatives(xx(end,1:2*NSTATE)',physical,SIGN_nom);
                % extrapolate values after jump
                [~,dSdt]= Switching_Function(Xmin,lam_min,physical);
                SIGN_nom = -SIGN_nom;
                phif = xx(end,4*NSTATE+1:end-1);
                dydt_plus = derivatives(xx(end,1:2*NSTATE)',physical,SIGN_nom);
                deltax = sign(dSdt)*(dydt_plus(1:NSTATE)-dydt_min(1:NSTATE));
                deltap = -sign(dSdt)*(dydt_plus(1+NSTATE:2*NSTATE)-dydt_min(1+NSTATE:2*NSTATE));

                UN_min = reshape(phif(1:NSTATE^2),[NSTATE,NSTATE]);
                VN_min = reshape(phif(1+NSTATE^2:2*NSTATE^2),[NSTATE,NSTATE]);
                Un_min = reshape(phif(2*NSTATE^2+1:3*NSTATE^2),[NSTATE,NSTATE]);
                Vn_min = reshape(phif(1+3*NSTATE^2:end),[NSTATE,NSTATE]);

                UN_plus = UN_min - (deltax*deltap'*UN_min - deltax*deltax'*VN_min)/abs(dSdt);
                VN_plus = VN_min - (deltap*deltap'*UN_min - deltap*deltax'*VN_min)/abs(dSdt);
                
                Un_plus = Un_min - (deltax*deltap'*Un_min - deltax*deltax'*Vn_min)/abs(dSdt);
                Vn_plus = Vn_min - (deltap*deltap'*Un_min - deltap*deltax'*Vn_min)/abs(dSdt);

                % new switch of perturbed trajectory
                QN = -VN_plus*inv(UN_plus);
                deltaX = -xx(end,1:NSTATE)' + xx(end,2*NSTATE+1:3*NSTATE)'; 
%                 lam_per = xx(end,3*NSTATE+1:4*NSTATE)';
                lam_per = (xx(end,NSTATE+1:2*NSTATE)' + (-QN + (Vn_plus + QN*Un_plus)*Pigreco*inv(Pigreco'*inv(UN_plus)*Un_plus*Pigreco)*Pigreco'*inv(UN_plus))*deltaX);
                [Sper,dSper] = Switching_Function(xx(end,2*NSTATE+1:3*NSTATE)',lam_per,physical);
                if abs(Sper) > 1e-6
                SIGN_per = sign(Sper);
                else
                SIGN_per = sign(dSper);
                end

                % vectorize U and V and define the new ode initial state
                UN_plus = reshape(UN_plus,[NSTATE^2,1]);
                VN_plus = reshape(VN_plus,[NSTATE^2,1]);
                Un_plus = reshape(Un_plus,[NSTATE^2,1]);
                Vn_plus = reshape(Vn_plus,[NSTATE^2,1]);              
                phi = [UN_plus; VN_plus; Un_plus; Vn_plus];
                s0(1:end) = [xx(end,1:4*NSTATE)'; phi; xx(end,end)];    


                % update loop variale
                i = i + 1;
                
            end


        end

        % if the NOG is stopped at a time different from the final time (this occurs if the 
        % trajectory has a leg where the controllability conditions are not satisfied)
        % propagates the trajectory without any costate update.
        % otherwise, compute the objective function residual using the
        % final values.
        if tspan(end) ~= Tfin
            boundary.T0 = tspan(end);
            lam = xx(end,3*NSTATE+1:4*NSTATE)';
            X = xx(end,2*NSTATE+1:3*NSTATE)';
            [obj,xx,tt] = objfun_S_fuel(lam,X,physical,boundary);
            index2 = index1 + length(tt) - 1;
            temps(index1+1:index2,:) = xx(2:end,1:2*NSTATE);
            tempt(index1+1:index2) = tt(2:end);

        else

            xf = xx(end,2*NSTATE+1:3*NSTATE)';
            pf = xx(end,3*NSTATE+1:4*NSTATE)';

            Xf = boundary.Xf;
            g0_x = physical.g0_x;
            Sigma=boundary.Sigma; 
            deltaX = Pigreco'*(xf-Xf); 
            deltaP = Sigma'*(pf+g0_x);
            val = [deltaX;deltaP];
            obj = sum(val.^2);

        end

% assembly of output values
states = temps(1:index2,:);
times = tempt(1:index2);

end
