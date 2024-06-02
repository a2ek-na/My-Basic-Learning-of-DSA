#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {3, 2, 0, 5, 1, 0, 8, 0, 6, 7};
    int i, j;

    // BY BUBBLE SORTING
    //     for(i=0;i<10;i++)
    //     {
    //         int count =0;
    //         for(j=0;j<10-i-1;j++)
    //         {
    //             if(arr[j]==0)
    //             {
    //             swap(arr[j+1],arr[j]);
    //             count++;
    //             }
    //         }
    //             if(count==0)
    //             break;
    //     }

    // BY SELECTION SORTING.
    // AS IN THIS QUESTION, WE CAN'T CHANGE THE RELATIVE ORDER OF NON-ZERO NUMBERS SO THIS QUESTION IS ONLY SOLVED BY STABLE SORTING.
    // SO HERE WE CAN'T SOLVE THE ABOVE QUESTION BY SELECTION SORTING AS IT IS AN UNSTABLE SORTING.

    // INSERTION SORTING
    for (i = 1; i <10 ; i++)
    {
        if (arr[i]!=0)
        {
            j=i-1;
            while (arr[j]==0 && j>=0)
            {
                // arr[j+1]=arr[j];
                j--;
            }
            swap(arr[j+1],arr[i]);
        }
    }

    for (i = 0; i <= 9; i++)
        cout << arr[i] << " ";
    return 0;
}