//  A PROGRAM TO SHOW THE WORK OF READING A FILE IN IO STREAMS 

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    // ifstream ifs("my.txt");     // Instead of using this we can also use another method
    ifstream ifs;
    ifs.open("my.txt");

                                 // ifstream is an inbuilt class which is used for reading a file
                                // ifs is the object of ifstream class
                                // For accessing the data of my.txt file we should know the 
                                // sequence of data in which it is stored
    if(ifs) cout<<"File is opened"<<endl; //  This will check wheather the file is opened or not
    if(ifs.is_open()) cout<<"File is opened!"<<endl; // We can also use this method for the above line
    string name;
    int age;
    string Branch;
    ifs>>name>>age>>Branch;     // It will take the name age and Brance in these variables because it is 
                                // available in the file my.txt
    ifs.close();

    cout<<"Name "<<name<<"\nAge "<<age<<"\nBranch "<<Branch<<endl;
    
    return 0;
}