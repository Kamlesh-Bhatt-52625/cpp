//  WRITE A PROGRAM TO CALCULATE NET SALARY 

//  PROGRAM SHOULD TAKE FOLLOWING AS INPUT
//  1. BASIC SALARY
//  2. PERCENTAGE OF ALLOWANCES
//  3. PERCENTAGE OF DEDUCTIONS

//  FORMULA FOR NET SALARY IS

//  NetSalary = Basic Salary + Basic Salary * Percentage of Allowances - Basic Salary * Percentage of Deductions

#include<iostream>
using namespace std;

int main(){

    float Net_Salary, Basic_Salary, Percentage_of_Allowances, Percentage_of_Deduction;

    cout<<"Enter Basic Salary:\n";
    cin>>Basic_Salary;
    cout<<"Enter Percentage of Allowances:\n";
    cin>>Percentage_of_Allowances;
    cout<<"Enter Percentage of Deduction:\n";
    cin>>Percentage_of_Deduction;

    Net_Salary = Basic_Salary + Basic_Salary * Percentage_of_Allowances/100 - Basic_Salary * Percentage_of_Deduction/100;

    cout<<"Net salary is: "<<Net_Salary<<endl;

    return 0;
}