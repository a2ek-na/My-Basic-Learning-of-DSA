#include<iostream>
using namespace std;

int main() 
{
    int a;
    float b;

    a=12;
    b=16.08;

    cout<<"The value of b is : "<<(int)b;
    cout<<"\nThe value of b is : "<<int(b);
    
    int c=int(b);

    cout<<"\nThe expression  is : "<<a + b;
    cout<<"\nThe expression  is : "<<a + int(b);
    cout<<"\nThe expression  is : "<<a + (int)b;

}