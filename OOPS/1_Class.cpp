//  A PROGRAM TO SHOW THE USE OF THE CLASS

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
    
    Rectangle r1;
    r1.lenght=10;
    r1.breadth=5;

    cout<<"Area is: "<<r1.area()<<endl;
    cout<<"Perimeter is: "<<r1.perimeter()<<endl;

    return 0;
}