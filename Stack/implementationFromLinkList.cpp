#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node (int val):data(val),next(NULL){};
    Node ():data((int)NULL),next(NULL){};
};
class Stack: private Node{
    int capacityOfStack;
    int currSize;
    Node *head;
    public:
    Stack(int);
    void push(int);
    void pop();
    void printStack();
    void isEmpty();
    void isFull();
    int getTop();
    int currentSize();
    int remainingSize();
};

Stack :: Stack(int passsedValue){
    this->capacityOfStack=passsedValue;
    currSize=0;
    head=NULL;
}

void Stack::push(int passsedValue){
    if(currSize>capacityOfStack-1){
        cout<<"OverFlow Occur, No More element can be Added ...\n";
        return;
    }
    Node *newNode=new Node(passsedValue);
    currSize++;
    newNode->next=head;
    head=newNode;
}

void Stack::pop(){
    if(head==NULL){
        cout<<"UnderFlow Condition!!! \nNothing to be Popped Out \n";
        return;
    }
    cout<<"\nRemoved Element is : "<<head->data<<endl;
    Node *toBeRemoved=head;
    head=head->next;
    delete(toBeRemoved);
}

void Stack::printStack(){
    Node *temp=head;
    while(temp){
        cout<<endl<<temp->data;
        temp=temp->next;
    }
}

void Stack::isEmpty(){
    if(currSize==0)
        cout<<"The Stack is Empty...\n";
    else
        cout<<"No, Stack is not Empty...\n";
    return;
}

void Stack::isFull(){
    if(currSize>=capacityOfStack)
        cout<<"The Stack is Full...\n";
    else
        cout<<"No, Stack is not Full...\n";
    return;
}

int Stack::getTop(){
    return head->data;
}

int Stack::currentSize(){
    return currSize;
}

int Stack::remainingSize(){
    return capacityOfStack-currSize;
}

int main(){
    Stack myStack(6);
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);
    myStack.push(40);
    myStack.push(50);
    myStack.push(60);
    myStack.printStack();
    myStack.pop();
    myStack.printStack();
    return 0;
}