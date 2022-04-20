//  A PROGRAM TO SHOW HOW WHILE LOOP WORKS

//  PRINTING NUMBERS FROM 0 - n BY TAKING n AS AN INPUT FROM THE USER


#include<iostream>
using namespace std;

int main(){

    int n, i=1;

    cout<<"Enter the value of n:\n";
    cin>>n;

    while(i<=n){
        cout<<i<<endl;
        i++;
    }



    return 0;
}