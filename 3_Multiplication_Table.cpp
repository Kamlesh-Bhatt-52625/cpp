//  A PROGRAM TO WRITE MULTIPLICATION TABLE OF A GIVEN NUMBER 

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number you want table of:\n";
    cin>>n;

    cout<<"Multiplication Table of: "<<n<<endl;
    int i=1;
    for(; i<=10;){
        cout<<n<<" X "<<i<<" = "<<n*i<<endl;
         i++;
    }

    return 0;
}