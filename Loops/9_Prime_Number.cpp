//  A PROGRAM TO CHECK WETHER THE GIVEN NUMBER IS A PRIME NUMBER OR NOT

#include<iostream>
using namespace std;

int main(){

    int n, count=0;

    cout<<"Get the factors of any number!"<<endl;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    // cout<<"The factors of "<<n<<" are following ->"<<endl;

    for(int i=1; i<=n; i++){
        if(n%i==0){
           count++; 
        }  
    }
    if(count==2){
        cout<<n<<" is a Prime Number!"<<endl;
    }
    else{
        cout<<n<<" is not a Prime Number!"<<endl;
    }
        


    return 0;
}