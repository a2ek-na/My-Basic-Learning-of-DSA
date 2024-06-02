#include<iostream>
using namespace std ;
int main(){
    int arr[4]={2,4,7,9},brr[4]={1,3,5,8},i,j,k=0;
    int crr[8];
    for(i=0,j=0;i<=3;){
        while((brr[j]<arr[i])&&(j<=3)){
            crr[k++]=brr[j++];
        }
            crr[k++]=arr[i++];
    }
    while (j<=3){
        crr[k++]=brr[j++];
    }
    while (i<=3){
        crr[k++]=arr[i++];
    }
    
    for(i=0;i<8;i++){
        cout<<crr[i]<<" ";
    }
    return 0;
}