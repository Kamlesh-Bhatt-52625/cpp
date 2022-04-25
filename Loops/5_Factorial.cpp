//  A PROGRAM TO FIND THE FACTORIAL OF N using for loop

//  Take n as an input from the user

#include<iostream>
using namespace std;

int main(){

    int n, factorial=1;

    cout<<"Get the factorial of any number from 1 to 13"<<endl;
    cout<<"Enter the number:"<<endl;
    cin>>n;

    for(int i=1; i<=n; i++){
        factorial *= i;
    }
    cout<<"The factorial of "<<n<<" is "<<factorial<<endl;

    return 0;
}