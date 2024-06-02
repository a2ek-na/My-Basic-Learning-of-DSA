#include<iostream>
using namespace std ;
int main()
{
    int num,i,temp;
    cout<<"ENTER NUMBER OF ELEMENTS OF THE ARRAY : "<<endl;
    cin>>num;
    int arr[num];

    cout<<"ENTER ELEMENTS :"<<endl;
    for (i=0;i<num;i++)
    {
        cin>>arr[i];
    }

    temp=arr[0];
    for(i=1;i<num;i++)
    {
        if(temp<arr[i])
        {
            temp=arr[i];
        }
    }
cout<<endl<<"MAXIMUM VALUE IN THE ARRAY IS -> "<<temp;
    return 0;
}