//USING SWITCH OPERATOR.
//Created on 24th of NOVEMBER.
#include<iostream>
using namespace std ;

int main () {
    int day ;
    cout<<"ENTER THE DAY OF THE WEEK :" ; 
    cin>>day;

    switch (day)
    {
        case 1 :
        cout<<"THIS IS MONDAY." ;
        break;

        case 2 :
        cout<<"THIS IS TUESDAY." ;
        break;

        case 3 :
        cout<<"THIS IS WEDNESDAY." ;
        break;

        case 4 :
        cout<<"THIS IS THRUSDAY." ;
        break;

        case 5 :
        cout<<"THIS IS FRIDAY." ;
        break;

        case 6 :
        cout<<"THIS IS SATURDAY." ;
        break;

        case 7 :
        cout<<"THIS IS SUNDAY." ;
        break; 

        default :
        cout<<"PLEASE ENTER A VALID INPUT!!" ;
    }
        return 0 ;
}