#include<iostream>
using namespace std ;
int sumof(int a)
{
    if(a/10==0) return a%10;
    return sumof(a/10)+ (a%10);
}
int main()
{
    int num;
    cout<<"ENTER THE NUMBER : \n";
    cin>>num;
    
    cout<<"SUM OF DIGITS --> "<<sumof(num);
    return 0;
}