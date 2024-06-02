#include<iostream>
using namespace std;
class Node{
    public:
    int value;
    Node* next;
    Node(){
        this->value=int(NULL);
        this->next=NULL;
    }
    Node(int data){
        this->value=data;
        this->next=NULL;
    }
};
class LinkList{
    public:
    Node* head;
    LinkList():head(NULL){};
    void insertAtTail(int);
    void print();
    Node* reverseTheList(Node *head);
    void insertAtHead(int);
    Node* reverseTheListRecursively(Node *head);
};

void LinkList::insertAtHead(int data){
    Node* newNode=new Node(data);
    if(head==NULL){
        head=newNode;
        return;
    }
    else{
        newNode->next=head;
        head=newNode;
    }
    return;
}

void LinkList::insertAtTail(int data){
    Node* newNode=new Node(data),*temp=head;
    if(head==NULL){
        head=newNode;
        return;
    }
    while (temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
    return;
}
void LinkList::print(){
    Node *temp=head;
    while(temp->next!=NULL){
        cout<<temp->value<<" --> ";
        temp=temp->next;
    }
    cout<<temp->value<<" --> NULL";
}
Node* LinkList::reverseTheList(Node *head){
    LinkList reversedList;
    Node* temp=head;
    while(temp!=NULL){
        reversedList.insertAtHead(temp->value);
        temp=temp->next;
    }
    return reversedList.head;
}
Node* LinkList::reverseTheListRecursively(Node* head){
    LinkList reversed;
    if(head==NULL)
    return reversed.head;
    reversed.reverseTheListRecursively(head->next);
    reversed.insertAtTail(head->value);
    return reversed.head;
}


int main(){
    LinkList mylist;
    mylist.insertAtTail(1);
    mylist.insertAtTail(1);
    mylist.insertAtTail(2);
    mylist.insertAtTail(2);
    mylist.insertAtTail(2);
    mylist.insertAtTail(3);
    mylist.insertAtTail(4);
    mylist.insertAtTail(4);
    mylist.insertAtTail(5);
    mylist.insertAtTail(6);
    mylist.insertAtTail(7);
    mylist.insertAtTail(7);
    mylist.print();
    cout<<endl;
    mylist.head=mylist.reverseTheList(mylist.head);
    mylist.print();
    cout<<endl;
    mylist.head=mylist.reverseTheListRecursively(mylist.head);
    mylist.print();
    return 0;
}