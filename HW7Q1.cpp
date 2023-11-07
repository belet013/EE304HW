/*
Complex numbers can be represented by a+jb where a is the real part and b is the
imaginary part of the complex number.
Write a program that defines a class for complex numbers (similar to one implemented
in the class for 2x2 matrices). The definition should include the following member
functions:
- Necessary constructor functions
- A function that finds the magnitude of the complex number
- A function that finds the angle of the complex number
- + operator overloading function that adds two complex numbers
- * operator overloading function that multiplies two complex numbers
- / operator overloading function that performs division for two complex numbers
- == operator overloading function that compares two complex numbers whether
they are equal or not.
- Use these functions in main() function to show the results.
*/

#include <iostream>
#include <cmath>
using namespace std;

class Complex{
    int real; 
    int imaginary;

    public:
        Complex(){
            real=0;
            imaginary=1;
        }

        Complex(int a,int b){
            real=a;
            imaginary=b;
        }

        void display() const{
            cout<<real<<"+i"<<imaginary<<endl;
        }

        float getMagnitude() const{
            return sqrt(pow(real,2)+pow(imaginary,2));
        }

        float getAngle() const{
            return atan(imaginary/(float)real);
        }

        bool compare(Complex const &obj){
            if (real==obj.real && imaginary==obj.imaginary)
                return true;
            else
                return false;
        }

        Complex operator+(Complex const &obj){
            Complex res;
            res.real=real+obj.real;
            res.imaginary=imaginary+obj.imaginary;
            return res;
        }

        Complex operator*(Complex const &obj){
            Complex res;
            res.real=real*obj.real-imaginary*obj.imaginary;
            res.imaginary=imaginary*obj.real+real*obj.imaginary;
            return res;
        }
};

int main(){
    int real1,real2,img1,img2;
    cout<<"Please give the real part of the first number: ";
    cin>>real1;
    cout<<"Please give the imaginary part of the first number: ";
    cin>>img1;
    cout<<"Please give the real part of the second number: ";
    cin>>real2;
    cout<<"Please give the imaginary part of the second number: ";
    cin>>img2;

    Complex complexnumber1(real1,img1),complexnumber2(real2,img2);
    Complex result;

    cout<<"Adding the two complex numbers gives: ";
    result=complexnumber1+complexnumber2;
    result.display();

    cout<<"Multiplying the two complex numbers gives: ";
    result=complexnumber1*complexnumber2;
    result.display();

    cout<<"The magnitude of the first complex number is: "<<complexnumber1.getMagnitude()<<". The magnitude of the second complex number is: "<<complexnumber1.getMagnitude()<<"."<<endl;

    cout<<"The angle of the first complex number is: "<<complexnumber2.getAngle()<<". The angle of the second complex number is: "<<complexnumber2.getAngle()<<"."<<endl;

     if (complexnumber1.compare(complexnumber2)) {
        cout << "The two complex numbers are equal." << endl;
    } else {
        cout << "The two complex numbers are not equal." << endl;
    }

    return 0;
}