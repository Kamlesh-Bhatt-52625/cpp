//  A PROGRAM TO SHOW THE WORK OF RECURSIVE FUNCTION

#include<iostream>
using namespace std;

void fun(int n){

    if(n>0){
        fun(n-1);
        cout<<n<<endl;
    }
}

int main(){
    int x=5;
    fun(x);
    
    return 0;
}