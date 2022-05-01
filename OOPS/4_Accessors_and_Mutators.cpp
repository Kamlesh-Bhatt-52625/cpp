//  A PROGRAM TO SHOW THE WORK OF ACCESSORS AND MUTATORS

#include<iostream>
using namespace std;

class Rectangle 
{
private: 
    int lenght;
    int breadth;
public:
    void setLenght(int l){          //
        if(l>0)                     //
        lenght=l;                   //
        else {                      //
        cout<<"----Lenght cannot be a negative value!----"<<endl;
        lenght=1;                   //
        }
    }                               //  -->  These functions who changes the value of 
    void setBreadth(int b){         //       lenght and breadth are called Mutators
        if(b>0)                     //
        breadth=b;                  //
        else{                       //
        cout<<"----Breadth cannot be a negative value!----"<<endl;
        breadth=1;                  //
    }                               //
    }

    int getLenght(){                //
        return lenght;              //
    }                               //  -->  These functions who shows the value of 
    int getBreadth(){               //       lenght and breadth are called Accessors
        return breadth;             //
    }                               //
    int area(){
        return lenght*breadth;
    }
    int perimeter(){
        return 2*(lenght + breadth);
    }


};

int main(){

    Rectangle r1;
    int lenght, breadth;

    cout<<"Enter the lenght of the Rectangle: ";
    cin>>lenght;
    cout<<"Enter the breadth of the Rectangle: ";
    cin>>breadth;
    r1.setLenght(lenght);
    r1.setBreadth(breadth);
    cout<<endl<<"The lenght of this Rectangle is: "<<r1.getLenght()<<endl;
    cout<<"The breadth of this Rectangle is: "<<r1.getBreadth()<<endl;
    cout<<endl<<"The area of this Rectangle is: "<<r1.area()<<endl;
    cout<<"Teh perimeter of this Rectangle is: "<<r1.perimeter()<<endl;
    
    return 0;
}