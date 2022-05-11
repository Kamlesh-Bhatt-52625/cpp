//  A PROGRAM TO SHOW HOW DO WE SERIALIZE BY OVERRIDING >> OPERATOR

#include<iostream>
#include<fstream>
using namespace std;
class Student
{
public:
    string name, branch;
    int rollNo;
    friend ofstream & operator<<(ofstream &ofs, Student &s);
    friend ifstream & operator>>(ifstream &ifs, Student &s);
};
ifstream & operator>>(ifstream &ifs, Student &s)
{
    ifs>>s.name>>s.rollNo>>s.branch;
    return ifs;
}
ofstream & operator<<(ofstream &ofs, Student &s)
{
    ofs<<s.name<<endl;
    ofs<<s.rollNo<<endl;
    ofs<<s.branch<<endl;
    return ofs;
}

int main()
{
    Student s1;
    ifstream ifs("Student.txt");
    ifs>>s1;
    ifs.close();
    cout<<"Name "<<s1.name<<endl;
    cout<<"Roll no. "<<s1.rollNo<<endl;
    cout<<"Branch "<<s1.branch<<endl;
    return 0;
}