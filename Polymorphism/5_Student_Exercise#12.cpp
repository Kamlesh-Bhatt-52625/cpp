//  WRITE CLASSES TO DEMONSTRATE POLYMORPHISM
//  BASE CLASS SHAPE
//  DERIVED CLASSES
//  1. RECTANGLE
//  2. CIRCLE

#include<iostream>
using namespace std;

class Shape
{
public:
    virtual float area()=0;
    virtual float parimeter()=0;
};
class Rectangle:public Shape
{
private: 
    int length;
    int breadth;
public:
    Rectangle(int a, int b)
    {
        length=a;
        breadth=b;
    }
    float area()
    {
        return length*breadth;
    }
    float parimeter()
    {
        return 2*(length+breadth);
    }

};

class Circle:public Shape
{
private:
    int radius;
public:
    Circle(int r)
    {
        radius = r;
    }
    float area()
    {
        return 3.14*radius*radius;
    }
    float parimeter()
    {
        return 2*3.14*radius;
    }
};

int main()
{
    Shape *s = new Rectangle (3,4);
    cout<<"The area of this Rectangle is: "<<s->area()<<endl;
    cout<<"The Perimeter of this Rectangle is: "<<s->parimeter()<<endl;
    s=new Circle (4);
    cout<<"The area of this Circle is: "<<s->area()<<endl;
    cout<<"The Perimeter of this Circle is: "<<s->parimeter()<<endl;
    

    return 0;
}