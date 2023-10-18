
/*
Write a program that finds the sum of negative and sum of positive values for the
function cos(3x)+ 2sin(2x) between x=0 and x=360 degrees with an increment value
entered by the user. Sin and cos functions accept values in radian.
Example output:
Enter the increment value in degrees: 1
Sum of negative values = …
Sum of positive values = …
*/
#include <iostream>
#include <cmath>
using namespace std;
double inc,function;
double sumPos,sumNeg,radian = 0.0;

double DegreetoRadians(double deg){
    return deg*(M_PI/180.0);
}
int main(){
    cout<<"Give an increment value in degrees: ";
    cin>>inc;
    for(double i=0.0; i<=360.0;i+=inc){
        radian=DegreetoRadians(i);
        function=cos(3*radian)+2*sin(2*radian);
        if(function>0)
            sumPos+=function;
        else
            sumNeg+=function;
    } 
    cout<<"Sum of negative values="<<sumNeg<<"\nSum of positive values="<<sumPos;
    return 0;
}
