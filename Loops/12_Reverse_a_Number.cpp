//  A PROGRAM TO PRINT THE REVERSE OF A GIVEN NUMBER

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
        cout<<r; // --> This will print the value of r one by one and will reverse the number
        rev = rev*10+r;//  --> This will store the reversed value and then print it all at once 
    }
    cout<<endl<<"The reverse of "<<N<<" is: "<<rev<<endl;// --> This will print the stored value in rev

    return 0;
}