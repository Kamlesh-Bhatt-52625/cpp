//  A PROGRAM TO SHOW HOW FRIEND OPERATOR OVERLOADING WORKD 
//  FOR + OPERATOR

#include<iostream>
using namespace std;

class Complex
{
public:
    int real;
    int img;
    
    friend Complex operator+(Complex c1, Complex c2);
};

int main(){

    Complex c1,c2,c3;
    c1.real=8;
    c1.img=4;
    c2.real=3;
    c2.img=3;
    c3=c1+c2;
    cout<<endl<<"The addition of c1 and c2 is: "<<c3.real<<"+i"<<c3.img<<endl<<endl;
    
    return 0;
}

Complex operator+(Complex c1, Complex c2)
{
    Complex temp;
    temp.real=c1.real+c2.real;
    temp.img=c1.img+c2.img;
    return temp;
}