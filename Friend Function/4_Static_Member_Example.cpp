//  AN ANOTHER EXAMPLE TO SHOW HOW THE STATIC MEMBERS WORKS

#include<iostream>
using namespace std;

class Student
{
public:
    int roll;
    string name;
    static int addno;
    static int getRoll()
    {
        return addno;
    }
    Student(string n)
    {
        addno++;        //  because addno is a static member so it will be shared by all the other data members
                        //  of Student class so it will increase by 1 for every object that is created of Student
                        //  class. 
        roll=addno;
        name=n;
    }
    void display()
    {
        cout<<"Roll no. : "<<roll<<endl;
        cout<<"Name : "<<name<<endl;
    }
};
int Student::addno=0;   //  it is necessary to use this impliment static members outside the class.


int main()
{
    Student s1("Kamal"),s2("Deepak"),s3("Kamlesh"),s4("John"),s5("Khan"),s6("Kuch bhi");    // For every object
                                                                                            // the number of addno
                                                                                            // will increase one by
                                                                                            // one.
    s1.display();
    s2.display();
    s3.display();
    s5.display();
    cout<<"Total no. of addmissions: "<<Student::getRoll()<<endl;
    
    return 0;
}