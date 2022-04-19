//  A PROGRAM TO FIND ROOTS OF QUADRATIC EQUCATION

#include<iostream>
#include<math.h>
using namespace std;

int main(){

    float a, b, c, root1, root2, d;

    cout<<"Enter a , b and c:\n";
    cin>>a>>b>>c;

    d= b*b - 4*a*c;
    root1= (-b+sqrt(d))/(2*a); 
    root2= (-b-sqrt(d))/(2*a); 

    if(d==0){
        cout<<"Real and Equal!"<<endl;
        cout<<(-b/(2*a));
    }
    else if(d>0){
        cout<<"Real and Unequal!"<<endl;
        cout<<"The value of root 1 is: "<<root1<<endl;
        cout<<"The value of root 2 is: "<<root2<<endl;
    }
    else{
        cout<<"The roots are imaginary!"<<endl;
    }

    return 0;
}