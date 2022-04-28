//  A PROGRAM TO GET THE AVARAGE OF ALL THE ELEMENTS IN AN ARRAY

#include<iostream>
using namespace std;

int main(){
    int A[100], n, sum=0;
    cout<<"Enter the numbers of elements = ";
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<i+1<<". Enter number = ";
        cin>>A[i];
        sum+=A[i];
    }
    cout<<"The avarage is: "<<sum/n;
    return 0;
}