#include<iostream>
using namespace std;
class Heap{
    int *array;
    int capacity, size;
    
    public:
    int leftChild(int i){
        return (2*i);
    }
    int rightChild(int i){
        return 2*i+1;
    }
    int parent(int i){
        return i/2;
    }

    Heap(int val){
        capacity = val;
        array = new int[capacity];
        size = 0;
        array[0] = -1;
    }

    void insert(int val){
        size++;
        this->array[size] = val;
        int temp = size;
        while(size > 0 && array[parent(temp)] > array[temp]){
            swap(array[temp], array[parent(temp)]); 
            temp = parent(temp);
        }
    }

    void printHeap(){
        for(int i = 0; i <= size; i++) cout<<array[i]<<" ";
        return;
    }

    void deleteHeap(){
        swap(array[size], array[1]);
        size--;
        heapify(1);
    }

    void heapify(int i){
    int min = i;
    int left = leftChild(i);
    int right = rightChild(i);

    if(left <= size && array[left] < array[min])
        min = left;

    if(right <= size && array[right] < array[min])
        min = right;

    if(min != i){
        swap(array[i], array[min]);
        heapify(min);
    }
}
};

int main(){
    Heap h(10);
    h.insert(10);
    h.insert(12);
    h.insert(13);
    h.insert(9);
    h.insert(2);
    h.insert(3);
    h.insert(30);
    h.insert(15);
    //h.deleteHeap();
    h.printHeap();
    return 0;
}