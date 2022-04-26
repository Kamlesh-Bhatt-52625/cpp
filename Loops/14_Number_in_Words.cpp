//  A PROGRAM TO PRINT THE GIVEN NUMBER IN WORDS

#include<iostream>
using namespace std;

int main(){

    int n, r, rev=0, r2;
    cout<<"Zero will not be printed if its at last or at starting of the number!"<<endl;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    int N=n;

    while(n>0){
        r=n%10;
        n=n/10;
        rev = rev*10+r;//  --> This will store the reversed value and then print it all at once 
    }
    while(rev>0){
        r2=rev%10;
        rev=rev/10;
        switch(r2){
            default: cout<<"Zero ";
            break;
            case 1: cout<<"One ";
            break;
            case 2: cout<<"Two ";
            break;
            case 3: cout<<"Three ";
            break;
            case 4: cout<<"Four ";
            break;
            case 5: cout<<"Five ";
            break;
            case 6: cout<<"Six ";
            break;
            case 7: cout<<"Seven ";
            break;
            case 8: cout<<"Eight ";
            break;
            case 9: cout<<"Nine ";
            break;
        }
    }

    return 0;
}