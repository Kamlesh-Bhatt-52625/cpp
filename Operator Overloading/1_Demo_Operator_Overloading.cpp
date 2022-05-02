//  A PROGRAM TO SHOW HOW OPERATOR OVERLOADING WORKS 
//  FOR + OPERATOR

#include<iostream>
using namespace std;

class Complex
{
public:
    int real;
    int img;
    // Complex add(Complex a)  // --> Instead of writing add we can write operator+
    Complex operator+(Complex a)
    {
        Complex temp;
        temp.real=real+a.real;
        temp.img=img+a.img;

        return temp;
    }
};

int main(){

    Complex c1,c2,c3;
    c1.real=10;
    c1.img=5;
    c2.real=5;
    c2.img=3;
    // c3=c1.add(c2); //--> When we write operator+ insted of writing add at that time 
                   //    we can write normal + operator and it will add two complex
                   //    number.
    c3=c1+c2;
    cout<<endl<<"The addition of Complex numbers c1 and c2 is: "<<c3.real<<"+i"<<c3.img<<endl<<endl;
    
    return 0;
}