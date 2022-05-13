// A program to show how the set works

#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> v={2,4,6,8,10,10};    // A set only have unique values it will not have the 10 two times
    v.insert(20);    //  These two lines will add 20 and 30 at the end 
    v.insert(30);    //  of set type v
    

    set<int>::iterator itr;      //  Iterator is an inbuilt class available to show the content of a STL

    cout<<"Showing the value of v Using Iterator!"<<endl;
    for(itr=v.begin();itr!=v.end();itr++)
    {
        // cout<<++*itr<<endl;        // We cannot modify the values of a set
        cout<<*itr<<endl;
    } 
    cout<<"Showing the value of v Using for each loop!"<<endl;
    for(int x:v)
        cout<<x<<endl;
    return 0;
}