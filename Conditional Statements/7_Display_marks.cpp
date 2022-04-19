//  A PROGRAM TO DISPLAY THE GRADES OF STUDENTS

//  TAKE 3 SUBJECTS AS AN INPUT

//  IF AVG>=60 THAN GRADE A, AVG<60 && ANG>=35 GRADE B ANG IF AVG<35 GRADE C

#include<iostream>
using namespace std;

typedef float marks;

int main(){

    marks m1, m2, m3, total, avg;

    cout<<"Enter the marks of all 3 subjects:\n";
    cin>>m1>>m2>>m3;

    total = m1+m2+m3;
    avg = total/3;

    if(avg>=60){
        cout<<"Grade 'A'"<<endl;
    }
    else if(avg<60 && avg>=35){
        cout<<"Grade 'B'"<<endl;
    }
    else if(avg<35){
        cout<<"Grade 'C'"<<endl;
    }
    else{
        cout<<"Enter correct marks!"<<endl;
    }

    return 0;
}