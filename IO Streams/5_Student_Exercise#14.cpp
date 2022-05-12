// Program to Store Items in a File 

#include<iostream>
#include<fstream>
using namespace std;
class Item
{
private:
    string name;
    float price;
    int qty;
public:
    Item(){}
    Item(string n,float p,int q);
    friend ifstream & operator>>(ifstream &fis,Item &i);
    friend ofstream & operator<<(ofstream &fos,Item &i);
    friend ostream & operator<<(ostream &os,Item &i);
 
};
Item::Item(string n,float p,int q)
{
    name=n;
    price=p;
    qty=q;
}
ifstream & operator>>(ifstream &fis,Item &i)
{
    fis>>i.name>>i.price>>i.qty;
    return fis;
}
ofstream & operator<<(ofstream &fos,Item &i)
{
    fos<<i.name<<endl<<i.price<<endl<<i.qty<<endl;
    return fos;
}
ostream & operator<<(ostream &os,Item &i)
{
    os<<"Name: "<<i.name<<endl<<"Price: "<<i.price<<endl<<"Quantity: "<<i.qty<<endl;
    return os;
}
int main()
{
    int n;
    string name;
    float price;
    int qty;
    cout<<"Enter number of Item: ";
    cin>>n;
    Item *list[n];
    cout<<"Enter All Item "<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<"Enter "<<i<<" Item Name , price and quantity: ";
        cin>>name;
        cin>>price;
        cin>>qty;
        list[i]=new Item(name,price,qty);
    }

ofstream fos("Items.txt");
for(int i=1;i<=n;i++)
    {
    fos<<*list[i];
    }
Item item;
ifstream fis("Items.txt");
    for(int i=0;i<n;i++)
    {
        fis>>item;
        cout<<"Item "<<i+1<<"\n"<<item<<endl;
    }

}