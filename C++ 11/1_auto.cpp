//  A PROGRAM TO SHOW HOW AUTO KEYWORD WORKS

#include<iostream>
using namespace std;
float fun()
{
    return 3.425;
}

int main()
{
    auto x = 2*5.6+'a';     // auto keyword is used for decalaring the datatype by itself
    double y=4;
    decltype(y) z=6;        // This will have the same datatype as y;
    cout<<x<<endl;  
    auto f=fun();           // We can use the auto keyword when we don't know the return type of 
                            // a function 
                
    return 0;
}   