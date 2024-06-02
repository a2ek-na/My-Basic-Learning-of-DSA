#include<iostream>
using namespace std;
void bubbleSort(int *ptr,int num)
{
    int i,j;
    for(i=0;i<num;i++)
    {
        int check=0; //THIS WILL CHECK THAT FURTHER SORTING IS REQUIRED OR NOT.....
        //HERE AFTER ONE LOOP COMPLETION, IFF CHECK REMAIN 0 ,THEN OUR DATA HAS BEEN SUCCESSFULLY SORTED.
        for(j=0;j<num-i-1;j++)
        
        {
             if(ptr[j]>ptr[j+1]) //--> ASCENDING ORDER
            //if(ptr[j]<ptr[j+1]) //--> DESCENDING ORDER
            {
                check++;
                swap(ptr[j],ptr[j+1]);
            }
        }
            if(check==0)
            break;
    }
}
int main()
{
    int num=5,i;
    cout<<"ENTER THE NUMBER OF ELEMENTS : \n";
    cin>>num;
    int arr[num];
    cout<<"ENTER THE ELEMENTS : \n";
    for ( i = 0; i < num; i++)
    {
        cin>>arr[i];
    }
    bubbleSort(arr,num);
    cout<<"\nDATA AFTER SORTING --> ";
    for ( i = 0; i < num; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
