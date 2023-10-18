/*Write a program using while loop that finds the sum of odd and even numbers
separately between two integer numbers entered by the user.
Example output:
Enter two numbers: 10 20
Sum of odd numbers: 75
Sum of even numbers: 90
*/
#include <iostream>
using namespace std;
int a,b,temp,sumEven,sumOdd;
int main(){
    cout<<"Give 2 integers: ";
    cin>>a>>b; 
    if(a>b)
        swap(a,b);
    temp=a;
    while(temp<=b){
        if(temp%2==0)
            sumEven+=temp; 
        else
            sumOdd+=temp;
        temp++; 
    }
    cout<<"The sum of even numbers is: "<<sumEven<<endl;
    cout<<"The sum of odd numbers is: "<<sumOdd<<endl;
    return 0;
}
