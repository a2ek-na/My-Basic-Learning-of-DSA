#include<iostream>
using namespace std;

//================================================================================================================
class Node{
    public:
    int data;
    Node* next;
    Node* previous;
    Node(){}
    Node(int);
};

Node :: Node(int value){
    data = value;
    previous = NULL;
    next = NULL;
}

//================================================================================================================
class deque : private Node{
    public : 
    Node* Head;
    Node* Tail;
    void push_front(int);
    void push_back(int);
    void pop_front(); 
    void pop_back(); 
    int front();
    int back();
    void printFromFront();
    void printFromBack();
    deque();
};

deque ::deque(){
    Head = NULL;
    Tail = NULL;
}

void deque::push_front(int val){
    Node * newNode =  new Node(val);
    if(Head == NULL){
        Head = newNode;
        Tail = newNode;
        return;
    }
    newNode->next = Head;
    Head -> previous =  newNode;
    Head = newNode;
    return;
}

void deque::push_back(int val){
    Node * newNode =  new Node(val);
    if(Tail == NULL){
        Tail = newNode;
        Head = newNode; 
        return;
    }
    Tail->next = newNode;
    newNode -> previous =  Tail;
    Tail = newNode;
    return;
}


void deque::pop_front(){
    if(Head == NULL){
        cout<<"Nothing to Pop...\n";
        return;
    }
    Node *toBeDeleted = Head;
    cout<<"Removed Element -> "<<Head->data<<endl;
    Head = Head -> next;
    Head -> previous = NULL;
    delete(toBeDeleted);
    return;
}

void deque::pop_back(){
    if(Tail == NULL){
        cout<<"Nothing to Pop...\n";
        return;
    }
    Node *toBeDeleted = Tail;
    cout<<"Removed Element -> "<<Tail->data<<endl;
    Tail = Tail -> previous;
    Tail -> next = NULL;
    delete(toBeDeleted);
    return;
}

int deque::front(){
    return Head -> data;
}

int deque::back(){
    return Tail -> data;
}

void deque::printFromFront(){
    if(Head == NULL){
        cout<<"Nothing to Print...\n";
        return;
    }   
    Node *temp =Head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return;
}

void deque::printFromBack(){
    if(Tail == NULL){
        cout<<"Nothing to Print...\n";
        return;
    }   
    Node *temp = Tail;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->previous;
    }
    return;
}

//================================================================================================================
int main(){
    deque dq;
    dq.push_front(10);
    dq.push_front(20);
    dq.push_front(30);
    dq.push_front(40);
    dq.pop_front();
    dq.printFromFront();
    cout<<endl;
    dq.push_back(100);
    dq.push_back(90);
    dq.push_back(80);
    dq.printFromFront();
    return 0;
}