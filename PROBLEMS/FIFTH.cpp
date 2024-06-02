#include<iostream>
using namespace std ;
int main()
{
    int num,i,sum,j,k=0;
    cout<<"ENTER THE NUMBER OF ELEMENTS IN THE ARRAY :"<<endl;
    cin>>num;
    int arr[num];
    cout<<"ENTER ELEMENTS :\n";
    for ( i = 0; i < num; i++)
    {
        cin>>arr[i];
    }
    cout<<"ENTER THE SUM :\n";
    cin>>sum;
    for ( i = 0; i < num; i++)
    {
        for ( j = i+1; j < num; j++)
        {
            if(arr[i]+arr[j]==sum)
            k++;
        }
    }
    cout<<"TOTAL NUMBER OF PAIRS IS EQUAL TO "<<k;
    return 0;
}