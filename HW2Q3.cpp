/*For EE 304, the final grade will be calculated based on the table given below. The
weights are also given in the table below. Write a program which accepts homework,
midterm exam and final exam scores from the user, then calculates and displays the
weighted final score and the grade.
*/
#include <iostream>
using namespace std;
float grade,homework,midterm,final;
int main(){
    cout<<"Please give your homework grade, your midterm exam grade, and your final exam grade"<<endl;
    cin>>homework>>midterm>>final;
    grade = homework*0.25 + midterm*0.35+final*0.40;
    cout<<"Your grade is "<<grade<<endl;
    if(grade<=100&&grade>=90) 
        cout<<"You have an A in the class"<<endl;
    else if(grade<90&&grade>=80) 
        cout<<"You have an B in the class"<<endl;
    else if(grade<80&&grade>=70) 
        cout<<"You have an C in the class"<<endl;
    else if(grade<70&&grade>=60) 
        cout<<"You have an D in the class"<<endl;
    else if(grade<60&&grade>=0) 
        cout<<"You have an F in the class"<<endl;
    return 0; 
}
