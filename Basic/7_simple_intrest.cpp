//  A PROGRAM TO FIND THE SIMPLE INTREST

//  The formula to calculate the simple interest is: 

//  simple_interest = (P * T * R) / 100 

//  where P is principal amount, T is time & R is rate of interest.

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    float p, r, t; // p is for principal amount, r is rate of intrest, t is time.
    float simple_intrest;

    cout<<"Enter the principal amount(p):\n";
    cin>>p;
    cout<<"Enter the rate of intrest(r):\n";
    cin>>r;
    cout<<"Enter the time(t):\n";
    cin>>t;

    simple_intrest = (p*r*t)/100;

    cout<<"The simple intrest is: "<<simple_intrest;


    return 0;
}