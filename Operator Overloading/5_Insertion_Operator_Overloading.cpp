//  A PROGRAM TO SHOW HOW WE CAN OVERLOAD THE INSERTION OPERATOR

#include<iostream>
using namespace std;

class Complex
{
private:
    int real;
    int img;
public:
    Complex(int c1=0, int c2=0)
        {
            real = c1;
            img = c2;
        } 
    friend Complex operator+(Complex c1, Complex c2);  
    friend ostream& operator<<(ostream &I, Complex &C);
};

int main(){
    Complex c1(10,5),c2(5,3),c3;
    c3=c1+c2;
    cout<<c3;
    return 0;
}

Complex operator+(Complex c1, Complex c2)
{
    Complex temp;
    temp.real=c1.real+c2.real;
    temp.img=c1.img+c2.img;
    return temp;
}

ostream& operator<<(ostream &I, Complex &C)
{
    I<<C.real<<"+i"<<C.img;
    return I;
}