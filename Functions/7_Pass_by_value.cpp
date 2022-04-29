//  A PROGRAM TO SHOW THE WORK OF PASS BY VALUE

#include<iostream>
using namespace std;

void swap(int num1, int num2)
{
    cout<<num1<<" "<<num2<<endl;
    int temp;
    temp = num1;
    num1 = num2;                //--> by pass by value the values of the variables
                                //    of main function does'nt change
    num2 = temp;
    cout<<num1<<" "<<num2<<endl;
}

int main(){
    int num1=10, num2=20;

    swap(num1,num2);
    cout<<num1<<" "<<num2<<endl;
    return 0;
}