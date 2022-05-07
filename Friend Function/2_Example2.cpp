//  ANOTHER EXAMPLE OF FRIEND FUNCTIONS

#include<iostream>
using namespace std;

class your;             // declaration of class your because c++ gets exexuted line by 
                        // line thats why we have to decalare the class first.
class my
{
private:
    int a=5;
    friend your;        //  By making your (class) is a frined of my (class)
                        //  now we can access the members of my(class) inside
                        //  your(class).
};
class your
{
public:
    my m;
    void fun()
    {
        cout<<m.a<<endl;
    }
};

int main()
{
    your y;
    y.fun();
    return 0;
}