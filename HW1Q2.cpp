/*
Write a program which accepts 3 integers, calculates the average, and displays the result.
*/

#include <iostream>
using namespace std;
    int one, two, three;
    int main(){
    cout<<"Give 3 integers"<<endl;
    cin>>one>>two>>three; 
    cout<<"The average of the three numbers are: "<<float(one+two+three)/3<<endl;
    return 0;
}