//  A PROGRAM TO FIND THAT THE NUMBER ENTERED BY THE USER IS AN AMSTORNG NO. OR NOT

#include<iostream>
using namespace std;

int main(){

    int n, r, sum=0, cube, N;

    cout<<"Enter the number: ";
    cin>>n;
    N=n;

    while(n>0){
        r=n%10;
        n=n/10;
        cube = r*r*r;
        sum+=cube;
    }
    if(sum==N){
        cout<<N<<" is an Amstrong Number!"<<endl;
    }
    else cout<<N<<" is not an Amstrong Number!"<<endl;

    return 0;
}