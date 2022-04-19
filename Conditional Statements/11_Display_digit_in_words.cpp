//  A SIMPLE PROGRAM TO DISPLAT DIGIT IN WORDS FOR LIMITED DIGITS USING IF ELSE LADDER

#include<iostream>
using namespace std;

int main(){

    int number;
    cout<<"Enter the number(1-10):"<<endl;
    cin>>number;

    if(number==1){
        cout<<"One"<<endl;
    }
    else if(number==2){
        cout<<"Two"<<endl;
    }
    else if(number==3){
        cout<<"Three"<<endl;
    }
    else if(number==4){
        cout<<"Four"<<endl;
    }
    else if(number==5){
        cout<<"Five"<<endl;
    }
    else if(number==6){
        cout<<"Six"<<endl;
    }
    else if(number==7){
        cout<<"Seven"<<endl;
    }
    else if(number==8){
        cout<<"Eight"<<endl;
    }
    else if(number==9){
        cout<<"Nine"<<endl;
    }
    else if(number==10){
        cout<<"Ten"<<endl;
    }
    else {
        cout<<"Invalid Number!"<<endl;
    }

    return 0;
}