#include<iostream>
using namespace std;
int main( )
{
    int num=5;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }
        cout<<"*";
        for (int j = num-i+1; j > num-i; j--)
        {
            cout<<" ";
        }
        cout<<"*"<<endl;
    }
}
