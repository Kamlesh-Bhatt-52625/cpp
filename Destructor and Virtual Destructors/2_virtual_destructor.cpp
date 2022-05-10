//  AN EXAMPLE TO SHOW HOW THE VIRTUAL DISTRUCTORS WORK

#include<iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout<<"Base Constructor!"<<endl;
    }
    virtual ~Base()
    {
        cout<<"Base Destructor!"<<endl;
    }
};
class Derived:public Base
{
public: 
    Derived()
    {
        cout<<"Derived Constructor!"<<endl;
    }
    ~Derived()
    {
        cout<<"Derived Destructor!"<<endl;
    }
};

void fun()
{
    Base *p= new Derived();     //  When we make a pointer of Base class and an object of Derived 
                                //  class the destructor of Base class will be called. So to call
    delete p;                   //  the destructor of Derived class also we have to make the 
                                //  destructor of Base class as virtual by putting virtual keyword 
                                //  at the starting of the destructor
}
int main()
{
    fun();
    return 0;
}