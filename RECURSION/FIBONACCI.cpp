#include<iostream>
using namespace std ;
int fibo(int numm)
{
    if(numm==1 || numm==2){
    return 1;
    // cout<<"1 ";
    }
    else{
        return fibo(numm-1)+fibo(numm-2);
        // cout<<fibo(numm-1)+fibo(numm-2)<<" ";
    }
}
int main()
{
    int num;
    cout<<"ENTER THE NUMBER OF ELEMENTS YOU WANT IN THE SERIES : \n";
    cin>>num;

    cout<<"ELEMENT NUMBER "<<num<<" IS --> "<<fibo(num);
    return 0;
}