//USING NESTED ELSE IF STATEMENT
//PROGRAMMED ON 23rd of NOVEMBER 2022
#include<iostream>
using namespace std ;

int main(){
    
    int marks ;

     cout<<"ENTER YOUR MARKS HERE : " ;
     cin>>marks ;

     if (marks>33) {
     if (marks>50) {
        if (marks>80) {
            cout<<"BRILLIANT!!\nEXCELLENT KEEP IT UP" ;
        } else {
            cout<<"GRACEFULLY PASS!!" ;
     } } else {
        cout<<"POINT PASS!! \nDO BETTER FOR THE NEXT TIME" ;
     
     } } else {
     cout<<"OHH NO!! \nFAILED \nIDIOT " ; 
     } 
return 0 ; 
} 