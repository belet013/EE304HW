% The Voltage and Current relationship for a inductor is given by the following equation:

% , where and .
% Write a MATLAB program that plots v(t) and i(t) between t=0 and t=2π on the same axes.
% (Do not use any function for the derivative in MATLAB, manually find the derivative of the
% current and use it in the equation). 

clear 
clc
syms t;

L=0.6;

i=sin(5*t+pi/2);
v=L*diff(i);

fplot(i,[0 2*pi]);
hold;
fplot(v,[0 2*pi]);

xlabel("Values of t");
ylabel("Function values");
legend('Current','Voltage');