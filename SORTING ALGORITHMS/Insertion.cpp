#include<iostream>
using namespace std ;
void insertionSort(int *array ,int num){
    int i,j; 
    for(i=1;i<num;i++){
        int current=array[i],j=i-1;
        while ((array[j]>current)&&(j>=0)){
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=current;
    }
}
int main(){
    int num,i;
    cout<<"Enter the number of elements of array : ",cin>>num;
    cout<<"Enter the elements of array : "<<endl;
    int arr[num];
    for(i=0; i<num;i++){
        cout<<"Enter the elements number "<<i+1<<" : ",cin>>arr[i];
    }

    insertionSort(arr,num);
     cout<<"Sorted Array --> "<<endl;
    for(i=0;i<num;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}