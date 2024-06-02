#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int value) : data(value), next(NULL){} 
    Node(){}
}; 


class Queqe : private Node{
    Node *head, *tail;
    int curr_size;
    public:
    void enqueue(int value);
    void dequeqe();
    int front();
    int size();
    void printQueqe();
    bool isEmpty();
    Queqe();
};
Queqe :: Queqe(){
    curr_size = 0;
    head=NULL;
    tail=NULL;
}

void Queqe::enqueue(int value){
    Node *newNode = new Node(value);

    if(head ==  NULL){ 
        head = newNode;
        tail = newNode;
        curr_size++;
        return;
    }

    tail->next=newNode;
    tail=newNode;
    curr_size++;
    return ;
}

void Queqe::dequeqe(){
    if(!head){
        cout<<"UnderFlow Condition !!!"<<endl<<endl;
        return;
    }

    Node *toBeDeleted=head;
    head=head->next;
    delete(toBeDeleted);
    curr_size--;
    return;
}

int Queqe::front(){
    if(tail==NULL){
        cout<<"No Element Found...";
        return -1;
    }
    return tail->data;
}

bool Queqe ::isEmpty(){
    if(curr_size = 0)
        return true;
    else
        return false;
}

int Queqe ::size(){
    return curr_size;
}

void Queqe ::printQueqe(){
    Node *temp=head;
    cout<<"Printing Queqe : ";
    while(temp){
        cout<<temp->data<<" -> ";
        temp=temp->next; 
    }
    cout<<"NULL";
}

int main(){
    Queqe que;
    que.enqueue(10);
    que.enqueue(20);
    que.enqueue(30);
    que.enqueue(40);    
    que.enqueue(50);    
    que.enqueue(60);    

    cout<<que.size()<<endl<<que.front();
    cout<<endl;
    que.printQueqe();
    que.dequeqe();
    cout<<endl;
    que.printQueqe();
    return 0;
}