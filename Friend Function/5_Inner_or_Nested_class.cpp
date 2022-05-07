// AN EXAMPLE OF INNER OR NESTED CLASSES 

#include<iostream>
using namespace std;

class Outer
{
public:
    void fun()
    {
        i.display();    //  We can access only the public members of inner class in outer class
    }
    class Inner
    {
    public:
        void display()
        {
            cout<<"Display of Inner!"<<endl;
        }
    };
    Inner i;    // We can only declare the object of Inner class after creating the Inner class
};

int main()
{
    Outer::Inner i;  //  We can only create the objects of Inner class outside the Outer class by using 
                     //  Outer::Inner it is possible because Inner class is declared as public if we dont
                     //  want to use the Inner class then we can make it as private inside the Outer class.
    return 0;
}