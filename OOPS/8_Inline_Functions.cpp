//  A PROGRAM TO SHOW HOW TO WRITE INLINE FUNCTION

#include<iostream>
using namespace std;

class fun
{
public:
    int fun1()
    {
        cout<<"abcd...."<<endl;     // When we write the body of a function inside the 
                                    // class it is called inline function and the 
                                    // machine code of inline functions are copied 
                                    // at the place where the are called
        return 0;
    }
    inline int fun2();
};


int main(){
    
    return 0;
}
int fun::fun2()
{
    cout<<"abcd...."<<endl;         // when we write the code outside the class then
                                    // the code of that function gets created seprately
                                    // and then its gets called at the place where
                                    // function is called 
                                    //  BUTTT WHENN WE WRITE inline IN FRONT OF THE 
                                    //  FUNCTION ITS BECOMES AN INLINE FUNCTION EVEN
                                    //  AFTER WHEN WE WRITE THE BODY OF THAT FUNCTION
                                    //  OUTSIDE THE CLASS
    return 0;
}