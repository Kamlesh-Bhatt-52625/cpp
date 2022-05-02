//  A PROGRAM TO SHOW ALL THE POSSIBLE FUNCTIONS INSIDE THE CLASS

#include<iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
public:
    // CONSTRUCTORS 
    Rectangle ();               // Non Parameterized Constructor
    Rectangle (int l, int b);   // Parameterized Constructor
    Rectangle (Rectangle &r);   // Copy Constructors

    //  ACCESSORS
    int getLength();            // The functions which shows the values of private
    int getBreadth();           // variables are Accessors

    // MUTATORS
    void setLength(int l);            // The functions which sets the values of private 
    void setBreadth(int b);           // varibles are Mutators

    //  FACILITATORS 
    int area();                 // 
    int parimeter();            //

    //  INQUIRY FUNCTIONS
    bool isSquare();            // The functions which tells whether True of False

    //  DESTRUCTORS             //
    ~Rectangle();               //

};

int main(){

    Rectangle r(10,10);
    cout<<"Area "<<r.area()<<endl;
    if(r.isSquare())
    {
        cout<<"Yes it is a Square!"<<endl;
    }
    
    return 0;
}

//  WRITING THE BODY OF ALL THE FUNCTIONS OUTSIDE THE CLASS AND MAIN FUNCTION USING 
//  SCOPE RESOLUTION FUNCTION 

//  NON PARAMETERIZED CONSTRUCTOR
Rectangle::Rectangle ()
{
    length=1;
    breadth=1;
}

//  PARAMETERIZED CONSTRUCTOR
Rectangle::Rectangle (int l, int b)
{
    length=l;
    breadth=b;
}

//  COPY CONSTRUCTOR
Rectangle::Rectangle (Rectangle &r)
{
    length=r.length;
    breadth=r.breadth;
}

//  ACCESSOR
int Rectangle::getLength()
{
    return length;
}
int Rectangle::getBreadth()
{
    return breadth;
}

//  MUTATORS
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

//  FACILITATORS
int Rectangle::area()
{
    return length*breadth;
}
int Rectangle::parimeter()
{
    return 2*(length+breadth);
}

//  INQUIRY FUNCTIONS
bool Rectangle::isSquare()
{
    return length==breadth;
}

//  DESTRUCTOR
Rectangle::~Rectangle()
{
    cout<<"Rectangle Destroyed!";
}