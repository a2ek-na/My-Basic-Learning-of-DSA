//USING IF ELSE IF STATEMENT
//PROGRAMMED ON 23rd of NOVEMBER 2022
#include<iostream>
using namespace std ;

int main(){
    int age;
    cout<<"ENTER YOUR AGE HERE : " ;
    cin>>age;

    if (age<18){
        cout<<"YOU ARE A TEENAGER!!" ;

    }else if (18<age<60) {
        cout<<"YOU ARE ADULT!!" ;

    } else {
        cout<<"YOU ARE OLD!! " ;

    }
    return 0 ;

}