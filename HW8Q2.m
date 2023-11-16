% Write the MATLAB commands to create the following:
% a. Create an array whose first row elements consist of numbers between 0 and 20 with
% increments of 2. The second row elements consist of numbers between 5 and 35 with
% increments of 3. The third row elements consist of numbers between 10 and 60 with
% increments of 5.
% b. Use the first row elements and the third row elements of the array in part (a) to create
% a sub-array.
% c. Use the second column elements and the fifth column elements of the array in part (a)
% to create a sub-array.
% d. Use the elements of column numbers from 3 to 8 in the array in part (a) to create a
% sub-array.
% e. Use the elements of first row, second row and column numbers from 5 to 10 in the
% array in part (a) to create a sub-array.
clear
clc

A = [0:2:20; 5:3:35; 10:5:60];

B = A([1, 3], :);

C = A(:, [2, 5]);

D = A(:, 3:8);

E = A(1:2, 5:10);

disp(A)
disp(B)
disp(C)
disp(D)
disp(E)