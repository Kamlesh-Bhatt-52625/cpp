//  A PROGRAM TO SHOW THE WORK OF STATIC VARIABLES

#include<iostream>
using namespace std;

// int v=0;  --> instead of a global variable we can make a static variable that
//               works same as a global variable but can only be used by the 
//               function it has been declared in. 

void fun(){
    static int v=0;  // --> declaring static variable 
                     // --> it stays in memory througout the whole program 
    int a = 10;
    v++;
    cout<<a<<" "<<v<<endl;
}

int main(){
    fun();
    fun();
    fun();
    return 0;
}