#include<iostream>
using namespace std;
void mergeSort(int array[] , int size ){
    int size1,size2;
    if(size<=1)
    return;
    if(size%2==0){
       size1=size/2;
       size2=size/2;
    }
    else{
        size1=(size+1)/2;
        size2=(size-1)/2;
    }
    int arr[size1], brr[size2];
    int alpha,beta,gamma=0;
    for (alpha=0;alpha<size1;alpha++){
        arr[alpha]=array[alpha];
    }
    for(alpha;alpha <size;alpha++,gamma++){
        brr[gamma]=array[alpha];
    }
    mergeSort(arr,size1);
    mergeSort(brr,size2);

    int i,j,k;
    for(i=0,j=0,k=0;j<size2;j++){
        while((arr[i]<brr[j])&& (i<size1)){
            array[k++]=arr[i++];
        }
        array[k++]=brr[j];
    }

    if( i < size1){
        for(;i<size1;i++)
        array[k++]=arr[i];
    }

    else if( j < size2){
        for(;j<size2;j++)
        array[k++]=brr[j];
    }
    return ;
}
int main(){
    int num,i;
    cout<<"Enter the number of elements in the array : ",cin>>num;
    int arrr[num];
    for(i=0;i<num;i++){
    cout<<"\nEnter element number - "<<i+1<<" : ",cin>>arrr[i];
    }

    mergeSort(arrr,num);

    cout<<"After sorting the array , we get --> "<<endl;
    for(i=0;i<num;i++){
    cout<<arrr[i]<<" ";
    }
    return 0;
}