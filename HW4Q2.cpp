
/*
Write a user defined func8on (with parameters a11, a12, a21 and a22 for a 2x2 matrix) that
finds and displays the inverse of the 2x2 matrix. Your func8on will not return a value
(void func8on). Use main() func8on to get elements of the matrix from the user, and use
your func8on in main() to find and display the inverse matrix.
*/
#include <iostream>
#include <cmath>
using namespace std;
int adja[2][2],a11,a12,a21,a22;
float recip[2][2];
int a[2][2];
 
int matrixinverse(int a11,int a12,int a21,int a22){
    a[0][0]=a11;
    a[1][1]=a22;
    a[0][1]=a12;
    a[1][0]=a21;
    int d = (a[0][0]*a[1][1])-(a[0][1]*a[1][0]);
    if(d==0){
        cout<<"Invalid input to inverse.";
        return 0;
    }
    adja[0][0]=a[1][1];
    adja[1][1]=a[0][0]; 
    adja[0][1]=-a[0][1];
    adja[1][0]=-a[1][0];
    cout<<"The inverse of the matrix is: "<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            recip[i][j]=adja[i][j]/(float)d;
            cout<<recip[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

int main(){ 
    cout<<"Enter 4 elements to form a 2x2 matrix: "<<endl;
    cin>>a11>>a12>>a21>>a22;
    matrixinverse(a11,a12,a21,a22);
    return 0;
}
