// A program to show the work of smart pointers

// In shared_ptr more than one pointer can point at one object 

#include<iostream>
#include<memory>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
public:
    Rectangle(int length, int breadth)
    {
        this->length = length;
        this->breadth = breadth;
    }
    int area()
    {
        return length*breadth;
    }
};

int main()
{
    shared_ptr<Rectangle> ptr(new Rectangle(4,5));
    cout<<ptr->area()<<endl;
    
    shared_ptr<Rectangle> ptr2; 
    ptr2=ptr;   // Both ptr and ptr2 will point to this object of Rectangle class     
    cout<<ptr2->area()<<endl;
    cout<<ptr->area()<<endl; 
    cout<<ptr.use_count()<<endl;    // This will give the number of pointers pointing on this object
    return 0;
}