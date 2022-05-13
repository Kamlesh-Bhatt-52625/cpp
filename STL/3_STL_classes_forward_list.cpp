// A program to show how the forward_list works

#include<iostream>
#include<forward_list>
using namespace std;

int main()
{
    forward_list<int> v={2,4,6,8,10};
    v.push_front(20);    //  These two lines will add 20 and 30 at the starting 
    v.push_front(30);    //  of forward_list type v
    v.pop_front();       //  This will delete the first value of a forward_list

    forward_list<int>::iterator itr;      //  Iterator is an inbuilt class available to show the content of a STL

    cout<<"Showing the value of v Using Iterator!"<<endl;
    for(itr=v.begin();itr!=v.end();itr++)
    {
        cout<<++*itr<<endl;        // We have to make itr as a pointer to show the values of a STL
    }                              // If we increase the value of itr by doing ++ then the original value 
                                   // inside the STL will be changed too 
    cout<<"Showing the value of v Using for each loop!"<<endl;
    for(int x:v)
        cout<<x<<endl;
    return 0;
}