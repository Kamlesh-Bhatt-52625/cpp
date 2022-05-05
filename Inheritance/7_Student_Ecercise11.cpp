//  WRITE A CLASS FOR EMPLOYEE
//  DERIVED CLASSES
//  1. FULL TIME EMPLOYEE WITH SALARY 
//  2. PART TIME EMPLOYEE WITH DAILY WAGES
//  WRITE REQUIRED METHODS

#include<iostream>
using namespace std;

class Employee
{
private:
    int eid;
    string name;
public:
    Employee(int a, string n)
    {
        eid=a;
        name=n;
    }
    int getEid()
    {
        return eid;
    }
    string getName()
    {
        return name;
    }

};
class FulltimeEmployee:public Employee
{
private:
    int salary;
public:
    FulltimeEmployee(int id, string name, int s):Employee(id,name)
    {
        salary=s;
    }
    int getSalary()
    {
        return salary;
    }
};

class ParttimeEmployee:public Employee
{
private:
    int dailywage;
public: 
    ParttimeEmployee(int id, string name, int wage):Employee(id,name)
    {
        dailywage=wage;
    }
    int getdailywage()
    {
        return dailywage;
    }
};

int main()
{
    FulltimeEmployee f1(234,"Kamlesh Bhatt",150000);
    ParttimeEmployee p1(123,"Kamlesh Bhatt",5000);
    cout<<"Employee id: "<<f1.getEid()<<endl;
    cout<<"Employee name: "<<f1.getName()<<endl;
    cout<<"Employee month salary: "<<f1.getSalary()<<endl<<endl<<endl;
    cout<<"Employee id: "<<p1.getEid()<<endl;
    cout<<"Employee name: "<<p1.getName()<<endl;
    cout<<"Employee daily wage: "<<p1.getdailywage()<<endl;
    return 0;
}