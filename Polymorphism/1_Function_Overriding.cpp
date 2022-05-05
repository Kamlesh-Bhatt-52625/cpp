//  A EXAMPLE PROGRAM TO SHOW THE FUNCTION OVERRIDING

#include<iostream>
using namespace std;

class Base
{
public:
    void display()
    {
        cout<<"Display of Base!"<<endl;
    }
};
class Derived:public Base
{
public:
    void display()
    {
        cout<<"Display of Derived!"<<endl;
    }
};

int main()
{
    Derived d;                    // --> By making an object of Derived class the function of Derived
    // d.display();              //     class will be called but when we use d.Base::display()  The 
    d.Base::display();          //     function of Base class will be called .
    return 0;
}