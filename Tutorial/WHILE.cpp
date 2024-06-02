//USING WHILE LOOP
//CREATED ON 27th OF NOVEMBER 2K22

#include<iostream> 
using namespace std ;

int main() 
{
    int n;
    cout<<"THIS WILL PRINT THE SUM OF NUMBERS UPTO YOUR ENTERED NUMBER \nENTER THE VALUE OF NUMBER :" ;
    cin>>n;

    int sum;
    sum=0;

    int i; //LOOP VARIABLE INITIALIZATION
    i=0;

    while(i<=n){
        sum+=i ;
        i++;
        }
        cout<<"THE SUM WILL BE :"<<sum;
    return 0 ;
}