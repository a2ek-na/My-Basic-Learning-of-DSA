#include<iostream>
using namespace std;
int main()
{
    int num,i,max;
    cout<<"ENTER THE NUMBER OF ELEMENTS IN THE ARRAY:"<<endl;
    cin>>num;

    int arr[num];
    cout<<"ENTER THE ELEMENTS :"<<endl;

    for ( i = 0; i < num; i++)
    {
        cin>>arr[i];
    }

    max=arr[0];

    for ( i = 0; i < num; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<"THE LARGEST VALUE IN THE ARRAY IS : "<<endl<<max;
    return 0;
}