//  A PROGRAM TO SHOW WHAT PREPROCESSOR IS 
//  A PREPROCESSOR DOESN'T OCCUPY ANY SPACE IN THE MAIN MEMORY

#include<iostream>

using namespace std;

#define PI 3.1425       //  This will define PI = 3.1425 and it doesn't take any space in the memory
// #define PI 3            //  The value of PI will be changed to 3 so instead of this we can use #ifndef PI #endif
#ifndef PI
    #define PI 3.1425       //  It means if PI is not defined then define it as 3.1425
#endif

#define max(x,y) (x>y?x:y)      //  This is a function which is defined using preprocessor
                                //  This function takes 2 values and gives the output as the biggest 
                                //  of them The () are important othewise it will cause error

#define msg(x) #x               //  It will make the value of x as a string 

int main()
{
    cout<<PI<<endl;     //  Here the PI will be replaced by 3.1425 
                        //  It is same as cout<<3.1425
    cout<<max(10,5)<<endl;   //  It will print 10

    cout<<msg(Hello My name is Kamlesh Bhatt)<<endl;    //  It will take tha message inside msg() as a 
                                                        //  string and it will print it to the output 
                                                        //  screen
    return 0;
}