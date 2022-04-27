//  A PROGRAM TO SHOW THE BINARY SEARCH 

#include<iostream>
using namespace std;

int main(){
    int A[10]= {2,4,6,8,10,12,14,16,18,20};
    int low=0, high=9, mid=0, key;

    cout<<"Enter the key: "<<endl;
    cin>>key;

    while(low<=high){
        mid=(low+high)/2;
        if(key==A[mid]){
            cout<<"Key found at: ["<<mid<<"]"<<endl;
            return 0;
        }
        else if(key<A[mid]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    cout<<"Not found!"<<endl;
    return 0;
}   