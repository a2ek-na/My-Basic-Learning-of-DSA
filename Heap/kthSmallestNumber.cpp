//Generayting Min Heap
#include<iostream>
#include<vector>
using namespace std;
void heapify(vector<int> &vec,int i){
    int leftChild = 2*i+1;
    int rightChild = 2*i+2;
    int min = i;
    if(leftChild < vec.size() && vec[leftChild] < vec[min]) min = leftChild;
    if(rightChild < vec.size() && vec[rightChild] < vec[min]) min = rightChild;

    if(min!=i){
        swap(vec[min], vec[i]);
        heapify(vec,min);
    }
}

void generateHeap(vector<int> &vec){
    int LastParent = (vec.size()-1)/2;
    for(int i = LastParent; i>=0; i--) heapify(vec,i);
    return; 
}

void deleteH(vector<int> &v, int i){
    swap(v[i], v[v.size()-1]);
    v.pop_back();
    heapify(v,i);
}

int KthSmallest(vector<int> ques, int position){
    for(int i = 0 ; i <= position-2 ; i++) deleteH(ques,0);
    return ques[0];
}
int main(){
    vector<int> v={15, 7, 12, 4, 9, 18, 6, 10, 3, 20, 8, 11, 5, 13, 16, 2, 19, 1, 17, 14};
    cout<<"Initial array ->";
    for(int i : v) cout<<i<<" ";
    generateHeap(v);
    cout<<"\n\nHeaped array ->";
    for(int i : v) cout<<i<<" ";

    int position = 15;
    
    cout<<"\n\n"<<position<<"th Element -> " <<KthSmallest(v,position); 
    return 0;
}