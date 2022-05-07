#include<iostream>
using namespace std;

int main()
{
    int x=10, y=0, z;
    try 
    {
        if(y==0)
        {
            throw 1;    //  IN CASE OF THIS CONDITION THE BLOCK WILL GO TO THE CATCH BLOCK
        }
        z=x/y;          //  THIS WILL ONLY RUN IF THE IF BLOCK IS NOT TRUE
        cout<<z<<endl;
    }
    catch(int e)        //  THE VALUE OF throw WILL GO TO THE VARIABLE e
    {
        cout<<"Division by zero "<<e<<endl;
    }
    cout<<"Bye!"<<endl;
    return 0;
}