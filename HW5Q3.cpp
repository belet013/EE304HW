/*
Given a two-dimensional array with 3 rows and 4 columns, write a program which finds
and displays the minimum, maximum and the average of each row in the array. Do not
use built-in min and max functions.
*/

#include <iostream>
using namespace std;

int main(){
    int packedarray[3][4];

    cout<<"Fill in the 2D 3x4 array with integers"<<endl;
    for (int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<"Enter value for row "<<i+1<<", column "<<j+1<<": ";
            cin>>packedarray[i][j];
        }
    }

    for (int i=0;i<3;i++) {
        int min=packedarray[i][0];
        int max=packedarray[i][0];
        int sum=0;

        for (int j=0;j<4;j++) {
            sum+=packedarray[i][j];

            if (packedarray[i][j]<min)
                min=packedarray[i][j];

            if (packedarray[i][j]>max)
                max=packedarray[i][j];

            sum+=packedarray[i][j];
        }

        float average =(float)sum/4;
        cout<<"The max in the first row is "<<max<<" while the min is "<<min<<" and the average is "<<average<<endl;
    }
}