//  A PROGRAM TO SHOW THE BASIC WORK OF AN INT TYPE ARRAY

#include<iostream>
using namespace std;

int main(){

    int A[5]={2,3,5,6,7};
    for(int x:A)  // --> This is for each loop basically used to access the values of an array
        cout<<x<<", ";
    

    return 0;
}