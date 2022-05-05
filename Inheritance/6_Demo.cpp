//  A DEMO OF WAYS OF INHERITANCE

#include<iostream>
using namespace std;

class parent
{
    private: int a;
    protected: int b;
    public: int c;
    void funParent()
    {
        a=10;
        b=5;
        c=1;
    }
};

// class child:public parent    //  --> When we inherit from another class publicily
                                //      we can access protected and public members of 
                                //      that class

//class child:protected parent  //      By making it a protected class we can access 
                                //      averything inside the child calss but public 
                                //      members of parent class will also become protected
                                //      and will not be accessable inside the main function 

                                //      By inheriting parent class privately all the members of 
                                //      parent class whether it is private, protected or public
                                //      all will become private and will be accessable inside 
                                //      only child function but will not be accessable inside 
                                //      any other function that are inheriting from child class
class child:private parent      //      because they will be private members of child class
{
public: 
    void funChild()
    {
        // a=11;                //  --> By inheriting from onther calss we can not 
                                //      we can not access their private members
        b=6;                    //      but we can access their protected and 
        c=2;                    //      public members
    }
};
class Grandchild:public child
{
public:
    void funGrandChild()
    {
        // a=12;                //  --> Same as child class this calss will have 
                                //      access to all the members as child class
        //b=7;  //  Because we made 
                //  child class as
                //  protected the 
        //c=3;  //  public members of 
                //  that class will also become protected and will not 
                //  accessable inside the main function
    }
};

int main()
{
    child c;
    // c.a=13;                  // --> Inside the main function We cannot access 
    // c.b=8;                   //     the private or protected members of any 
    //c.c=4;                    //     class we can only access the members of 
                                //     public members 
    // c.c=4; will not be able
    // to access because c of 
    // child class has become
    // a protected membet that
    // will not be accessable 
    // inside the main function 
    return 0;
}