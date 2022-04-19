//  A PROGRAM TO DISPLAY THE USE OF SWITCH CASE:

//  DISPLAY THE NAME OF THE DAYS

#include<iostream>
using namespace std;

int main(){

    int day;
    cout<<"Enter the day:"<<endl;
    cin>>day;

    switch(day){
        case 1: 
              cout<<"Monday"<<endl;
              break;
        case 2:
              cout<<"Tuesday"<<endl;
              break;
        case 3:
              cout<<"Wednesday"<<endl;
              break;
        case 4:
              cout<<"Thusday"<<endl;
              break;
        case 5:
              cout<<"Friday"<<endl;
              break;
        case 6:
              cout<<"Saturday"<<endl;
              break;
        case 7:
              cout<<"Sunday"<<endl;
              break;
        default :
              cout<<"Invalid Number!"<<endl;
    }

    return 0;
}