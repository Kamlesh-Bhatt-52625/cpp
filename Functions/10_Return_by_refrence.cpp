//  A PROGRAM TO SHOW THE WORK OF RETURN BY REFRENCE

#include<iostream>
using namespace std;

int &fun(int &a){
    cout<<"The value afte pass by refrence is: "<<a<<endl;
    return a;
}

int main(){
    int x=10;
    fun(x)=25;
    cout<<"The value after return by refrence is: "<<x<<endl;
    return 0;
}