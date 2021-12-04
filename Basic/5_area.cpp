//  AREA OF A CIRCLE 

#include<iostream>
using namespace std;

int main(){
    float area, radius;
    cout<<"Enter the radius of this circle:\n";
    cin>>radius;
    
    area = 3.1425f * radius * radius;

    cout<<"The area of this circle is: "<<area<<endl;

    return 0;
}