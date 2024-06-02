//Generayting MaxHeap
#include<iostream>
#include<vector>
using namespace std;
void heapify(vector<int> &vec,int i){
    int leftChild = 2*i+1;
    int rightChild = 2*i+2;
    int max = i;
    if(leftChild <= vec.size() && vec[leftChild] > vec[max]) max = leftChild;
    if(rightChild <= vec.size() && vec[rightChild] > vec[max]) max = rightChild;

    if(max!=i){
        swap(vec[max], vec[i]);
        heapify(vec,max);
    }
}

void generateHeap(vector<int> &vec){
    int LastParent = vec.size()/2;
    for(int i = LastParent; i>=0; i--) heapify(vec,i);
    return; 
}

int main(){
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20,21};
    cout<<"Initial array ->";
    for(int i : v) cout<<i<<" ";
    generateHeap(v);
    cout<<"\n\nHeaped array ->";
    for(int i : v) cout<<i<<" ";
    return 0;
}