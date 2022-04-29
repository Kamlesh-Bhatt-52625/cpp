//  A PROGRAM TO SHOW THE WORK OF PASS BY ADDRESS

#include<iostream>
using namespace std;

void swap(int *num1, int *num2)
{
    int temp;
    temp = *num1;
    *num1 = *num2;              
    *num2 = temp;
}

int main(){
    int num1=10, num2=20;

    swap(&num1,&num2);
    cout<<num1<<" "<<num2<<endl;
    return 0;
}
