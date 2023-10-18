/*
To find the maximum root of the quadra8c equa8on:
Write a user defined func8on (with the parameters a, b, and c) that finds the
roots of the equa8on and returns the maximum root.
Use this func8on in main() func8on to get a, b, and c parameters from the user
and display the maximum root.
*/
#include <iostream>
#include <cmath>
using namespace std;
float a,b,c,d,rootmax;
float maxroot(float,float,float);
int main(){
    cout<<"Enter coefficients a, b and c: ";
    cin>>a>>b>>c;
    rootmax=maxroot(a,b,c);
    cout<<"Maximum root is: "<<rootmax<<endl;
    return 0;
}
float maxroot(float a, float b, float c){
    d=b*b-4*a*c;
    if(d==0){
        float root1=-b/(2*a);
        return root1;
    }
    else if(d>0){
    float root1=(-b+pow(d,0.5))/(2*a);
    float root2=(-b-pow(d,0.5))/(2*a);
    if(root1>root2)
        return root1;
    else
        return root2;  
    }
}
