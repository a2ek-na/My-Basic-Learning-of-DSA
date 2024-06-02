#include<iostream>
using namespace std;
class Stack{
    int capacityOfStack;
    int top;
    int *arr;
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

Stack ::Stack(int size){
    this->capacityOfStack=size;
    arr=new int (capacityOfStack);
    this->top=-1;
}

void Stack::push(int data){
    if(this->top == this->capacityOfStack-1){
        cout<<"OverFlow Condition !!! ,Hence can't add more elements, \n\n";
        return;
    }
    this->arr[++top]=data;
}

void Stack::pop(){
    if(top==-1){
        cout<<"UnderFlow Condition !!! ,hence can't remove more elements ,\n\n";
        return;
    }
    cout<<"Removed Element : "<<arr[top]<<endl;
    top--;
}

void Stack::printStack(){
    int i;
    if(top==-1){
        cout<<"Empty List, Nothing to Print ";
        return;
    }
    cout<<"\nPrinting elements of Stack : ->\n";
    for(i=top;i>=0;i--)
        cout<<arr[i]<<endl;
}

void Stack::isEmpty(){
    if(top==-1){
        cout<<"Yes, the Stack is empty..."<<endl;
        return;
    }
    cout<<"No, the Stack is not empty \n";
    return ;
}

void Stack::isFull(){
    if(top==capacityOfStack-1){
        cout<<"Yes, the Stack is Full..."<<endl;
        return;
    }
    cout<<"No, the Stack is not Full \n";
    return ;
}

int Stack::getTop(){
    return arr[top];
}

int Stack::currentSize(){
    return top+1;
}

int Stack::remainingSize(){
    return capacityOfStack-1-top;
}

int main(){
    Stack myStack(5);
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);
    myStack.push(40);
    myStack.push(50);
    myStack.printStack();
    cout<<endl<<endl;
    myStack.pop();
    myStack.printStack();
    cout<<endl<<endl;
    myStack.pop();
    myStack.printStack();
    myStack.push(1000);
    myStack.printStack();
    return 0;
}