//  ANOTHER DEMO OF VIRTUAL FUNCTIONS

#include<iostream>
using namespace std;

class BasicCar
{
public:
    virtual void Start()
    {
        cout<<"BasicCar Started!"<<endl;
    }
};

class AdvanceCar:public BasicCar
{
public:
    void Start()
    {
        cout<<"AdvanceCar started!"<<endl;
    }

};

int main()
{
    BasicCar *ptr=new AdvanceCar();
    ptr->Start();
    return 0;
}