//  ANOTHER PROGRAM TO PRINT AN ANOTHER PATTERN

#include<iostream>
using namespace std;

int main(){
    for(int i=0; i<=3; i++){
        for(int j=0; j<=3; j++){
            if(i+j>2){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}