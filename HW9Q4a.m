% Create a 10x10 matrix with random numbers using rand function in MATLAB. Write the
% MATLAB commands to do the following:
% a. Using for loops, write the code to find the sum and average of matrix elements
% whose values are between 0.3 and 0.6.
% b. Without using for loops, repeat part (a) using logical arrays and vectorized code.
% You can use sum and mean built-in functions
clear 
clc

A = rand(10);

sum = 0;
count = 0;

for i = 1:10
    for j = 1:10
        if A(i,j)>=0.3 && A(i,j)<=0.6
            sum=sum+A(i,j);
            count=count+1;
        end
    end
end

average=sum/count;
disp(average)