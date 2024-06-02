#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// void sort(vector<float> ){

// }
void bucketSort(float alpha[],int size){
    vector<vector<float>> bucket (size , vector<float> ());
    int i,index,j,k=0;

    for(i=0;i<size;i++){
        index = alpha[i]*size;
        bucket[index].push_back(alpha[i]);
    }

    for(i=0;i<size;i++){
        if(!bucket[i].empty())
        sort(bucket[i].begin() ,bucket[i].end());
    }

    for(i=0;i<size;i++){
        for(j=0;j<bucket[i].size();j++){
            alpha[k++]=bucket[i][j];
        }
    }
    return ;
}
int main(){
    int num,i;
    cout<<"Enter the number of elements in the array : ",cin>>num;
    float arrr[num];
    for(i=0;i<num;i++){
    cout<<"\nEnter element number - "<<i+1<<" : ",cin>>arrr[i];
    }

    bucketSort(arrr,num);

    cout<<"After sorting the array , we get --> "<<endl;
    for(i=0;i<num;i++){
    cout<<arrr[i]<<" ";
    }
}
