//  A PROGRAM TO CHECK WHETHER THE HOURS ENTERED BY THE USER IS WORKING HOUR OR LEISURE HOUR

//  LET US TAKE HOURS FROM 0 - 23 TOTAL 24 HOURS

#include<iostream>
using namespace std;

int main(){

    int hour;
    cout<<"Enter the hour:\n";
    cin>>hour;

    if(hour>=9 && hour<=18){
        cout<<"Working Hour!"<<endl;
    }
    else{
        cout<<"Leisure Hour!"<<endl;
    }

    return 0;
}