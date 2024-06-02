#include<iostream>
#include<vector>
using namespace std ;

void selectionSort(vector<int> &ptr,int num)
{
    int i,j;
    for(i=0;i<num-1;i++)
    {
        int minIndex=i;
        for(j=i+1;j<num;j++)
        {
            if(ptr[minIndex]>ptr[j])
            minIndex=j;
        }
        if(i!=minIndex)
        swap(ptr[minIndex],ptr[i]);
    }
}
int main()
{
    int num,i;
    cout<<"ENTER THE NUMBER OF ELEMENTS : \n";
    cin>>num;
    vector<int> vec(num);
    cout<<"ENTER THE ELEMENTS : \n";
    for(i=0;i<num;i++)
    {
        cin>>vec[i];
    }
    selectionSort(vec,num);
    cout<<"\nELEMENTS AFTER SORTING WILL BECOME : --> ";
    for(i=0;i<num;i++)
    {
        cout<<vec[i]<<" ";
    }
    return 0;
}