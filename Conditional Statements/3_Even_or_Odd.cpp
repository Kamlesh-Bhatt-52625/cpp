//  A PROGRAM TO CHECK IF THE NUMBER IS EVEN OR ODD

#include<iostream>
using namespace std;

int main(){

    int num;

    cout<<"Enter the number to check if its Even or Odd:\n";
    cin>>num;

    if(num%2==0){
        cout<<"The number "<<num<<" is an Even number!"<<endl;
    }
    else{
        cout<<"The number "<<num<<" is an Odd number!"<<endl;
    }

    return 0;
}