/*x and y are unknowns and a, b, c, d, e and f are the coefficients for the simultaneous
equations given below:
a*x + b*y = c
d*x + e*y = f
Write a program which accepts a, b, c, d, e and f coefficients from the user, then finds
and displays the solutions for x and y. */
#include <iostream>
using namespace std;
float a,b,c,d,e,f,determinant;
int x,y;
int main(){
    cout<<"Please give 6 numbers for ax+by=c and dx+ey=f"<<endl;
    cin>>a>>b>>c>>d>>e>>f;
    determinant=a*e-b*d; 
    if(determinant==0){
        cout<<"determinant is 0, cannot proceed";
        return 0;
    }
    x=(c*e-b*f)/determinant;
    y=(a*f-c*d)/determinant; 
    cout<<"The solution for x is "<<x<<" and the solution for y is "<<y<<"."<<endl;
}