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
    void reverse();
    void insertionAtAnyIndex(int, int);
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

void Stack::reverse(){
    if(top==0)
        return;
    int current=this->getTop();
    this->pop();
    this->reverse();
    this->insertionAtAnyIndex(current, 1);
    return ;
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

int main(){
    Stack st;
    cout<<"Oiginal List :-> \n";
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.print();
    st.reverse();
    cout<<endl<<endl<<"Reversed List :-> \n";
    st.print();
    return 0;
}