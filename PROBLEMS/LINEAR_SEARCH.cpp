#include<iostream>
using namespace std ;
int main()
{
    int num,i,what,how=0;
    cout<<"ENTER THE NUMBER OF ELEMENTS :"<<endl;
    cin>>num;

    int arr[num];
    cout<<"ENTER ELEMENTS :"<<endl;
    for (i = 0; i < num; i++)
    {
        cin>>arr[i];
    }
    cout<<"ENTER THE ELEMENT TO BE SEARCHED :"<<endl;
    cin>>what;

    for (i=0;i<num;i++)
    {
        if(arr[i]==what)
        {
            cout<<"INDEX OF THAT ELEMENT IS : "<<i;
            how++;
            break;
        }
    }
    if(how==0)
    cout<<"-1";
    return 0;
}