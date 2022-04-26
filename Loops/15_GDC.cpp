//  A PROGRAM TO FIND THE Greatest common divisor (GDC) or HCF (Highest Common Factor) OF ANY TWO NUMBERS 

#include<iostream>
using namespace std;

int main(){

    int num1, num2;

    cout<<"Enter two numbers:"<<endl;
    cin>>num1>>num2;
    int n=num1, m=num2;

    while(num1!=num2){
        if(num1>num2){
            num1=num1-num2;
        }
        else if(num2>num1){
            num2=num2-num1;
        }
    }
    cout<<"The Greatest common divisor (GDC) of "<<n<<", "<<m<<" is: "<<num1;

    return 0;
}