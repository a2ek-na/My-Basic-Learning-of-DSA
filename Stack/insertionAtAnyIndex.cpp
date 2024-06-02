#include<iostream>
using namespace std;
class Node{
    public:
    int value;
    Node *next;
    Node(int data):value(data), next(NULL){}
    Node():value((int)NULL), next(NULL){}
};
class Stack: private Node{
    int capacityOfStack,size,top,currentSize;
    Node *head;
    public:
    void push(int );
    void pop();
    void print();
    Stack();
    int getTop();
    void getCurrentSize();
    void insertionAtAnyIndex(int,int);
    void deletionFromAnyIndex(int);
};

Stack ::Stack(){
    top=0;
    head=NULL;
    currentSize=0;
}

void Stack::push(int passsedValue){
    Node *newNode= new Node(passsedValue);
    newNode->next=head;
    head=newNode;
    top++;
    currentSize++;
}

void Stack::pop(){
    Node *temp=head;
    head=head->next;
    currentSize--;
    top--;
    delete(temp);
}

void Stack::print(){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->value<<endl;
        temp=temp->next;
    }
}

int Stack::getTop(){
    return head->value;
}

void Stack::getCurrentSize(){
    cout<<"Current Size : "<<currentSize<<endl<<endl;
}

void Stack::insertionAtAnyIndex(int data,int index){
    if(top==index-1){
        push(data);
        return;
    }
    int Current=this->getTop();
    pop();
    this->insertionAtAnyIndex(data, index);
    push(Current);
    return;
}

void Stack::deletionFromAnyIndex(int index){
    if(top==index){
        pop();
        return;
    }
    int Current=this->getTop();
    pop();
    this->deletionFromAnyIndex(index);
    push(Current);
    return;
} 
int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.insertionAtAnyIndex(1000,6);
    st.insertionAtAnyIndex(100,3);
    st.insertionAtAnyIndex(700,1);
    st.print();
    cout<<endl<<endl;
    st.deletionFromAnyIndex(4);
    st.deletionFromAnyIndex(1);
    st.print();
    return 0;
}