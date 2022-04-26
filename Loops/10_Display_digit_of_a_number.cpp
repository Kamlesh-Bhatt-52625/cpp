//  A PROGRAM TO GET DIGITS OF A NUMBER OR REVERSE THE NUMBER

#include<iostream>
using namespace std;

int main(){

    int n, r;

    cout<<"Enter the number: ";
    cin>>n;

    while(n>0){
        r=n%10;
        n=n/10;
        cout<<r;
    }

    return 0;
}