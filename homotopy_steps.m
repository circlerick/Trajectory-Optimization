
Nstep = 125;                   % Steps for homotophy
i = Nstep:-1:1;
steps = (i.^1.5-1)./(Nstep^1.5-1);
par.steps = steps;
 

Nstep = 10;                   % Steps for homotophy
i = Nstep:-1:1;
steps = (i.^2-1)./(Nstep^2-1);
k1 = ((par.val1-par.val1/5).*steps + par.val1/5);
Nstep = 31;
i = Nstep:-1:1;
steps = (i.^2-1)./(Nstep^2-1);
k2 = ((par.val1/5-par.val1/10).*steps + par.val1/10);
Nstep = 21;
i = Nstep:-1:1;
steps = (i.^2-1)./(Nstep^2-1);
k3 = ((par.val1/10-par.val1/15).*steps + par.val1/15);
Nstep = 41;
i = Nstep:-1:1;
steps = (i.^2-1)./(Nstep^2-1);
k4 = ((par.val1/15-par.val1/20).*steps + par.val1/20);
Nstep = 21;
i = Nstep:-1:1;
steps = (i.^2-1)./(Nstep^2-1);
k5 = ((par.val1/20-par.val1/25).*steps + par.val1/25);
par.steps = [k1, k2(2:end), k3(2:end), k4(2:end), k5(2:end)];

t3N = 2.07819691641209*1.3;
t2N = 3.340834504208957*1.3;
t1N = 5.406132440818046*1.30;
t05N = 10.446684978889763*1.30;
t03N = 16.737858163841203*1.3;
% step1 = linspace(t3N,t2N,10);
% step2 = linspace(t2N,t1N,20);
% step3 = linspace(t1N,t05N,30);
step4 = linspace(t03N/1.3*1.3,t03N/1.3*1.5,10);
par.steps = [step4(1:end)];
