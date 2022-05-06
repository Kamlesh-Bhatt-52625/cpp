//  A EXAMPLE OF RUNTIME POLYMORPHISM

#include<iostream>
using namespace std;

class car
{
public:
    virtual void start()
    {
        cout<<"Car started!"<<endl;
    }

};
class Innova:public car
{
public:
    void start()
    {
        cout<<"Innova started!"<<endl;
    }
};
class Suzuki:public car
{
public:
    void start()
    {
        cout<<"Suzuki started!"<<endl;
    }
};

int main()
{
    car *c=new Innova();
    c->start();
    c=new Suzuki();
    c->start();
    return 0;
}