#include<iostream>
using namespace std;
void swap(int a,int b)
{
    int c;
    c=a;
    a=b;
    b=c;
    cout<<"AFTER SWAPPING THE VALE OF x from the SWAP FUNCTION, x= "<<a<<endl;
    cout<<"AFTER SWAPPING THE VALE OF y from the SWAP FUNCTION, y= "<<b<<endl;

    return;
}
int main()
{
    int x=10; int y=20;
    swap(x,y);
    cout<<"AFTER SWAPPING THE VALE OF x from the MAIN FUNCTION, x= "<<x<<endl;
    cout<<"AFTER SWAPPING THE VALE OF y from the MAIN FUNCTION, y= "<<y<<endl;
    return 1;
}