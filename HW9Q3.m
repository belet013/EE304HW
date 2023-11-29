% The Voltage and Current relationship for a capacitor is given by the following equation:

% , where and .
% Write a MATLAB program that plots v(t) and i(t) between t=0 and t=2π on the same axes.
% (Do not use any function for the derivative in MATLAB, manually find the derivative of the
% voltage and use it in the equation).
clear 
clc

C=0.8;
t=0:1e-3:2*pi;
v=sin(5*t+pi/2);
i=4*cos(5*t+pi/2);

plot(t,i,"linewidth",1);
hold;
plot(t,v,"linewidth",1); 
grid on;
legend('i(t)','v(t)');
xlabel('Time (s)');ylabel('Amplitude');
