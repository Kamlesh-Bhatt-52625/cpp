//  A PROGRAM TO FIND THE MAXIMUM OF 3 NUMBERS USING FUNCTIONS

#include<iostream>
using namespace std;

int maximum(int a, int b, int c){
    if(a>b && a>c){
        return a;
    }
    else if(b>c){
        return b;
    }
    else return c;
}

int main(){
    int num1=19, num2=10, num3=18, result;
    result = maximum(num1,num2,num3);
    cout<<"The maximum of three numbers is: "<<result<<endl;
    return 0;
}