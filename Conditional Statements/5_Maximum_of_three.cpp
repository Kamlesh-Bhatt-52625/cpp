//  A PROGRAM TO CHECK WHICH ONE OF THE 3 NUMBERS IS THE GRETESTS 
//  USING NESTED IF

#include<iostream>
using namespace std;

int main(){

    int num1, num2, num3;
    cout<<"Enter three numbers:\n";
    cin>>num1>>num2>>num3;

    if(num1>num2 && num1>num3){
        cout<<"The gretesst number is: "<<num1<<endl;
    }
    else if(num2>num3){
        cout<<"The gretesst number is: "<<num2<<endl;
    }
    else{
        cout<<"The gretesst number is: "<<num3<<endl;
    }

    return 0;
}