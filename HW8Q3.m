% Create an array whose elements are numbers between –2π and 2π with increments of 0.5.
% Write the MATLAB commands to do the following:
% a. Calculate the sin of all elements in the array.
% b. Calculate the exponent (ex
% ) of elements in the array.
% c. Calculate the square root of all elements in the array.
% d. Calculate the square of all elements in the array.
% e. Find min and max values of the elements in the array.

x = -2*pi:0.5:2*pi;

A = sin(x);

B = exp(x);

C = sqrt(x);

D = x.^2;

minvalue = min(x);
maxvalue = max(x);

disp(A)
disp(B)
disp(C)
disp(D)
disp(minvalue)
disp(maxvalue)