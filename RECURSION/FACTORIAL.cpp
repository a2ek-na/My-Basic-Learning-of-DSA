#include<iostream>
using namespace std ;
int  factorial(int num1)
{
    if(num1==1)
        return 1;
    else
        return num1*factorial(num1-1);
}
int main()
{
    int num;
    cout<<"ENTER THE NUMBER : "<<endl;
    cin>>num;
    // num=5;
    cout<<num<<"! = "<<factorial (num); 
    return 0;
}