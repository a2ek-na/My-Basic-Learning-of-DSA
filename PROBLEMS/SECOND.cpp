#include<iostream>
using namespace std;
int main()
{
    int num,i,rev=0;
    cout<<"ENTER THE NUMBER :"<<endl;
    cin>>num;

    while(num>0)
    {
        rev=rev*10;
        i=num%10;
        rev=rev+i;
        num=num/10;
    }
    cout<<"THE REVERSED NUMBER IS : "<<rev;
    return 0;
}