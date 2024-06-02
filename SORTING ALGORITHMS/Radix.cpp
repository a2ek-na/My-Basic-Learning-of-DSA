#include<iostream>
#include<vector>
using namespace std;
void countSort(vector<int> &beta,int pos){
    int size=beta.size(),i; 
    vector<int> frequency(10);
    for(i=0; i<size; i++)
    frequency[(beta[i]/pos)%10]++;

    for(i=1;i<10;i++)
    frequency[i]+=frequency[i-1];

    vector<int> answer(size);
    for(i=size-1;i>=0;i--)
    answer[--frequency[(beta[i]/pos)%10]]=beta[i];

    for(i=0;i<size;i++)
    beta[i]=answer[i];

    return;
}
void radixSort(vector<int> &alpha){
    int maximum=alpha[0],pos;
    for(auto x:alpha)
    maximum=max(maximum,x);

    for(pos =1;maximum/pos>0; pos*=10){
        countSort(alpha,pos);
    }
    return;
}
int main(){
    int num,i;
    cout<<"Enter the number of elements in the array : ",cin>>num;
    vector<int>arrr(num);
    for(i=0;i<num;i++){
    cout<<"\nEnter element number - "<<i+1<<" : ",cin>>arrr[i];
    }

    radixSort(arrr);

    cout<<"After sorting the array , we get --> "<<endl;
    for(i=0;i<num;i++){
    cout<<arrr[i]<<" ";
    }
}