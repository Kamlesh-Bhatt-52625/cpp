//  A PROGRAM TO FIND m^n USING FUNCTIONS 

#include<iostream>
#include<math.h>
using namespace std;

int MpowerN(int num, int n){
    int result;
    result = pow(num,n);
    return result; 
}

int main(){
    int num, result, n;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Enter the power of %d: ",num);
    scanf("%d",&n);
    result = MpowerN(num, n);
    cout<<num<<"^"<<n<<" is: "<<result<<endl;
    return 0;
}