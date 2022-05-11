//  AN EXAMPLE TO SHOW HOW DOES NAMESPACE WORK

#include<iostream>
using namespace std;

namespace First
{
    void fun()
    {
        cout<<"First"<<endl;
    }
};

namespace Second
{
    void fun()
    {
        cout<<"Second"<<endl;
    }
};

using namespace First;
int main()
{
    First::fun();       // It will call the function fun() of namespace First
    Second::fun();       // It will call the function fun() of namespace Second
    fun();              //  It will call the function fun() of namespace First because of the line above main
                        //  main function
    return 0;
}