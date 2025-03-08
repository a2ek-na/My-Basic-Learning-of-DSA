#include<iostream>
using namespace std;
int main()
{
    int arr[5]={6,16,6,1,8},i;
    int *ptr=&arr[0];
    for (i=0;i<5;i++)
    {
        cout<<"\n\nVALUE OF arr["<<i<<"] "<<"\nVALUE BY arr : "<<*(arr+i)<<"  "<<"\nVALUE BY POINTER : "<<*ptr++;
    }
    // cout<<"\nADDRESS OF arr[0] "<<"\nVALUE BY arr : "<<arr<<"  "<<"\nVALUE BY POINTER : "<<ptr;//THIS arr WILL PRINT THE ADDRESS OF arr[0],HENCE IT WILL ACT AS POINTER.
    
    // cout<<"\n\nVALUE OF arr[0] "<<"\nVALUE BY arr : "<<*arr<<"  "<<"\nVALUE BY POINTER : "<<*ptr++;//THIS arr WILL PRINT THE ADDRESS OF arr[0],HENCE IT WILL ACT AS POINTER.
    
    // cout<<"\n\nVALUE OF arr[1] "<<"\nVALUE BY arr : "<<*(arr+1)<<"  "<<"\nVALUE BY POINTER : "<<*ptr++;//THIS arr WILL PRINT THE ADDRESS OF arr[0],HENCE IT WILL ACT AS POINTER.
    
    // cout<<"\n\nVALUE OF arr[2] "<<"\nVALUE BY arr : "<<*(arr+2)<<"  "<<"\nVALUE BY POINTER : "<<*ptr++;//THIS arr WILL PRINT THE ADDRESS OF arr[0],HENCE IT WILL ACT AS POINTER.
    
    // cout<<"\n\nVALUE OF arr[3] "<<"\nVALUE BY arr : "<<*(arr+3)<<"  "<<"\nVALUE BY POINTER : "<<*ptr++;//THIS arr WILL PRINT THE ADDRESS OF arr[0],HENCE IT WILL ACT AS POINTER.
    
    // cout<<"\n\nVALUE OF arr[4] "<<"\nVALUE BY arr : "<<*(arr+4)<<"  "<<"\nVALUE BY POINTER : "<<*ptr;//THIS arr WILL PRINT THE ADDRESS OF arr[0],HENCE IT WILL ACT AS POINTER.

    return 0;
}