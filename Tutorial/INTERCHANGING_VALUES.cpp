/*Taking values of two variables a and b from user
Then interchanging the values of a and b 
Created on 5th of November 2022*/

#include<iostream>
using namespace std;

int main(){
    
    int a,b;
    cout<<"Enter the value of a:" ;
    cin>>a;
    cout<<"Enter the value of b:" ;
    cin>>b;

    int c;
    c=b;
    b=a;
    a=c;
    cout<<"AFTER PROCESSING" <<endl;
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
//You can also use "\n" instead of "<<endl" to go to the next line. 
//"Here, '<<' is known as the INSERTION OPERATOR"
//"Here, '>>' is known as the EXTRACTION OPERATOR"
}  