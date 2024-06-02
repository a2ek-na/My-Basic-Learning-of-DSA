//CODE TO A PROGRAM THAT WILL CATAGORIES IN CHILD, YOUND, OLD ACCORDING TO YOUR AGE 
//CREATED ON 24th of NOVENBER 2K22
#include<iostream> 
using namespace std ;

int main () {
    int age ;
    cout<<"ENTER YOUR AGE HERE : " ;
    cin>>age ;

    if (age<18) 
    {
        if(age<12){
            cout<<"YOU ARE A CHILD!!" ;
        } 
        else {
            cout<<"YOU ARE A TEENAGER!!" ;
        }} 
    
        else if (age<60) 
        {
        cout<<"YOU ARE YOUNG!!" ;
    } 
    else {
        cout<<"YOU ARE OLD!!"; 
    }
    return 0 ;
}