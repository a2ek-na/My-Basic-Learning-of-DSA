//USING OTHERS OPERATOR.
//Created on 18th of NOVEMBER.

#include<iostream>
using namespace std ;

int main()
{
    int a;
    a=10;
    cout<<sizeof(a)<<endl;

    char name;
    name='p' ;
    cout<<sizeof(name)<<endl;

    bool flag;
    flag=true;
    cout<<sizeof(flag)<<endl;

    a==name? flag = true : flag = false;

    cout<<flag; 
    cout<<(&a)<<endl;

    return 0 ; 
}
    