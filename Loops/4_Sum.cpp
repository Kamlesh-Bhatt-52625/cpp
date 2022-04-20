//  A PROGRAM TO GET SUM OF FIRST N NATURL NUMBERS USING FOR LOOP

//  TAKING n AS AN INPUT FROM THE USER

#include<iostream>
using namespace std;

int main(){

    int n, sum=0;

    cout<<"Get the sum of first n natural numbers!\nEnter the value of n: "<<endl;
    cin>>n;

    for(int i=1; i<=n; i++){
        sum+=i;
    }
    cout<<"The total sum of first "<<n<<" natural numbers are: "<<sum<<endl;

    return 0;
}

