//  WRITE A PROGRAM TO FIND AREA OF A CIRCLE TAKE RADIUS AS AN INPUT

#include<iostream>
using namespace std;

int main(){

    float radius, area;

    // area of a circle is A=πr2 where A is area , r is radius 

    cout<<"Enter the radius of the circle:\n";
    cin>>radius;

    area = 3.1425f * radius * radius;
    
    cout<<"The area of this circle is: "<<area<<endl;

    return 0;
}

