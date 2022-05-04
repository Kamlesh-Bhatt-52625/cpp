//  A PROPER PROGRAM TO SHOW HOW TO INHERIT A CLASS TO ANOTHER CLASS

#include<iostream>
using namespace std;

class Rectangle
{
public:
    int length;
    int breadth;
public:
    Rectangle();
    Rectangle(int l, int b);
    Rectangle(Rectangle &r);
    int getLength();
    int getBreadth();
    void setLength(int l);
    void setBreadth(int b);
    int area();
    int perimeter();
    bool isSquare();
    ~Rectangle();
};
Rectangle::Rectangle()
{
    length=1;
    breadth=1;
}
Rectangle::Rectangle(int l, int b)
{
    length=l;
    breadth=b;
}
Rectangle::Rectangle(Rectangle &r)
{
    length=r.length;
    breadth=r.breadth;
}
int Rectangle::getLength()
{
    return length;
}
int Rectangle::getBreadth()
{
    return breadth;
}
void Rectangle::setLength(int l)
{
    if(l>0)
    {
        length=l;
    }
    else
    {
        cout<<"The length of the Rectangle can not be a negative value!";
        length=1;
    }
}
void Rectangle::setBreadth(int b)
{
    if(b>0)
        breadth=b;
    else
    {
        cout<<"The Breadth of the Rectangle can not be a negative value!";
        breadth=1;
    }
}
int Rectangle::area()
{
    return length*breadth;
}
int Rectangle::perimeter()
{
    return 2*(length+breadth);
}
bool Rectangle::isSquare()
{
    return length==breadth;
}
Rectangle::~Rectangle()
{
    cout<<"Rectangle Destroyed!";
}

class Cuboid:public Rectangle
{
private:
    int height;
public:
    Cuboid();
    Cuboid(int h);
    Cuboid(Cuboid &c);
    void setHeight(int h);
    int getHeight();
    int volume();
    friend istream& operator>>(istream&In, Cuboid &c1);
};

Cuboid::Cuboid()
{
    height=1;
}
Cuboid::Cuboid(int h)
{
    height=h;
}
Cuboid::Cuboid(Cuboid &c)
{
    height=c.height;
}

void Cuboid::setHeight(int h)
    {
        if(h>0)
        {
            height=h;
        }
        else
        {
            cout<<"The height of a cuboid can not be 0 or negative!"<<endl;
            height=1;
        }
    }
int Cuboid::getHeight()
{
    return height;
}
int Cuboid::volume()
{
    return getLength()*getBreadth()*getHeight();
}

int main(){

    Cuboid c;
    cout<<"Enter the height, length and breadth of cuboid: ";
    cin>>c;
    cout<<"The volume of this cuboid is: "<<c.volume()<<endl;
    
    return 0;
}

istream& operator>>(istream&In, Cuboid &c1)
{
    In>>c1.height>>c1.length>>c1.breadth;
    return In;
}
