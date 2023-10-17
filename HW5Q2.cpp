/*
Write a user-defined function that takes an array and the size of the array as
parameters, and returns the number of elements whose values are between 10 and 20
in the array. Define and initialize an array with 10 elements in main() function and use
your user-defined function to display the result.
*/


#include <iostream>
using namespace std;

int elementcounter(int array[], int size) {
    int count=0;
    for (int i=0; i<size;i++){
        if (array[i]>=10&&array[i]<=20)
            count++;
    }
    return count;
}

int main(){
    int arraysize;

    cout<<"Give a size of an array: ";
    cin>>arraysize;
    if (arraysize<=0){
        cout<<"Not valid size"<<endl;
        return 1;
    }

    int *packedarray=new int[arraysize];

    cout<<"Fill in the array with integers"<<endl;
    for (int i=0;i<arraysize;i++)
        cin >> packedarray[i];

    int result=elementcounter(packedarray, arraysize);

    cout<<"There are "<<result<<" numbers between 10 and 20"<<endl;

    delete[] packedarray;
    return 0;
}
