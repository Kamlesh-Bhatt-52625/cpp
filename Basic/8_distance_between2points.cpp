//  A PROGRAM TO FIND DISTANCE BETWEEN TWO POINTS

//  THE FORMULA FOR DISTANCE BETWEEN TWO POINTS IS 

//  DISTANCE = √((x_2-x_1)²+(y_2-y_1)²)

//  WHERE X1 AND Y1 IS FOR POWINT ONE  AND  X2 AND Y2 IS FOR POINT 2


#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int x1, y1, x2, y2;  //  x1 and y1 is for point 1  and  x2 and y2 is for point 2
    float distance;

    cout<<"Enter the value of first point ( x1, y1 ):\n";
    cin>>x1>>y1;
    cout<<"Enter the value of second point ( x2, y2 ):\n";
    cin>>x2>>y2;
    distance = sqrt((x2-x1) * (x2-x1) + (y2-y1) * (y2-y1));

    cout<<"The distance between ("<<x1<<", "<<y1<<") and ("<<x2<<", "<<y2<<") is "<<distance<<endl;


    return 0;
}