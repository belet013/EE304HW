% The Voltage and Current relationship for a resistor is given by the following equation:
% v(t)=Ri(t), where R = 2 ohm and i(t)=cos(5t+pi/2)A
% 
% Write a MATLAB program that plots v(t) and i(t) between t=0 and t=2π on the same axes.

clear 
clc

R = 2;
t = linspace(0, 2*pi, 1000);
i = cos(5*t + pi/2);
v = R * i;

figure;
plot(t, i, 'r', 'LineWidth', 1, 'DisplayName', 'i(t)')

hold on

plot(t, v, 'b', 'LineWidth', 1, 'DisplayName', 'v(t)');

xlabel('Time (s)');
ylabel('Amplitude');
title('Voltage and Current for Resistor');
legend;
grid on;
