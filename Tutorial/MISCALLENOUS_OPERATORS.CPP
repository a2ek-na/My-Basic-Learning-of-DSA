//USING MISCALLENOUS OPERATOR.
//Created on 20th of NOVEMBER.

#include<iostream>
using namespace std;

int main ()
{
    int num1=5 ;
    //5 in binary form =101

    cout<<(num1>>1)<<endl ; 
    cout<<(num1<<1)<<endl ; 

    cout<<(num1<<2)<<endl ; 
    cout<<(num1>>2)<<endl ; 

    int num2=8;
    cout<<(num1&num2)<<endl ;
    cout<<(num1|num2)<<endl ;

    return 0 ;
}