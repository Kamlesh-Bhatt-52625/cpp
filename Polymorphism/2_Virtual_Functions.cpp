//  A DEMO OF VIRTUAL FUNCTIONS

#include<iostream>
using namespace std;

class Base
{
public:
    virtual void fun()              //  --> Making fun of base as virtual 
    {
        cout<<"Fun of Base!"<<endl;
    }
};
class Derived:public Base
{
public:
    void fun()
    {
        cout<<"Fun of Derived!"<<endl;
    }
};

int main()
{
    Derived d;
    // Base *ptr=&d;           //  --> when functions are overrided The function 
    // ptr->fun();             //      call depends on pointer 
    Base *ptr=&d;              //      when the Function of any class are virtual
    ptr->fun();                //      then the function call depends on object
    
    return 0;
}