//  A PROGRAM TO SHOW THE USE OF POINTER IN HEAP TO ACCESS THE CLASS

#include<iostream>
using namespace std;

class Rectangle
{
public:
    int lenght;
    int breadth;

    int area(){
        return lenght*breadth;
    }
    int perimeter(){
        return 2*(lenght + breadth);
    }
};

int main(){
    
    Rectangle *ptr = new Rectangle;  //  --> This will creat *ptr in heap memory
    
    ptr->lenght=10;
    ptr->breadth=5;
    cout<<ptr->area()<<endl;
    cout<<ptr->perimeter()<<endl;

    return 0;
}