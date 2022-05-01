//  A  PROGRAM TO SHOW HOW THE SCOPE RESOLUTION OPERATOR WORKS:

#include<iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
public:
    Rectangle (int l=1, int b=1)
    {
        setLength(l);
        setBreadth(b);
    }
    Rectangle (Rectangle &r)
    {
        length=r.length;
        breadth=r.breadth;
    }
    void setLength(int l)
    {
        if(l>0)
            length=l;
        else
        {
            cout<<"The Length of the Rectangle can not be a negative value!";
            length = 1;
        }
    }
    void setBreadth(int b)
    {
        if(b>0)
        {
            breadth=b;
        }
        else
        {
            cout<<"The Breadth of the Rectangel can not be a negative value!";
            breadth=1;
        }
    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    int area()
    {
        return length*breadth;
    }
    int parimeter();

};
    int Rectangle::parimeter()          //
    {                                   //  --> When we write body of a class function 
        return 2*(length+breadth);      //      outside the class using :: is called 
    }                                   //      scope resolution operator
int main()
{
    int length, breadth;
    cout<<"Enter the length of the Rectangle: ";
    cin>>length;
    cout<<"Enter the Breadth of the Rectangle: ";
    cin>>breadth;
    Rectangle r(length,breadth);
    Rectangle r1(r);
    cout<<"The area of r and r1 is: "<<r.area()<<endl<<r1.area()<<endl;
    cout<<"The perimeter of r and r1 is: "<<r.parimeter()<<endl<<r1.parimeter();  
    return 0;
}