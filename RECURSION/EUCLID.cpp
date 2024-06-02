#include<iostream>
using namespace std ;
void hcf(int a,int b, int com)
{
    if(a-b==0){
    cout<<a;
    return ;
    }
    else if (a>b)
        hcf(a-b,b,1);
    else
        hcf(a,b-a,1);
}
int main()
{
    int num1=40,num2=48;
    cout<<"H.C.F of "<<num1<<" and "<<num2<<" --> ";
    hcf(num1,num2,1);
    return 0;
}