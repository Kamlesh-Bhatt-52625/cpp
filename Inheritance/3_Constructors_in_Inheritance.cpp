//  A PROGRAM TO SHOW HOW THE CONSTRUCTORS IN INHERITANCE WORKS

#include<iostream>
using namespace std;

class base
{
public:
    base();
    base(int a);
};
class Derived:public base
{
public:
    Derived();
    Derived(int x);
    Derived(int x, int a);
};
base::base()
{
    cout<<"Default of base class!"<<endl;
}
base::base(int a)
{
    cout<<"parameterized constructor of base class!"<<a<<endl;
}

Derived::Derived()
{
    cout<<"Default fo Derived class!"<<endl;
}
Derived::Derived(int x)
{
    cout<<"parameterized constructor of Derived class!"<<x<<endl;
}
Derived::Derived(int x, int a):base(a)                  //  --> This is how we can call parameterized 
{                                                       //      constructor of base class from Derived class
    cout<<"parameterized constructor of Deriveddd class!"<<x<<endl;
}

int main()
{
    Derived d;              // After making an object of Derived class the first constructor that is executed
                            // is from base class the non-parameterized constructor(default constructor)

    
    return 0;
}