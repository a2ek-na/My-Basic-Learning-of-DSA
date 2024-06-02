#include<iostream>
#include<vector>
using namespace std;
void heapify(vector<int> &v, int i){
    int leftChild = 2*i+1;
    int rightChild = 2*i+2;
    int min = i;
    if(leftChild < v.size() && v[leftChild] < v[min]) min=leftChild;
    if(rightChild < v.size() && v[rightChild] < v[min]) min=rightChild;

    if(min != i){
        swap(v[min], v[i]);
        heapify(v,min);
    }
    return;
}

void generateHeap(vector<int> &h){
    int firstParent = h.size()/2-1;
    for(int i = firstParent ; i>=0; i--) heapify(h,i); 
}

void merge(const vector<int> &v1, const vector<int> &v2, vector<int> &answer){
    for(int i : v1) answer.push_back(i);
    for(int i : v2) answer.push_back(i);

    generateHeap(answer);
    return;
}

int main(){
    vector<int> vec1 = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    vector<int> vec2 = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    vector<int> ans;
    merge(vec1,vec2,ans);
    cout<<"Merged heap--> ";
    for(int i : ans) cout<<i<<" ";
    return 0;
}