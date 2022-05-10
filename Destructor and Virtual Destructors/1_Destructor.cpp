//  AN EXAMPLE TO SHOW THE DESTRUCTORS

#include<iostream>
using namespace std;

class Demo
{
    int *p;
public:
    Demo()
    {
        p = new int [10];   // This will create an array of size 10 in the heap memory
        cout<<"Constructor of Demo! "<<endl;
    }
    ~Demo()
    {
        delete []p;         //  This will delete the memory occupied by p when the destructor will be called
        cout<<"Destructor of Demo! "<<endl;
    }
};

namespace First
{
    void fun()
    {
        Demo d;     //  This will call constructor and destructor both 
    }
};
namespace Second
{
    void fun()
    {
        Demo *p = new Demo ();      //  This line will only call the constructor
        delete p;                   //  This line will call the destructor
    }
};
int main()
{
    First::fun();
    Second::fun();
    return 0;
}