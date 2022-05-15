//  A PROGRAM TO SHOW WHAT DOES THE FINAL KEY WORD DO

#include<iostream>
using namespace std;
// class Parent final //   --> ONE USAGE OF FINAL KEY WORD IS IT RESTERICTS INHERITANCE
// {

// };
// class Child:public Parent   // It is not allowed
// {

// };

class Parent
{

// void fun() final    // This is an error because only virtual functions can be marked as final
virtual void fun() final
{

}

};
class Child:public Parent
{

    // void fun();     //  final keyword doesn't allow the ovriding of a function

};

int main()
{
    
    return 0;
}