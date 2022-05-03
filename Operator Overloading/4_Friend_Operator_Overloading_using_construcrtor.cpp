//  //  A PROGRAM TO SHOW HOW FRIEND OPERATOR OVERLOADING WORKD 
//  FOR + OPERATOR USING CONSTRUCTOR

#include<iostream>
using namespace std;

class Complex
{
private:
    int real;
    int img; 
public:
    void display()
    {
        cout<<real<<"+i"<<img;
    }
    Complex(int c1=0, int c2=0)
    {
        real = c1;
        img = c2;
    }
    friend Complex operator+(Complex c1, Complex c2);
};

int main(){
    Complex c1(10,5),c2(5,3),c3;
    c3=c1+c2;
    c3.display();
    return 0;
}
Complex operator+(Complex c1, Complex c2)
{
    Complex temp;
    temp.real=c1.real+c2.real;
    temp.img=c1.img+c2.img;
    return temp;
}