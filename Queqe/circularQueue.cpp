#include<iostream>
using namespace std;
class circularQueue{
    int *array, capacity, curr_size, frontIndex, endIndex;
    public:
    circularQueue(int);
    void enqueue(int);
    void dequeue();
    void print();
    int front();
    int size();
};

circularQueue::circularQueue(int size){
    capacity=size;
    array= new int[capacity];
    curr_size=0;
    frontIndex=-1;
    endIndex=-1;
}

void circularQueue::enqueue(int data){
    if((frontIndex==0 && endIndex==capacity-1) || (frontIndex == endIndex + 1)){
        cout<<"OverFlow Condition!!! \nHence, can't add "<<data<<endl;
        return;
    }
    else if(frontIndex==-1){
        frontIndex=0;
        endIndex=0;
        array[endIndex] = data;
        curr_size++;
        return ;
    }
    else if((endIndex==capacity-1) && (frontIndex!=0)){
        endIndex=-1;
    }
    array[++endIndex] = data;
    curr_size++;
    return ;
}

void circularQueue::dequeue(){
    if(curr_size == 0){
        cout<<"UnderFlow Condition!!! \nNo, element to dequeue\n";
        return ;
    }
    cout<<"Dequeqed element : "<<array[frontIndex]<<endl;
    if(frontIndex == endIndex && frontIndex != 0){
        frontIndex=-1;
        endIndex=-1;
        curr_size--;    
        return;
    }
    frontIndex++;
    curr_size--;
    return;
}

void circularQueue::print(){
    if(curr_size==0){
        cout<<"No, elements to Print";
        return;
    }
    else if(endIndex >= frontIndex){
        cout<<"Exit <- ";
        for(int i=frontIndex ;i<=endIndex; i++){
            cout<<array[i]<<" <- ";
        }
        cout<<" Entry";
        return ;
    }
    else {
        int i=frontIndex;
        cout<<"Exit <- ";
        while(i < capacity)
            cout<<array[i++]<<" <- ";
        i=0;
        while(i <= endIndex)
            cout<<array[i++]<<" <- ";
        cout<<"Entry";
    }
}

int circularQueue::size(){
    return curr_size;
}
int main(){
    circularQueue cQ(6);
    cQ.enqueue(10);
    cQ.enqueue(20);
    cQ.enqueue(30);
    cQ.enqueue(40);
    cQ.enqueue(50);
    cQ.enqueue(60);
    cQ.print();
    cout<<endl;
    cout<<cQ.size()<<endl;
    cQ.dequeue();
    cQ.dequeue();
    cQ.dequeue();
    cQ.dequeue();
    cQ.dequeue();
    cQ.dequeue();
    cQ.dequeue();
    cQ.print();
    cout<<endl<<cQ.size()<<endl;
    cQ.enqueue(600);
    cQ.enqueue(700);
    cQ.enqueue(800);
    cQ.print();
    cout<<endl<<cQ.size()<<endl;
    return 0;
}