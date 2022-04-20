//  A PROGRAM TO SHOW HOW do while LOOP WORKS

//  PRINTING NUMBERS FROM 0 - n BY TAKING n AS AN INPUT FROM THE USER


#include<iostream>
using namespace std;

int main(){

    int n, i=1;

    cout<<"Enter the value of n:\n";
    cin>>n;

    do
    {
        cout<<i<<endl;
        i++;
    
    }while(i<=n);


    return 0;
}