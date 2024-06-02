#include<iostream>
using namespace std ;
int sum(int *ptr,int ind ,int num)
{
    if(ind==num-1)
    return(ptr[num-1]);
    return ptr[ind]+sum(ptr,ind+1,num);
}
int main()
{
    int arr[6]={1,6,8,16,6,7};
    cout<<"SUM OF ARRAY --> "<<sum(arr,0,6);
    return 0;
}