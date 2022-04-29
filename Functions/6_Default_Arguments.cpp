//  A PROGRAM TO COMBINE TWO OVERLOADED FUNCTIONS AND MAKING THEM AS DEFAULT ARGUMENTS

#include<iostream>
using namespace std;

// int add(int a, int b){
//     return a+b;
// }                                -->  adding these two functions in one
// int add(int a, int b, int c){         by initialiging the value of last argument
//     return a+b+c;                     as 0;
// }

int add(int a, int b, int c=0){
    return a+b+c;
}

int main(){
    cout<<add(2,3)<<endl;
    cout<<add(2,3,5)<<endl;
    return 0;
}