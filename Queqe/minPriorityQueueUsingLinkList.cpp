#include<iostream>
using namespace std;
class Node{
    public:
    int data, priority;
    Node *next;
    Node(int value ,int prior):data(value), priority(prior), next(NULL){}
    Node():data(int(NULL)),next(NULL){}
};

class minpriorityQueue :private Node{
    public:
    Node *head;
    void insertion(int ,int);
    void printQueue();
    void deletion(int);
    minpriorityQueue():head(NULL){}
};

void minpriorityQueue::insertion(int value, int prior){
    Node *newNode = new Node(value, prior);
    if(head==NULL  || prior < head->priority){
        newNode->next=head;
        head=newNode;
    }
    else{
        Node *temp=head;
        while(temp->next != NULL && (temp->next->priority  <= prior) )
            temp=temp->next;
        newNode->next=temp->next;
        temp->next=newNode;
    }
    return;
}

void minpriorityQueue::printQueue(){
    Node *temp= head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return;
}

void minpriorityQueue::deletion(int prior){
    return;
}
int main(){
    minpriorityQueue que;
    que.insertion(1,2);
    que.insertion(10,3);
    que.insertion(1,3);
    que.insertion(4,3);
    que.insertion(5,5);
    que.insertion(100,1);
    que.insertion(200,2);
    que.insertion(2000,2);
    que.insertion(200000,2);
    que.insertion(300,1);
    que.insertion(500,10);
    que.printQueue();
}