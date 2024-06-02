#include<iostream>
using namespace std;
class shopItem{
    int id;
    float price;
    public:
    void setData(int,float);
    void getData();
};
void shopItem::setData(int iddd,float paisa){
    id=iddd;
    price=paisa;
}
void shopItem::getData(){
    cout<<"\nItem id : "<<id
        <<"\nPrice : "<<price;
}

int main(){
    int size,i,a;
    float b;
    cout<<"Enter total number of  items : ",
        cin>>size;
    shopItem *ptr=new shopItem[size];
    for(i=0;i<size;i++){
        cout<<"Enter id of the item number "<<i+1<<" ",
            cin>>a;
        cout<<"Enter printed price of the item number "<<i+1<<" ",
            cin>>b;
            (ptr+i)->setData(a,b);
    }
    cout<<"\nDisplaying the data ";
        for ( i = 0; i < size; i++){
            cout<<"\nObject "<<i+1
                <<"\n--------------------------------------------";
            (ptr+i)->getData();
        }
        
    return 0;
}