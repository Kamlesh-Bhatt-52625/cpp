// A program to show how the map works

#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,string> m;  // map stores two values a key and a value 
                        // here int is the key and string is the value
    m.insert(pair<int,string>(1,"Kamlesh"));    //  1 is key and Kamlesh is the value
    m.insert(pair<int,string>(2,"Kamal"));      //  2 is key and Kamal is the value
    m.insert(pair<int,string>(3,"Kannu"));      //  3 is key and Kannu is the value

    map<int,string>::iterator itr;
    for(itr=m.begin(); itr!=m.end(); itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;       // Here first will print the key and the second 
                                                        // will print the value
    }
    map<int,string>::iterator itr1;
    itr1=m.find(2);     //  This will find the key value which is having key 2
    cout<<endl<<"Using the m.find() function!"<<endl;
    cout<<itr1->first<<" "<<itr1->second<<endl<<endl<<endl;   // This will print the key value of key 2
    return 0;
}