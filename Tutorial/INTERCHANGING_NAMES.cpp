/*Taking names of two person a and b from user
Then interchanging the names of a and b
 Created on 5th of November 2022 */

#include<iostream>
using namespace std;

int main(){
    
    string a,b;
    cout<<"Enter the name of a:" ;
    cin>>a;
    cout<<"Enter the name of b:" ;
    cin>>b;

    string c;
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