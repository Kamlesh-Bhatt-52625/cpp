//  A PROGRAM TO SHOW WHY WE USE try throw and catch INSTEAD OF IF ELSE

#include<iostream>
using namespace std;

int division(int a, int b)
{
    if(b==0)
        throw 1;
    return a/b;
}

int main()
{
    int x=10, y=2, z;
    try 
    {
        z=division(x,y);
        cout<<z<<endl;
    }
    catch(int e)        //  THE VALUE OF throw WILL GO TO THE VARIABLE e
    {
        cout<<"Division by zero "<<e<<endl;
    }
    cout<<"Bye!"<<endl;
    return 0;
}