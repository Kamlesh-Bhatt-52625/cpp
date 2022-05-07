//  A PROGRAM TO SHOW HOW TO USE STATIC DATA MEMBERS AND HOW DO THE WORK

#include<iostream>
using namespace std;

class Test
{
public:
    int a;
    static int count;   //  We have to define the static variable outside the class as well
    Test()
    {
        a=10;
        count++;
    }
    static int getcount()
    {
        // a++          //  This is an error because static functions can only use static
                        //  data members.
        return count;
    }
};

int Test::count=0;      // by using Test:: we can make sure that the varible will only work for Test
                        // class because it is a global variable we use Test:: so it can only be 
                        // accessed by the Test class.

int main()
{
    Test t1, t2;                
    
    //  static members and functions can be called upon a class as well as an object.
    cout<<Test::count<<endl;    //  They both will have different variable a but same the static variable 
                                //  count will be only one and will be shared by both t1 and t2;
                                //  We can aslo access static members like this using Test::
    cout<<t1.count<<endl;       //  Because t1 and t2 both are sahring count so the value of count will be
    cout<<t2.count<<endl;       //  same for both of them
    t1.count=12;                //  if I assign the value of count for t1 as 12 so the value of count for t2
    cout<<t2.count<<endl;       //  will becomes 12 as well because t1 and t2 are sharing the static variable
                                //  count.

    //  So without using all these cout lines we can only use cout<<Test::getcount()<<endl; and it will print
    //  the value inside the static variable count.
    cout<<Test::getcount()<<endl;
    return 0;
}