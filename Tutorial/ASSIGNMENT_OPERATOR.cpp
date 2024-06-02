//USING ASSIGNMENT OPERATOR.
//Created on 18th of NOVEMBER.
#include<iostream>
using namespace std;

int main() 
{
    int num1 , num2 , num3 , num4 ;
    num1=15; 
    num2=20;
    num3=15;
    num4=20;


    num1+=30; //num1=45
    num2-=15; //num2=5
    num3/=5; //num3=3
    num4%=6; //num4=2

    cout<<"num3 : "<<num1 ;
    cout<<"\nnum1 : "<<num2 ;  
    cout<<"\nnum2 : "<<num3 ;
    cout<<"\nnum4 : "<<num4 ;

    return 0 ;
}