//  A PROGRAM TO ADD TWO NUMBERS USING FUNCTIONS

#include<iostream>
using namespace std;

int add(int num1, int num2){ 
    return num1+num2;
}

int main(){
    int num1, num2;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    cout<<"The sum is: "<<add(num1,num2);
    return 0;
}