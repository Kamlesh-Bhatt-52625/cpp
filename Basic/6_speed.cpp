//  PROGRAM FOR SPEED 

//  SPEED =( INITIAL VELOCITY(u)^2 + FINAL VELOCITY(v)^2 ) / (2 * ACCELARATION(a))

//  SPEED = (u^2 + v^2 )/ (2*a);

#include<iostream>
using namespace std;

int main(){
    int u, v, a;
    float speed;

    cout<<"Enter the value of initial velocity(u):\n";
    cin>>u;
    cout<<"Enter the value of final velocity(v):\n";
    cin>>v;
    cout<<"Enter the value of accelaration(a):\n";
    cin>>a;

    speed = (float)(u*u + v*v)/(2*a);
    cout<<"The speed is "<<speed<<endl;
    return 0;
}