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

class Student
{
    private:
        float total;
        int rollno;
        string name;
        int chemistryMarks, physicsMarks, mathsMarsk;
    public:
        // void Total(int c, int m, int p);
        // char Grade(int Total);
        void setrollno(int r);
        void setName(string name);
        char setmarks(int c, int m, int p);
        int getrollno();
        float getTotal();
        string getname();       
};

int main(){
    Student r1;
    string name;
    int rollno;
    int m,p,c;
    cout<<"Enter your name: ";
    getline(cin,name);
    r1.setName(name);
    cout<<"Enter your Roll No.: ";
    cin>>rollno;
    r1.setrollno(rollno);
    cout<<"Enter marks of Three subjects: ";
    cin>>m>>p>>c;
    // r1.Total(c,m,p);
    cout<<"Name - "<<r1.getname()<<endl;
    cout<<"Roll No. - "<<r1.getrollno()<<endl;
    
    cout<<"Grade - "<<r1.setmarks(c,m,p)<<endl;
    cout<<"Total numbers - "<<r1.getTotal()<<endl;
    
    
    return 0;
}

// void Student::Total(int c, int m, int p){
//     total=c+m+p;
// }
// char Student::Grade(int Total){
    

// }
void Student::setrollno(int r)
{
    if(r>0)
    {
        rollno=r;
    }
    else
    {
        cout<<"Roll NO. can't be a negative value!"<<endl;
        
    }
}
void Student::setName(string name)
{
    this->name=name;
}
char Student::setmarks(int m, int p, int c)
{
    if(c<0 || c>100 )
    {
        chemistryMarks=1;
        cout<<"The marks of any subject can not be negative or more than 100!"<<endl;
    }
    else
    {
        chemistryMarks=m;
    }
    if(p<0 || p>100)
    {
        physicsMarks=1;
        cout<<"The marks of any subject can not be negative or more than 100!"<<endl;
    }
    else
    {
        physicsMarks=p;
    }
    if(m<0 || m>100)
    {
        mathsMarsk=1;
        cout<<"The marks of any subject can not be negative or more than 100!"<<endl;
    }
    else
    {
        mathsMarsk=c;
    }
    total=chemistryMarks+physicsMarks+mathsMarsk;
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

int Student::getrollno()
{
    return rollno;
}
float Student::getTotal()
{
    return total;
}
string Student::getname()
{
    return name;
}



