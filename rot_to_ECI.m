clc

% S = -sign(physical.shoot);
% options_ODE = odeset('reltol', 1e-13, 'abstol', 1e-13);
% [tt,xx] = ode113(@(t,s) derivatives(s,physical,S),[times(end), times(end)+2 ],[states(end,1:5)';states(end,6:10)'],options_ODE);

% states_ROT = [states(:,1:5); xx(2:end,1:5)];
states_ECI = states;
Moon_ECI = zeros(size(states));
w = 2*pi/par.tU;
ttt = times*par.tU;

for i = 1:length(ttt)
    t = ttt(i);
    R = [cos(w*t) -sin(w*t); sin(w*t) cos(w*t)];
    dR = [-w*sin(w*t) -w*cos(w*t); w*cos(w*t) -w*sin(w*t)];
    xy_ECI = R*[states(i,1)+physical.mu states(i,2)]';
    v_ECI = (dR*[states(i,1) states(i,2)]' + R*[states(i,3) states(i,4)]');
    states_ECI(i,1:5) = [xy_ECI' v_ECI' states(i,5)];
    xy_moon = R*[1 0]';
    Moon_ECI(i,1:2) = xy_moon;
end
plot_func(states_ECI,times,physical,par,boundary,Moon_ECI);

% index = length(times);
% L(1) = plot(0,0,'.',MarkerSize=40);
% hold on 
% grid on 
% L(2) = plot(Moon_ECI(1:index,1),Moon_ECI(1:index,2),LineWidth=2);
% L(3) = plot(states_ECI(1:index,1),states_ECI(1:index,2),'color',"#7E2F8E",LineWidth=2);
% % plot(states_ECI(index+1:end,1),states_ECI(index+1:end,2),LineWidth=2)
% legend(L,{'Earth','Orbit of the Moon ','Thrust arc'},FontSize=24)
% xlabel('X axis [LU]')
% ylabel('Y axis [LU]') 
% set(gca,'FontSize',24)
% axis equal
% pbaspect([10 8 1])