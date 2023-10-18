
/*Write a program which finds and displays the maximum of three integer numbers
entered by the user. Do NOT use built in function max(), write your own code.*/
#include <iostream>
using namespace std;
int one,two,three;
int dog[2];
int main(){
    cout<<"Please give 3 integers!"<<endl;
    cin>>one>>two>>three;
    dog[0]=one;
    dog[1]=two;
    dog[2]=three;

if(dog[0]>dog[1]&&dog[0]>dog[2])
    cout<<one<<" is the biggest"<<endl;
else if(dog[1]>dog[0]&&dog[1]>dog[2]) 
    cout<<two<<" is the biggest"<<endl;
else if(dog[2]>dog[1]&&dog[2]>dog[0]) 
    cout<<three<<" is the biggest"<<endl;
else if(dog[0]==dog[1]&&dog[0]==dog[2]&&dog[1]==dog[2]) 
    cout<<one<<" is the biggest"<<endl;
else if(dog[0]==dog[1]||dog[0]==dog[2])
    cout<<one<<" is the biggest"<<endl;
else if(dog[1]==dog[0]||dog[1]==dog[2])
    cout<<two<<" is the biggest"<<endl;
else if(dog[2]==dog[1]||dog[2]==dog[0])
    cout<<three<<" is the biggest"<<endl;
return 0;
}