#include<iostream>
using namespace std ;
void binarySearch(int array[],int target ,int pi, int pf){
    int mid=pi+(pf-pi)/2;
    if(array[mid]==target){ 
        cout<<target<<" found at index --> "<<mid;
        return ;
    }
    else if((array[mid]<target) && (mid >= pi))
        binarySearch(array,target,mid+1,pf);
    else if ((array[mid]>target)&&(mid <= pf))
        binarySearch(array,target,pi,mid-1);
    else
    cout<<endl<<target<<" not found...";
}
int main(){
    int num,i,target;
    cout<<"Enter the number of elements in the array : ",cin>>num,cout<<endl;
    int arrr[num];
    for(i=0;i<num;i++){
    cout<<"Enter element number - "<<i+1<<" : ",cin>>arrr[i];
    }
    cout<<"\nEnter the element to be search in the array --> ",
    cin>>target;
    binarySearch(arrr,target,0,num-1);
    return 0;
}
