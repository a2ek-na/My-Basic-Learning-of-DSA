#include<iostream>
#include<vector>
using namespace std;

// Function to heapify the array
void heapify(vector<int> &vec,int i){
    int leftChild = 2*i+1;
    int rightChild = 2*i+2;
    int min = i;
    // If left child exists and is smaller than current min, update min
    if(leftChild < vec.size() && vec[leftChild] < vec[min]) 
        min = leftChild;
    // If right child exists and is smaller than current min, update min
    if(rightChild < vec.size() && vec[rightChild] < vec[min]) 
        min = rightChild;

    // If the current element is not the minimum, swap with the minimum and heapify again
    if(min != i){
        swap(vec[min], vec[i]);
        heapify(vec, min);
    }
}

// Function to generate a min heap
void generateHeap(vector<int> &vec){
    int lastParent = (vec.size() - 1) / 2;
    for(int i = lastParent; i >= 0; i--) 
        heapify(vec, i);
}

// Function to delete an element from the heap
void deleteH(vector<int> &v, int i){
    // Swap the element to be deleted with the last element
    swap(v[i], v[v.size()-1]);
    // Remove the last element
    v.pop_back();
    // Heapify to maintain heap property
    heapify(v, i);
}

// Function to perform heap sort
void heapSort(vector<int> ques, vector<int> &answer){
    // Start from the last index of the heap
    int size = ques.size();
    for(int i = 0; i < size; i++){
        // Add the minimum element to the answer
        answer.push_back(ques[0]);
        // Delete the minimum element from the heap
        deleteH(ques, 0);
    }
}

int main(){
    vector<int> v = {15, 7, 12, 4, 9, 18, 6, 10, 3, 20, 8, 11, 5, 13, 16, 2, 19, 1, 17, 14};
    cout << "Initial array -> ";
    for(int i : v) 
        cout << i << " ";
    
    generateHeap(v); // Convert to min heap
    cout << "\n\nHeaped array -> ";
    for(int i : v) 
        cout << i << " ";

    vector<int> sorted;
    heapSort(v, sorted); // Sort the heap
    cout << "\n\nSorted array -> ";
    for(int i : sorted) 
        cout << i << " ";
    
    return 0;
}
