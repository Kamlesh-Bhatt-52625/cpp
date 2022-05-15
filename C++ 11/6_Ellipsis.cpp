// A program for ellipsis

// ellipsis are used for taking variable number of arguments in a function and do operation on them



#include<bits/stdc++.h> // With this library we can use functions of every library available in c++
using namespace std;

int sum(int n,...)
{
    va_list list;
    va_start(list,n);
    int x;
    int sum=0;
    for(int i=1; i<=n; i++)
    {
        x=va_arg(list,int);
        sum+=x;
    }
    return sum;


}

int main()
{
    int Sum;
    Sum = sum(4,2,3,4,5);   // The first argument is the number of variables (n=4) all other variables are ...
        cout<<Sum<<endl;
    return 0;
}