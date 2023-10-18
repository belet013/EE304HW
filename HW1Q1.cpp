/*Write a program which accepts a temperature value in Fahrenheit and converts it to Celsius and
displays it.*/

#include <iostream>
using namespace std;
float farenheit,conversion;
int main(){
    cout<<”Type the temperature in farenheit: ”; 
    cin>>farenheit; 
    conversion=(farenheit-32)*(5.0/9.0);
    cout<<"The temperature in Celsius is "<<conversion<<"."<<endl;
    return 0;
}