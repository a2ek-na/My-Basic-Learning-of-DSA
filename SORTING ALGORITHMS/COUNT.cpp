#include<iostream>
#include<vector>
using namespace std;
void countSort(vector<int> &alpha){
    int size=alpha.size(),i,maximum=alpha[0];
    for(i=1;i<size;i++){
        maximum=max(alpha[i],maximum);
    }

    vector<int> frequency(maximum+1);
    for(i=0;i<size;i++){
        frequency[alpha[i]]++;
    }

    for(i=1;i<maximum+1;i++){
        frequency[i]+=frequency[i-1];
    }

    vector<int> answer(size);

    for(i=size-1;i>=0;i--){
        answer[--frequency[alpha[i]]]=alpha[i];
    }

    for(i=0;i<size;i++){
        alpha[i]=answer[i];
    }
    return ;
}
int main(){
    int num,i;
    cout<<"Enter the number of elements in the array : ",cin>>num;
    vector<int>arrr(num);
    for(i=0;i<num;i++){
    cout<<"\nEnter element number - "<<i+1<<" : ",cin>>arrr[i];
    }

    countSort(arrr);

    cout<<"After sorting the array , we get --> "<<endl;
    for(i=0;i<num;i++){
    cout<<arrr[i]<<" ";
    }
    return 0;
}