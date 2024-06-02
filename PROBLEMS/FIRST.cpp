#include<iostream>
using namespace std ;

int main()
{
    int i=0,num;
    cout<<"ENTER THE NUMBER :"<<endl;
    cin>>num;

    while (num>0)
    {
        i++;
        num=num/10;
    }
    cout<<"NUMBER OF DIGITS ARE :"<<i;
    return 0;
}