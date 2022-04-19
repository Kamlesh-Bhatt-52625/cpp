//  A PROGRAM TO KNOW THAT THE YEAR ENTERED BY THE USER IS A LEAP YEAR OR NOT

#include<iostream>
using namespace std;

int main(){

    int year;

    cout<<"Enter the year to know if its leap year or not:\n";
    cin>>year;

    if(year%4==0 || year%400==0){
        cout<<"The year '"<<year<<"' is a leap year!"<<endl;
    }
    else if(year%100==0){
        cout<<"The year '"<<year<<"' is not a leap year!"<<endl;
    }
    else{
        cout<<"The year '"<<year<<"' is not a leap year!"<<endl;
    }

    return 0;
}