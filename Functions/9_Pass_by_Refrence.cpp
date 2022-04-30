//  A PROGRAM TO SHOW THE WORK OF CALL BY REFRENCE

#include<iostream>
using namespace std;

void swap(int &num1, int &num2) //--> for call by refrence we just use & in variable
                                //    names it is similar to the call by value but it
{                               //    can change the value in main function of a program
   
    int temp;
    temp = num1;
    num1 = num2;               
    num2 = temp;
}

int main(){
    int num1=10, num2=20;

    swap(num1,num2);
    cout<<num1<<" "<<num2<<endl;
    return 0;
}