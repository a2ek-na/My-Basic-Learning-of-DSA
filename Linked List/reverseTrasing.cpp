#include<iostream>
using namespace std;
class Node{
    public:
    int value;
    Node* next;
    Node(int data):value(data),next(NULL){};
    Node():value(int(NULL)),next(NULL){};
};
class LinkList{
    public:
    Node *head;
    LinkList():head(NULL){};
    void insertAtTail(int);
    void print();
    // void reverseTrasing();
};
void LinkList::insertAtTail(int data){
    Node* newNode=new Node(data),*temp=head;
    if(head==NULL){
        head=newNode;
        return;
    }
    while((temp->next)!=NULL)
        temp=temp->next;
    temp->next=newNode;
    return;
}
void LinkList::print(){
    Node*temp=head;
    while(temp->next!=NULL){
        cout<<temp->value<<" -> ";
        temp=temp->next;
    }
    cout<<temp->value;
}
void reverseTrasing(Node *passed){
    Node*temp =passed;
    if(temp==NULL)
    return;
    temp=passed->next;
    reverseTrasing(temp);
    cout<<" -> "<<passed->value;
    return;
}

int main(){
    LinkList myList;
    myList.insertAtTail(10);
    myList.insertAtTail(20);
    myList.insertAtTail(30);
    myList.insertAtTail(40);
    myList.insertAtTail(50);
    myList.insertAtTail(60);
    myList.insertAtTail(70);
    myList.insertAtTail(80);
    myList.insertAtTail(90);
    myList.insertAtTail(100);
    myList.insertAtTail(110);
    myList.insertAtTail(120);
    myList.insertAtTail(130);
    myList.print();
    cout<<endl;
    reverseTrasing(myList.head);
    return 0;
}