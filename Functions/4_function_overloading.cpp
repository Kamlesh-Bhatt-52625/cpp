//  A PROGRAM TO SHOW THE OVERLOADING OF FUNCTION

#include<iostream>
using namespace std;

int sum(int a, int b ){
    return a+b;
}
float sum(float a, float b){
    return a+b;
}
int sum(int a, int b, int c){
    return a+b+c;
}

int main(){
    int num1=10, num2=20, num3=30;
    float a=2.3f, b=3.7f;
    cout<<sum(num1,num2)<<endl;
    cout<<sum(a,b)<<endl;
    cout<<sum(num1,num2,num3)<<endl;
    
    return 0;
}