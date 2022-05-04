//  WRITE A CLASS FOR RATIONAL NUMBER (p/q) 
//  WITH OVERLOADING + AND << OPERATOR

#include<iostream>
using namespace std;

class Rational
{
private:
    int p;
    int q;
public:
    Rational(int p=1, int q=1)
    {
        this->p=p;
        this->q=q;
    }
    Rational(Rational &r)
    {
        this->p=r.p;
        this->q=r.q;
    }
    int getP(){return p;}
    int getQ(){return q;}
    void setP(int p)
    {
        this->p=p;
    }
    void setQ(int q)
    {
        this->q=q; 
    }
    Rational operator+(Rational a1)
    {
        Rational temp;
        temp.p=this->p*a1.q+this->q*a1.p;
        temp.q=this->q*a1.q; 
        return temp;
    }
    friend istream& operator>>(istream &In, Rational &b);
    friend ostream& operator<<(ostream &O, Rational &a);
};

istream& operator>>(istream &In, Rational &b)
{
    In>>b.p>>b.q;
    return In;
}

ostream& operator<<(ostream &O, Rational &a)
{
    O<<a.p<<"/"<<a.q;
    return O;
}

int main(){
    
    Rational p,q,pq;
    cout<<"Enter the value of First Rational number(p/q): ";
    cin>>p;
    cout<<"Enter the value of second Rational number(p/q): ";
    cin>>q;

    pq=p+q;
    cout<<"The addition of "<<p<<" and "<<q<<" is: "<<pq<<endl;
    return 0;
}