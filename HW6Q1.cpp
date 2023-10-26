/*
Write a program that does the following tasks:
- Ask user to enter the number of elements in dynamic arrays.
- Define two pointers and two dynamic arrays. Enter the elements of the dynamic
arrays using for loop in the main() function.
- Write a function that takes two pointers to the dynamic arrays and the number
of elements as parameters. Find and display the number of equal elements with
the same index in the dynamic arrays.
- Use this function in the main() function.
*/

#include <iostream>
using namespace std;

int main(){
    int n; 
	cout<<"Enter the number of elements in the dynamic arrays: "<<endl;
	cin>>n;
	int *array1=new int[n];
    int *array2=new int[n];

	cout<<"Fill array 1:"<<endl;

	for(int i=0;i<n;i++){
	    cout<<i+1<<":";
		cin>>array1[i];
	}
	cout<<"Fill array 2:"<<endl;
	for(int i=0;i<n;i++){
	    cout<<i+1<<":";
		cin>>array2[i];
	}
	cout<<"Same numbers and indexs shown below."<<endl;
	for (int i = 0; i < n; i++) 
	{
     if (array1[i]==array2[i])
         	cout<<"There is a match in index "<<i<<": "<<array1[i]<<"\n";
    }
    return 0;
}