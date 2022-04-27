//  A PROGRAM TO ADD ALL THE ELEMENTS IN AN ARRAY

#include<iostream>
using namespace std;

int main(){
    int A[7] = {2,4,5,6,3,5,9};
    int sum=0;
    for(int i=0; i<7; i++)
    {
        sum=sum+A[i];
    }
    cout<<"The sum is: "<<sum<<endl;
    return 0;
}