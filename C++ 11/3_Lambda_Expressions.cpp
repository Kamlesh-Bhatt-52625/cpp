// A program to show the work of lambda expression

// It is useful for defining unnamed function

//  Syntax -->:  [capture_list](parameter_list)->return_type{body};

#include<iostream>
using namespace std;

template<typename T>
void fun(T p)
{
    p();
}

int main()
{
    [](){cout<<"Hello"<<endl;}();   //  it will print hello on the output screen because we are decalaring
                                    //  and calling a function in one line
    [](int a, int b){cout<<"Sum is: "<<a+b<<endl;}(10,5);   // This will show the sum of a and b
    cout<<[](int a, int b){return a+b;}(2,5);   // This will return an integer type value and show it to the
                                                // output screen
    int z=[](int a, int b){return a+b;}(7,8);   // This will return the sum of a and b in z
    cout<<endl<<z<<endl;
    int y=[](int a, int b)-> int {return a+b;}(7,8);    // decelaring the return type of above line

    // int A=10;
    // auto f=[A](){cout<<A<<endl;};   // This is how we can access the value of A and the f will become a function
    // f();        // We can show the value of A bt calling f as a function
    // A++;        // We can not modify the value of A without capturing it by refrence
    // f();

    int A=10;
    auto f=[&A](){cout<<A<<endl;};
    f();
    A++;    //  Now it will be increased because we have captured A by refrence(&)
    f();

    int B=11, C=12;
    auto F=[&](){cout<<B+C<<endl;}; // By capturing only refrence we can modify all the values
    F();    // It will print 23
    B++;    // B will become 12
    C++;    // C will become 13
    F();    // It will print 25

    // lambda expressions can also be sent to a function and can be used as a parameter 
    auto G=[&A](){cout<<A++<<endl;};
    fun (G);        // These two lines will do the same work as above lambda expression but it will do
    fun (G);        // it through a function
    return 0;
}