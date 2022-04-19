//  A PROGRAM TO PRINT MENU OF A CALCULATOR AND USE IT FOR 2 NUMBERS

#include<iostream>
using namespace std;

int main(){

    int num1,num2, result, option;

    cout<<"Menu\n";
    cout<<"1. Add\n2. Sub\n3. Mul\n4. Div\n";
    cout<<"\nEnter your choice:"<<endl;
    cin>>option;
    cout<<"Enter 2 numbers:"<<endl;
    cin>>num1>>num2;
    switch(option){
        case 1: result=num1+num2;
            break;
        case 2: result=num1-num2;
            break;
        case 3: result=num1*num2;
            break;
        case 4: result=num1/num2;
            break;
    }
    cout<<"The result is: "<<result<<endl;
    return 0;
}