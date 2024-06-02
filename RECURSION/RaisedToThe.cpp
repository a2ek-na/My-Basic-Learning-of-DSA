#include<iostream>
using namespace std;
int raised (int ba,int po)
{
    if(po==1)
    return ba;

    return ba*raised(ba,po-1);
}
int main()
{
    int base=2,power=20;
    cout<<"ENTER BASE :\n";
    cin>>base;
    cout<<"ENTER POWER :\n";
    cin>>power;
    
    cout<<"\n"<<base<<" RAISED TO "<<power<<" --> "<<raised(base,power);
    return 0;
}
