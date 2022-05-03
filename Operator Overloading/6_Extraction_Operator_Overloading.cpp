//  A PROGRAM TO SHOW HOW THE EXTRACTION OPERATOR OVERLOADING WORKS

#include<iostream>
using namespace std;

class Complex
{
    int real;
    int img;
public:

    friend Complex operator+(Complex c1, Complex c2);
    friend istream& operator>>(istream &I, Complex &C);
    friend ostream& operator<<(ostream &I, Complex &C);
};

Complex operator+(Complex c1, Complex c2)
{
    Complex temp;
    temp.real=c1.real+c2.real;
    temp.img=c1.img+c2.img;
    return temp;
}

istream& operator>>(istream &I, Complex &C)
{
    I>>C.real>>C.img;
    return I;
}

ostream& operator<<(ostream &I, Complex &C)
{
    I<<C.real<<"+i"<<C.img;
    return I;
}

int main(){
    Complex c1,c2,c3;
    cout<<"Enter the value of c1: "<<endl;
    cin>>c1;
    cout<<"Enter the value of c2: "<<endl;
    cin>>c2;
    c3=c1+c2;
    cout<<c3;
    
    return 0;
}