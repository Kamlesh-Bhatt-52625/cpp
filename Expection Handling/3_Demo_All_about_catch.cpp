//  A PROGRAM TO SHOW THE WORK OF CATCH BLOCK 

#include<iostream>
using namespace std;

int division(int a, int b)
{
    if(b==0)
        throw string("hi");     //  IT WILL GO STRAIGHT TO THE STRING CATCH
    return a/b;
}

int main()
{
    int x=10, y=0, z;
    try 
    {
        z=division(x,y);
        cout<<z<<endl;
    }
    catch(int e)        //  THE VALUE OF throw WILL GO TO THE VARIABLE e
    {
        cout<<"Int catch"<<endl;
    }
    catch(double e)     //   THIS WILL CATCH DOUBLE TYPE OF CATCH
    {
        cout<<"Double catch"<<endl;
    }
    catch(char e)       //   THIS WILL CATCH CHAR TYPE OF CATCH
    {
        cout<<"Char catch"<<endl;
    }
    catch(string e)     //   THIS WILL CATCH STRING TYPE OF CATCH
    {
        cout<<"String catch"<<endl;
    }
    catch(...)      //  This catch block can handle all the types of throw and it is called all catch or eclipse
    {
        cout<<"All catch"<<endl;
    }
    cout<<"Bye!"<<endl;
    return 0;
}