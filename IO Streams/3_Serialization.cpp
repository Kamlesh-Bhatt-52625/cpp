//  A PROGRAM TO SHOW HOW DO WE SERIALIZE BY OVERRIDING << OPERATOR

#include<iostream>
#include<fstream>
using namespace std;
class Student
{
public:
    string name, branch;
    int rollNo;
    friend ofstream & operator<<(ofstream &ofs, Student &s);
};
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
    s1.name="Kamlesh"; s1.rollNo=21; s1.branch="IT";
    ofstream ofs("Student.txt");
    // ofs<<s1.name<<endl;     //
    // ofs<<s1.rollNo<<endl;   //  --> Instead of using it like this we can overload << operator and store
    // ofs<<s1.branch<<endl;   //      all of it by using ofs<<s1 only.
    ofs<<s1; // This will store all of it because of overloading << operator   
    ofs.close();
    return 0;
}