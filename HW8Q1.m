%Write the MATLAB commands to create the following:
%a. A 1x5 (1 row and 5 columns) array whose elements are 1, 2, 3, 4 and 5.
%b. A 4x1 array whose elements are 6, 7, 8 and 9.
%c. An array whose elements are numbers between –π and π with increments of 0.5.
%d. Find the max and min values of the array in part (c).

clear 
clc

A=[1 2 3 4 5]

B=[6;7;8;9]

C=[-pi:0.5:pi,pi]

D=[max(C) min(C)]