//USING LOGICAL OPERATOR.
//Created on 18th of NOVEMBER.

#include<iostream> 
using namespace std ;

int main () {
    bool exp1=true;
    bool exp2=false;

    cout<<"LOGICAL AND : "<<(exp1&&exp2);  //false
    cout<<"\nLOGICAL OR : "<<(exp1||exp2); //true
    cout<<"\nLOGICAL NOT : "<<(!exp1); //false
    cout<<"\nLogical not : "<<(!exp2); //true

    return 0 ;
}