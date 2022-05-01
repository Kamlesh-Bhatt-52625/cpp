//  A PROGRAM TO SHOW THE WORK OF CONSTRUCTOR

#include<iostream>
using namespace std;

class Rectangle 
{
private: 
    int lenght;
    int breadth;
public:

    // Rectangle(){
    //     lenght=1;            --> instead of this we can use the
    //     breadth=1;               constructor below by this we can 
    // }                            avoid writing overloaded constructors

    Rectangle(int l=1, int b=1){
        setLenght(l);
        setBreadth(b);
    }

    Rectangle(Rectangle &r){
        lenght=r.lenght;
        breadth=r.breadth;
    }

    void setLenght(int l){          
        if(l>0)                     
        lenght=l;                   
        else {                      
        cout<<"----Lenght cannot be a negative value!----"<<endl;
        lenght=1;                   
        }
    }                                
    void setBreadth(int b){         
        if(b>0)                     
        breadth=b;                  
        else{                       
        cout<<"----Breadth cannot be a negative value!----"<<endl;
        breadth=1;                  
    }                               
    }

    int getLenght(){                
        return lenght;              
    }                                
    int getBreadth(){               
        return breadth;             
    }                               
    int area(){
        return lenght*breadth;
    }
    int perimeter(){
        return 2*(lenght + breadth);
    }


};

int main(){
    int lenght , breadth;
    cout<<"Enter the lenght of Rectangle: ";
    cin>>lenght;
    cout<<"Enter the breadth of Rectangle: ";
    cin>>breadth;
    Rectangle r1(lenght,breadth);
    Rectangle r2(r1);
    cout<<"The area of this Rectangle is: "<<r1.area()<<endl;
    cout<<"The perimeter of this Rectangle is: "<<r1.perimeter()<<endl;
    return 0;
}