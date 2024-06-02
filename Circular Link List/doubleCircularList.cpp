#include<iostream>
using namespace std;
class Node{
    public:
    Node*next,*prev;
    int value;
    Node(int data):value(data),next(NULL),prev(NULL){}
};
class Linklist{
    public:
    Node *head,*tail;
    Linklist():head(NULL),tail(NULL){}
    void insertion(int);
    void deleteion(int);
    void print();
};
void Linklist::insertion(int data){
    Node *newNode=new Node(data);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        tail->next=head;
        return;
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail=newNode;
    tail->next=head;
    return;
}
void Linklist::print(){
    Node *temp=head;
    while(temp->next!=head){
        cout<<temp->value<<" -> ";
        temp=temp->next;
    }
    cout<<temp->value<<" -> ";
    cout<<temp->next->value;
    return;
}
int main(){
    Linklist list;
    list.insertion(10);
    list.insertion(20);
    list.insertion(30);
    list.insertion(40);
    list.insertion(50);
    list.insertion(60);
    list.insertion(70);
    list.insertion(80);
    list.insertion(90);
    list.insertion(100);
    cout<<list.tail->value;
    list.print();
    return 0;
}