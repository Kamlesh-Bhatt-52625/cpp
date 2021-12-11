//  A PROGRAM TO FIND VOLUME OF A CYLINDER

//  THE FORMULA TO FIND VOLUME OF A CYLINDER IS 
 
//  V=πr2h  //  WHERE V IS FOR VOLUME, r IS FOR RADIUS , h IS FOR HEIGHT

//  AND THE VALUE OF π IS 3.14

#include<iostream>
using namespace std;

int main(){

    int r, h;  //  r is for radius and h is for height
    float volume;

    cout<<"Enter the radius(r):\n";
    cin>>r;
    cout<<"Enter the height(h):\n";
    cin>>h;

    volume = (float) 3.14 * r * r *h;

    cout<<"The volume of this cylinder is : "<<volume<<endl;

    return 0;
}