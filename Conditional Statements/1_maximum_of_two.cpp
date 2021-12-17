//  A PROGRAM TO FIND THE GRETEST OF TWO NUMBERS
#include<iostream>

using namespace std;

int main(){

    int num1, num2;

    cout<<"Enter two numbers:\n";
    cin>>num1>>num2;

    if(num1>num2){
        cout<<"The bigger number is: "<<num1<<endl;
    }
    else if(num1==num2){
        cout<<"Both the numbers are equal: "<<num1<<" = "<<num2<<endl;
    }
    else{
        cout<<"The bigger number is: "<<num2<<endl;
    }

    return 0;
}