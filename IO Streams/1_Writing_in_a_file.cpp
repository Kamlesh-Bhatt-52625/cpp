//  A PROGRAM TO SHOW THE WORK OF WRITING A FILE IN IO STREAMS 

#include<iostream>
#include<fstream>   //  This header file is important for IO streams
using namespace std;

int main()
{
    ofstream fos("my.txt",ios::trunc);      // ofstream is an inbuilt class which is used for writing in a file
                                            // fos is an object of ofstream class
                                            // my.txt file will be created if it is already not created
                                            // ios::trunc means truncate it will clear everything inside 
                                            // my.txt file then start it from the starting if we don't 
                                            // write ios::trunc then the compiler takes it by default 
                                            // for keeping the data of my.txt file and then write on it 
                                            // instead of ios::trunc we use ios::app which means append.
    fos<<"Kamlesh"<<endl;
    fos<<21<<endl;
    fos<<"IT"<<endl;                          // These three lines will be added to my.txt file 
    fos.close();
    return 0;
}