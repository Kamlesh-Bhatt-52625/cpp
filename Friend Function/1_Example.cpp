//  AN EXAMPLE OF FRIEND FUNCTION 

#include<iostream>
using namespace std;

class base
{
private:
    int a;
protected:
    int b;
public:
    int c;
    friend void fun();  //  --> By making the function as friend inside the class we can 
                        //      access its private and protected members as well. 
};

void fun()
{
    base b;
    b.a=6;      // -->As we know we can not access the private and protected members of 
    b.b=4;      //    any class outside that class or in any function which does'nt 
    b.c=9;      //    belong to that particular class we can only access the public members.
}

int main()
{
    fun();
    return 0;
}