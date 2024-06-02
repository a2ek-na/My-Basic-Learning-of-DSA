#include<iostream>
using namespace std ;
int maxi(int *ptr,int ind,int num)
{
    if(ind==num-1)
        return ptr[ind];
    else
    return max(ptr[ind],maxi(ptr,ind+1,num));
    
}
int main()
{
    int arr[6]={6,8,1,16,6,7};
    cout<<maxi(arr,0,6);
    return 0;   
}