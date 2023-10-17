/*Given two one-dimensional arrays with 10 elements, write a program which finds the
number of different elements with the same index. (This is called Hamming distance for
binary strings. It is used for error detection and correction in transmitted data on
computer networks). See below for details:
First array: 1 0 1 0 1 0 1 0 1 0
Second array: 1 0 1 1 1 0 1 1 1 0
Number of different elements is 2 for the example above.
*/


#include <iostream>
using namespace std;

int main(){
    int binarystring1[10]={1,0,1,0,1,0,1,0,1,0};
    int binarystring2[10]={1,0,1,1,1,0,1,1,1,0};
    int counter=0;

    for(int i=0;i<10;i++){
        if(binarystring1[i]!=binarystring2[i])
            counter++;
    }
    cout<<"Number of different elements is "<<counter<<"."<<endl;

    return 0;
}