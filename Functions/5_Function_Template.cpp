//  A PROGRAM TO SHOW THE WORK OF FUNCTION TEMPLATE

#include<iostream>
using namespace std;

template<class T>
T add(T a, T b){
    return a+b;
}

int main(){
    cout<<add(2.3f, 3.4f)<<endl;
    cout<<add(2,3)<<endl;
    cout<<add('A','9')<<endl;
    return 0;
}