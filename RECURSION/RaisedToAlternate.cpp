#include<iostream>
using namespace std ;
int raised (int ba,int po)
{
    if(po==1)
    return ba;
    if(po%2==0)
    return raised(ba,po/2)*raised(ba,po/2);
    else if(po%2==1)
    return 2*raised(ba,po/2)*raised(ba,po/2);
}
int main()
{
    int base=2,power=20;
    cout<<"ENTER BASE : \n";
    cin>>base;
    cout<<"ENTER POWER : \n";
    cin>>power;

    cout<<"\n"<<base<<" RAISED TO "<<power<<" --> "<<raised(base,power);
    return 0;
}
