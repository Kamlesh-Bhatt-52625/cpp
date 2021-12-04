//  A PROGRAM TO FIND  the roots of the quadratic equation

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int a, b, c;
    float result1, result2;
    cout<<"Enter the value of a, b and c:\n";
    cin>>a>>b>>c;
    result1 = (-b+sqrt(b*b - 4*a*c))/(2*a);
    result2 = (-b-sqrt(b*b - 4*a*c))/(2*a);
    cout<<result1<<" "<<result2;

    return 0;
}