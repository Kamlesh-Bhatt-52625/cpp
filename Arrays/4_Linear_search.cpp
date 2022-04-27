//  A PROGRAM TO FIND THE LOCATION OF AN INTEGER GIVEN BY THE USER IN AN ARRAY

#include<iostream>
using namespace std;

int main(){

    int A[10], n=10, i;
    cout<<"Enter 10 numbers: "<<endl;
    for(i=0; i<n; i++){
        cin>>A[i];
    }
    cout<<"Enter the Key: "<<endl;
    int key;
    cin>>key;
    for(i=0; i<n; i++){
        if(A[i]==key){
            cout<<"Found the key at: ["<<i<<"] "<<endl;
            return 0;
        }
    }
    cout<<"Key Not found!"<<endl;

    return 0;
}