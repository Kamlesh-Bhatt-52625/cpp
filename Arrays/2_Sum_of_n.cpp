//   A PROGRAM TO ADD SUM OF N NUMBERS ENTERED BY THE USER

#include<iostream>
using namespace std;

int main(){

    int n, sum=0;
    cout<<"Enter the number of total integers you want to add(2-30): "<<endl;
    cin>>n;
    if(n>30  ||  n<2){

        cout<<"Out of Range!"<<endl;
    }
    else{
    int num[30];
    cout<<"Enter the numbers: "<<endl;
    for(int i=0; i<n; i++){
        cin>>num[i];
        sum+=num[i];
    } 
    cout<<"The total sum is: "<<sum<<endl;
    }

    return 0;
}