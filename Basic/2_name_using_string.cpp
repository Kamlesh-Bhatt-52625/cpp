#include<iostream>
using namespace std;

int main(){

    string name;
    cout<< "Enter your name:";
    // cin>>name;  -->  This will only take first word of the name or a sentence;
    getline(cin,name);  //  This will take more than one word or a full sentence 
                        //  until you dont hit the enter button
    cout<<"Welcome Mr. / Mrs. "<<name;

    return 0;
}