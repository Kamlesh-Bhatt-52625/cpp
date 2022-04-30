//  WRITE A PROGRAM FOR LINEAR SEARCH USING FUNCTIONS

#include<iostream>
using namespace std;

int search(int A[], int n, int key){
    for(int i=0; i<n; i++){
        if(key==A[i]){
            return i;
        }
    }
    return 0;
}

int main(){
    
    int index, n, Arr[]={2,4,5,6,7,8,72};
    cout<<"Enter the element to search: "<<endl;
    cin>>n;
    index=search(Arr, 7, n);
    cout<<"Element is found at index: ["<<index<<"]"<<endl;

    return 0;
}