//  A PROGRAM TO FIND THE DISCOUNT IN THE TOTAL AMOUNT

//  THE FORMULA FOR DISCOUNT IS 
//  = discounted_price = original_price - (original_price * discount / 100)

#include<iostream>
using namespace std;

typedef float amount;
int main(){

    amount price, discount;
    cout<<"There is a discount over the total purchase of 1000\n"<<endl;
    cout<<"Enter the original amount of your purchases:\n";
    cin>>price;
    if(price<=999){
        cout<<"There is no discount below 1000!"<<endl;
    }
    else if(price>=1000 && price<=2000){
        discount=(price - (price * 5 / 100));
        cout<<"The discount of '5%' after the purchase of "<<price<<" is "<<price-discount<<endl;
        cout<<"The total price to be paid is "<<discount;
    }
    else if(price>2000 && price<=4000){
        discount=(price - (price * 10 / 100));
        cout<<"The discount of '10%' after the purchase of "<<price<<" is "<<price-discount<<endl;
        cout<<"The total price to be paid is "<<discount;
    }
    else{
        discount=(price - (price * 20 / 100));
        cout<<"The discount of '20%' after the purchase of "<<price<<" is "<<price-discount<<endl;
        cout<<"The total price to be paid is "<<discount;

    }


    return 0;
}