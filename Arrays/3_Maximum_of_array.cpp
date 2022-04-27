//  A PROGRAM TO FIND THE GRETEST AMONG N NUMBERS 
//  Take n as an input from the user

#include <iostream>

using namespace std;

int main()
{
   int n,num, max=0;
   
    cout<<"Enter the count of total numbers you want to check from(2-20): "<<endl;
    cin>>n;
    int A[20];
    if(n<2  ||  n>20){
        cout<<"Out of Range!"<<endl;
    }
    else{
    
    cout<<"Enter the total "<<n<<" numbers one by one: "<<endl;
    
    for(int i=0; i<n; i++){
        cin>>A[i];
        if(A[i]>max){
            max=A[i];
        }
    
    }
    
    cout<<"Maximum of these "<<n<<" numbes is: "<<max<<endl;
    }

    return 0;
}
