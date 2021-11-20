//  SUM OF FIRST N NATURAL NUMBERS 

#include<iostream>
using namespace std;

int main(){
    int n, sum;
    cout<<"Enter the value of n:\n";
    cin>>n;
    sum = n* (n+1)/2;
    cout<< "The sum of first "<<n<<" natural numbers is:"<<sum<<endl;
    return 0;
}