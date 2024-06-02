//CODE TO A PROGRAM THAT WILL PRINT A NUMBER IF IT IS EVEN AND IS DIVISIBLE BY 3
//CREATED ON 23rd of NOVENBER 2K22

#include<iostream>
using namespace std ;

int main()
{
    int num;   
    cout<<"ENTER THE INPUT HERE : " ;
    cin>>num ;

    if (num%3==0 && num%2==0){
        cout<<"YES, THE GIVEN INPUT SATISFY TRH QUESTION" ;
    } else {
        cout<<"NO, THE GIVEN INPUT DOES NOT SATISFY TRH QUESTION" ;
    }
    return 0 ;
    
}