//  A PROGRAM TO SHOW HOW THE INHERTANCE OF CLASS WORKS

#include<iostream>
using namespace std;

class Base
{
public:
    int a;
    void display()                      //
    {                                   //  --> This function will print for Base
        cout<<"Display of Base! "<<a<<endl; //      class. 
    }                                   //
};

//  THE CLASS Display WILL HAVE ACCESS TO EVERYTHING THAT Base CLASS HAVE
class Display:public Base               //  --> This is how we Inherit Base class
                                        //      to Display class.
{
public:
    void show()                         // 
    {                                   //  --> This function will print for Display
        cout<<"Show of Display!"<<endl; //      class.
    }                                   //
};

int main(){

    Display d;
    d.a=100;        //  --> Accessing the variable of Base class
    d.show();       //  --> We can access the show function inside the Display class
                    //      by calling it.
    d.display();    //  --> We can the display function inside the Display class by 
                    //      inheriting it from the Base class.
    
    return 0;
}