//  WRITE A CLASS FOR STUDENT WITH
//  1. ROLL NO.
//  2. NAME
//  3. MARKS IN 3 SUBJECTS
//  --> FUNCTIONS FOR 
//  TOTAL MARKS 
//  GRADE
//  AND REQUIRED METHODS

#include<iostream>
using namespace std;

class student
{
    string name;
    float total;
    int rollNo;
    int marks1, marks2, marks3;
public:
    // for taking roll no.
    void rollno(int roll);

    // for taking name
    void Name(string NAME);

    // for taking numbers of 3 subjects and total and grade
    char marks(int m, int p, int c);

    // Accessor for getting roll no. and name and total marks
    int getrollno();
    string getname();
    float getTotal();
};

int main(){

    student one;
    int rollno;
    string name;
    int m,p,c;
    cout<<"Enter your name: "<<endl;
    getline(cin,name);
    cout<<"Enter your rollno.: "<<endl;
    cin>>rollno;
    cout<<"Enter marks of 3 subjects: "<<endl;
    cin>>m>>p>>c;
    one.rollno(rollno);
    one.Name(name);
    
    cout<<"Name - "<<one.getname()<<endl;
    cout<<"Roll no. - "<<one.getrollno()<<endl;
    cout<<"Grade - "<<one.marks(m,p,c)<<endl;
    cout<<"Total obtained marks - "<<one.getTotal()<<endl;


    
    return 0;
}

void student::rollno(int roll)
{
    rollNo=roll;
}

void student::Name(string NAME)
{
    name=NAME;
}

char student::marks(int m, int p, int c)
{
    if(m<0 || m>100 )
    {
        marks1=1;
        cout<<"The marks of any subject can not be negative or more than 100!"<<endl;
    }
    else
    {
        marks1=m;
    }
    if(p<0 || p>100)
    {
        marks2=1;
        cout<<"The marks of any subject can not be negative or more than 100!"<<endl;
    }
    else
    {
        marks2=p;
    }
    if(c<0 || c>100)
    {
        marks3=1;
        cout<<"The marks of any subject can not be negative or more than 100!"<<endl;
    }
    else
    {
        marks3=c;
    }
    
    total = marks1+marks2+marks3;
    char grade;
    if(total/3<40)
    {
        grade='C';
    }
    else if (total/3>=40 && total/3<=60)
    {
        grade='B';
    }
    else
    {
        grade='A';
    }
    return grade;
    
}

string student::getname()
{
    return name;
}

int student::getrollno()
{
    return rollNo;
}
float student::getTotal()
{
    return total;
}