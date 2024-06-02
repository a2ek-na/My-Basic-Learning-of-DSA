#include<iostream>
#include<algorithm>
using namespace std;
template <class var>

//SELECTION SORT 
// void selectionSort(var arr[],int sizeofArray){
    // int i,j,minimumIndex;
    // for(i=0;i<sizeofArray;i++){
    //     minimumIndex=i;
    //     bool flag=true;
    //         for(j=i;j<sizeofArray;j++){
    //             if(arr[minimumIndex]>arr[j]){
    //                 minimumIndex=j;
    //                 flag=false;
    //             }
    //         }
    //         if(flag==false)
    //         swap(arr[minimumIndex],arr[i]);
    // }
    //     int i,j,maximumIndex;
    //     for(i=sizeofArray-1;i>=0;i--){
    //         maximumIndex=i;
    //         bool flag=true;
    //         for(j=0;j<=i;j++){
    //             if(arr[maximumIndex]<arr[j]){
    //                 maximumIndex=j;
    //                 flag=false;
    //             }
    //         }
    //         if(flag==false){
    //             swap(arr[maximumIndex],arr[i]);
    //         }
    //     }
    // }


// INSERTION SORT
void insertionSort(var arr[] ,int sizeofArray){
    int i,j,current;
    for(i=sizeofArray-2;i>=0;i--){
        current=arr[i];
        j=i+1;
        while((current>arr[j]) && (j<=sizeofArray-1)){
            arr[j-1]=arr[j];
            j++;
        }
        arr[j-1]=current;
    }
}


//BUBBLE SORT
// void bubbleSort(var arr,int num){
//     int i,j;
//     for(i=0;i<num;i++){
//         bool flag=true;
//         for(j=0;j<num-1-i;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//                 flag=false;
//             }
//         }
//         if(flag==true)
//         break;
//     }
// }
int main(){
    int array1[10]={314,3463,98787,6756,756,9786756,534,9876,43,654};
    char array2[7]={'d','e','w','v','j','r','p'};
    float array3[5]={1347.554,25.563,7587.87,8765.7645,2.563};
    cout<<"Array 1 -- >";
    for(int i =0;i<10;i++)
        cout<<array1[i]<<" ";
    cout<<"\nAfter Sorting , --> ";
    insertionSort(array1,10);
    // selectionSort(array1,10);
    // bubbleSort(array1,10);
    for(int i =0;i<10;i++)
        cout<<array1[i]<<" ";
    
    cout<<"\n\nArray 2 -- >";
    for(int i =0;i<7;i++)
        cout<<array2[i]<<" ";
    cout<<"\nAfter Sorting , --> ";
    insertionSort(array2,7);
    // selectionSort(array2,10);
    // bubbleSort(array2,10);
    for(int i =0;i<7;i++)
        cout<<array2[i]<<" ";
    
    cout<<"\n\nArray 3 -- >";
    for(int i =0;i<5;i++)
        cout<<array3[i]<<" ";
    cout<<"\nAfter Sorting , --> ";
    insertionSort(array3,5);
    // selectionSort(array3,10);
    // bubbleSort(array3,10);
    for(int i =0;i<5;i++)
        cout<<array3[i]<<" ";
    return 0; 
}



