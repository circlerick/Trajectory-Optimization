if physical.EPS > 0
EPS = physical.EPS;
indexSW = find(abs(EPS-abs(Sw))<1e-13);

if Sw(1) > EPS
val = 1;
elseif Sw(1) < -EPS
val = -1;
else
val = 0;
end
old = 1;

for i = 1:length(indexSW)

if val == 1
L(3)=plot(states(old:2:indexSW(i),1),states(old:2:indexSW(i),2),'color',"#7E2F8E",LineWidth=2);
elseif val == 0
L(4)=plot(states(old:2:indexSW(i),1),states(old:2:indexSW(i),2),'color',	"#4DBEEE",LineWidth=2);
else
plot(states(old:2:indexSW(i),1),states(old:2:indexSW(i),2),'color',	"#EDB120",LineWidth=2)
end
old = indexSW(i);

if i < length(indexSW)
index = round((indexSW(i) + indexSW(i+1))/2);    
Sw_new = Sw(index);
else
Sw_new = (Sw(indexSW(i))+Sw(end))/2;
end
if Sw_new > EPS
    val = 1;
elseif Sw_new < -EPS
    val = -1;
else
    val = 0;
end

end

if val == 1
plot(states(old:end,1),states(old:end,2),'color',"#7E2F8E",LineWidth=2)
elseif val == 0
plot(states(old:end,1),states(old:end,2),'color',"#4DBEEE",LineWidth=2)
else
plot(states(old:end,1),states(old:end,2),'color',"#EDB120",LineWidth=2)
end



else
old = 0;
if Sw(1) > 0
    index = find(Sw < 0);
    val = 1;
else
    index = find(Sw > 0);
    val = 0;
end

while old < length(Sw)

if val == 1
L(4) = plot(states(old+1:index(1),1),states(old+1:index(1),2),'color',"#7E2F8E",LineWidth=2);
old = index(1);
index2 = find(Sw > 0);
index3 = find(index2 > old);
index = index2(index3);

val = 0;
else
L(3) = plot(states(old+1:index(1),1),states(old+1:index(1),2),'color',"#EDB120",LineWidth=2);
old = index(1);
index2 = find(Sw < 0);
index3 = find(index2 > old);
index = index2(index3);
val = 1;
end

if length(index) == 0

if val == 1
L(4) = plot(states(old+1:end,1),states(old+1:end,2),'color',"#7E2F8E",LineWidth=2);
else
L(3) = plot(states(old+1:end,1),states(old+1:end,2),'color',"#EDB120",LineWidth=2);
end

old = length(Sw);
end

end
end