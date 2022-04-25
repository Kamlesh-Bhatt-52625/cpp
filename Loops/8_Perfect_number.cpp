//  A PROGRAM TO CHECK WETHER THE GIVEN NUMBER IS A PERFECT NUMBER OR NOT

//  Taking number as an input from the user

#include<iostream>
using namespace std;

int main(){

    int n, sum=0;

    cout<<"Get the factors of any number!"<<endl;
    cout<<"Enter the number: "<<endl;
    cin>>n;

    for(int i=1; i<=n; i++){
        if(n%i==0){
            sum+=i;
        }  
    }
    if(n*2==sum){
        cout<<"The number "<<n<<" is a Perfect number"<<endl;
    }
    else{
        cout<<"The number "<<n<<" is a Not a Perfect number"<<endl;

    }
    
    return 0;
}