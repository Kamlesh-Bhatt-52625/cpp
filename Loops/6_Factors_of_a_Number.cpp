//  A PROGRAM TO FIND THE FACTORS OF A GIVEN NUMBER n

//  TAKE n AS AN INPUT FROM THE USER

#include<iostream>
using namespace std;

int main(){

    int n;

    cout<<"Get the factors of any number!"<<endl;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    cout<<"The factors of "<<n<<" are following ->"<<endl;

    for(int i=1; i<=n; i++){
        if(n%i==0){
            cout<<i<<", ";
        }  
    }
        


    return 0;
}