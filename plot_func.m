function plot_func(states,times,physical,par,boundary,Moon_ECI)

NSTATE = physical.NSTATE;
[a,b] = size(states);
Sw = zeros(a,1);
thrust = zeros(a,1);
c = physical.c;
Tmax = physical.Tmax;
EPS = physical.EPS;
xf = states(end,1:NSTATE)';
pf = states(end,1+NSTATE:2*NSTATE)';
options = odeset('reltol', 1e-13, 'abstol', 1e-13);

for i = 1:length(states)
    if b > 2*NSTATE
        Sw(i) = states(i,end)*c/Tmax;
    else
        Sw(i) = Switching_Function(states(i,1:NSTATE)',states(i,1+NSTATE:2*NSTATE)',physical)*c/Tmax;
    end

    if EPS > 0
        if Sw(i) < EPS && Sw(i) > -EPS
            thrust(i) = (EPS+physical.shoot*Sw(i))/(2*EPS);
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
switch par.problem
    case 'minimumtime'
         figure()
         plot(times*par.tU/3600/24,Sw,LineWidth=2)
%          title('Minimum time solution: Switching function')
         hold on 
         grid on 
         xlabel('Time [days]')
         ylabel('S(t)') 
         set(gca,'FontSize',36)
         pbaspect([16 9 1])
         xlim([0,times(end)*par.tU/3600/24*1.01])

%          figure()
%          plot(times,thrust,LineWidth=2)
%          title('Minimum time solution: Thrust policy')
%          hold on 
%          grid on 

         figure()
%          plot(states(:,1),states(:,2), LineWidth=1.2)
% %          title('Minimum time trajectory')
         hold on 
         plot(-physical.mu,0,'.',MarkerSize=50)
         plot(1-physical.mu,0,'.',MarkerSize=40)
         scatter(states(:,1),states(:,2),4,times*par.tU/3600/24,"filled")
         c = colorbar;
         c.Label.String = 'Time [days]';
         c.FontSize = 24;
         grid on
         S = -sign(physical.shoot);
         [~,xx] = ode113(@(t,s) derivatives(s,physical,S),[0 50],[xf;pf],options);
         plot(xx(:,1),xx(:,2),"color","#77AC30",LineWidth=2)
         L = legend('Earth','Moon','Spacecraft trajectory','Free trajectory');
         L.FontSize = 24;
         axis equal
         xlabel('X axis [LU]')
         ylabel('Y axis [LU]') 
         set(gca,'FontSize',24)
         pbaspect([10 8 1])


    case 'fixedtime'
        if EPS > 0
        figure()
        plot(times,Sw,LineWidth=1.2)
        title('Minimum energy solution: Switching function')
        hold on 
        grid on 
        figure()
        plot(times,thrust,LineWidth=1.2)
        title('Minimum energy solution: Thrust policy')
        hold on 
        grid on 
        indexTmax = find(thrust==1);
        indexTmed = find(thrust<1 & thrust>0);
        figure()
        hold on 
        L(1)=plot(-physical.mu,0,Marker=".",MarkerSize=50);
        L(2)=plot(1-physical.mu,0,Marker=".",MarkerSize=40); 
        run plot_try
%         plot(states(:,1),states(:,2),LineWidth=1.2)
%         title('Minimum energy trajectory')            
%         plot(states(indexTmax,1),states(indexTmax,2),".",MarkerSize=2)
%         plot(states(indexTmed,1),states(indexTmed,2),".",MarkerSize=2)
        grid on
        S = -sign(physical.shoot);
        [~,xx] = ode113(@(t,s) derivatives(s,physical,S),[0 20],[xf;pf],options);
        L(5)=plot(xx(:,1),xx(:,2),"color","#77AC30",LineWidth=2);
        legend(L,{'Earth','Moon','Full thrust arc','Medium thrust arc','Free trajectory'})
        xlabel('X axis [LU]')
        ylabel('Y axis [LU]') 
        set(gca,'FontSize',24)
        axis equal
        pbaspect([16 9 1])
        else 
            
%         figure()
        nexttile
        plot(times*par.tU/3600/24,Sw,LineWidth=2)
%         title('Minimum fuel solution: Switching function',FontSize=24)
        hold on 
        grid on 
        xlabel('Time [days]',FontSize=24)
        ylabel('S(t)',FontSize=24)
        set(gca,'FontSize',14)
        legend('Switchinf function',FontSize=14)
        xlim([0,times(end)*par.tU/3600/24*1.01])
        pbaspect([4 3 1])

%         figure()
        nexttile
        plot(times*par.tU/3600/24,thrust,'',LineWidth=2)
%         title('Minimum fuel solution: Thrust policy',FontSize=24)
        hold on 
        grid on 
        xlabel('Time [days]',FontSize=24)
        ylabel('u(S)',FontSize=24)
        legend('Thrust profile',FontSize=14)
        xlim([boundary.T0*par.tU/3600/24*0.99,times(end)*par.tU/3600/24*1.01])
        set(gca,'FontSize',14)
        pbaspect([4 3 1])

        indexT = find(thrust>0);
%         figure()
        nexttile
        hold on 
        L(1) = plot(-physical.mu,0,Marker=".",MarkerSize=50);
        L(2) = plot(1-physical.mu,0,Marker=".",MarkerSize=40);    
%         L(2) = plot(Moon_ECI(1:end,1),Moon_ECI(1:end,2),LineWidth=2);

        run plot_try
        grid on
        S = -sign(physical.shoot);
        [~,xx] = ode113(@(t,s) derivatives(s,physical,S),[0 3],[xf;pf],options);
        L(5) = plot(xx(:,1),xx(:,2),"color","#77AC30",LineWidth=2);
        legend(L,{'Earth','Moon','Thrust arc','Coast arc','Free trajectory'},FontSize=14)
%         legend(L,{'Earth','Orbit of the Moon','Thrust arc','Coast arc'},FontSize=24)
        xlabel('X axis [LU]')
        ylabel('Y axis [LU]') 
        set(gca,'FontSize',14)
%         axis equal
        pbaspect([4 3 1])
        
        end
end
