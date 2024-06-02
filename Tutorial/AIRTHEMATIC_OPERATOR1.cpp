//USING AIRTHEMATIC OPERATOR ON INPUT TAKEN FROM USER.
//Created on 22nd of NOVEMBER.

#include<iostream>
using namespace std ;

int main()
{
    int number1, number2 ;

    cout<<"ENTER THE VALUE OF FIRST NUMBER : " ;
    cin>>number1 ;

    cout<<"ENTER THE VALUE OF SECOND NUMBER : " ;
    cin>>number2 ;

    cout<<"AFTER PERFORMING AIRTHEMATIC OPERATIONS, WE GET: " ;

    cout<<"\nADDITION :"<< number1+number2;
    cout<<"\nMULTIPLICATION :"<< number1*number2;
    cout<<"\nDIVISION :"<< number1/number2;
    cout<<"\nMODULUS i.e REMAINDER :"<< number1%number2;
    cout<<"\nSUBTRACTION :"<< number1-number2;
    cout<<"\nINCRIMENT :"<< ++number1;
    cout<<"\nDECRIMENT :"<< --number1;

    return 0 ;
}
    