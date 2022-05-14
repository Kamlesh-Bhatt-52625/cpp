//  WRITE A PROGRAM TO STORE AND RETRIEVE LIST OF ITEM IN A FILE
//  USING VECTOR CLASS

//  CLASS ITEMS SHOULD HAVE
//  1.NAME
//  2.PRICE
//  3.QUANTITY

#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
class Item
{
private: 
    string name;
    float price;
    float quantity;
public:
    Item(){}
    Item(string name, float price, float quantity);
    friend ifstream & operator>>(ifstream &ifs, Item &I);
    friend ofstream & operator<<(ofstream &ofs, Item &I);
    friend ostream & operator<<(ostream &out, Item &I);
};
Item::Item(string name, float price, float quantity)
{
    this->name=name;
    this->price=price;
    this->quantity=quantity;
}
ifstream & operator>>(ifstream &ifs, Item &I)
{
    ifs>>I.name>>I.price>>I.quantity;
    return ifs;
}
ofstream & operator<<(ofstream &ofs, Item &I)
{
    ofs<<I.name<<endl;
    ofs<<I.price<<endl;
    ofs<<I.quantity<<endl;
    return ofs;
}
ostream & operator<<(ostream &out, Item &I)
{
    out<<"Name: "<<I.name<<endl<<"Price: "<<I.price<<endl<<"Quantity: "<<I.quantity<<endl;
    return out;
}


int main()
{
    int n;
    cout<<"Enter the numbers of item: ";
    cin>>n;
    string name;
    float price;
    float quantity;
    vector<Item *> list;
    cout<<"Enter all items!"<<endl;
    for(int i=1; i<=n; i++)
    {
        cout<<"Enter Item "<<i<<" Name: "<<endl;
        cin>>name;
        cout<<"Enter Item "<<i<<" Price: "<<endl;
        cin>>price;
        cout<<"Enter Item "<<i<<" Quantity: "<<endl;
        cin>>quantity;
        list.push_back(new Item(name,price,quantity));
    }
        ofstream fos("Items.txt");
        vector<Item *> :: iterator itr;
        for(itr=list.begin(); itr!=list.end(); itr++)
        {
            fos<<**itr;
        }
        Item item;
        ifstream ifs("Items.txt");
        for(int i=1; i<=n; i++)
        {
            ifs>>item;
            cout<<"Item : "<<i<<"\n"<<item<<endl;
        }
        
    
    return 0;
}