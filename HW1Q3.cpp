/*
For this class, the final weighted points will be calculated based on the table given below. Write
a program which accepts homework, midterm exam, and final exam points (0-100 scale) from
the user, then calculates and displays the total weighted points.
*/

#include <iostream> 
using namespace std; 
float homework,midterm,final; 
int main() { 
    cout<<"What is your homework grade: ";
    cin>>homework;
    cout<<"What is your midterm grade: ";
    cin>>midterm;
    cout<<"What is your final grade: ";
    cin>>final;
    cout<<"Your final grade is: "<<(homework*.25)+(midterm*.35)+(final*.4)<<endl;
    return 0;
}