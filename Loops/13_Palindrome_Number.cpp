//  A PROGRAM TO CHECK WHETHER THE GIVEN NUMBER IS A PALINDROME OR NOT

#include<iostream>
using namespace std;

int main(){

    int n, r, rev=0;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    int N=n;

    while(n>0){
        r=n%10;
        n=n/10;
        rev = rev*10+r;//  --> This will store the reversed value and then print it all at once 
    }
    if(N==rev){
        cout<<N<<" is a palindrome!"<<endl;
    }
    else cout<<N<<" is not a palindrome!"<<endl;

    return 0;
}