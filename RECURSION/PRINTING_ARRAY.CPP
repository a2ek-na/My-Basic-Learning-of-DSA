#include<iostream>
using namespace std ;
void display(int *ptr,int ind,int number)
{
    if(ind==number) return;
    cout<<ptr[ind]<<endl;
    display(ptr,ind+1,number);
    return;
}
int main()
{
    int arr[6]={16,6,1,8,6,7};
    display(arr,0,6);
    return 0; 
}