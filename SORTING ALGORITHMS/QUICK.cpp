#include<iostream>
using namespace std ;
void quickSort(int array[],int first,int last){
    int pivotElement=array[last],j=first,i=first-1;

    if(first>=last)
    return ;

    for(;j<last;j++){
        if(array[j]<pivotElement)
        swap(array[++i],array[j]);
    }
    swap(array[++i],array[last]);

    quickSort(array,first,i-1);
    quickSort(array,i+1,last);
    return ;
}
int main(){
    int num,i;
    cout<<"Enter the number of elements in the array : ",cin>>num;
    int arrr[num];
    for(i=0;i<num;i++){
    cout<<"\nEnter element number - "<<i+1<<" : ",cin>>arrr[i];
    }

   quickSort(arrr,0,num);

    cout<<"After sorting the array , we get --> "<<endl;
    for(i=0;i<num;i++){
    cout<<arrr[i]<<" ";
    }
    return 0;
}