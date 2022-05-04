//  A DEMO PROGRAM TO SHOW THE ACCESS SPECIFIERS

#include<iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
public:
    void setLength(int l)
    {
        if(l>0)
            length=l;
        else
            length=1;
    }
    void setBreadth(int b)
    {
        if(b>0)
            breadth=b;
        else
            breadth=1;
    }
    int area()
    {
        return length*breadth;
    }
    int parimeter()
    {
        return 2*(length+breadth);
    }
};

int main()
{
    Rectangle r1;           // --> By creating an object of Rectangle inside the main function 
                            //     we can only access the functions of the public 
    r1.setLength(4);
    r1.setBreadth(6);
    cout<<"The area is: "<<r1.area()<<endl;
    
    return 0;
}
