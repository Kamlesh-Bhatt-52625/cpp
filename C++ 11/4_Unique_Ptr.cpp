// A program to show the work of smart pointers

// In unique_ptr only one pointer can point at one object 

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
    unique_ptr<Rectangle> ptr(new Rectangle(4,5));
    cout<<ptr->area()<<endl;
    // unique_ptr<Rectangle> ptr2 =ptr; This is not allowed because only one pointer can point at this object
    unique_ptr<Rectangle> ptr2; 
    ptr2=move(ptr);     //  This will make ptr2 point at the object where ptr is pointing and ptr will be 
                        //  deleted that means only one pointer can point at one object
    cout<<ptr2->area()<<endl;
    // cout<<ptr->area()<<endl; // This will not print the area of this Rectangle because ptr is deleted
    return 0;
}