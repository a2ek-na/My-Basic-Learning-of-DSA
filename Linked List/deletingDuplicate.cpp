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
    Node* head;
    public:
    LinkList():head(NULL){};
    void insertAtTail(int);
    void print();
    void deleteDulicate();
};

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
void LinkList::deleteDulicate(){
    Node*temp=head;
    while(temp->next!=NULL){
        if(((temp->next)->value)!=(temp->value)){
            temp=temp->next;
            continue;
        }
        else{
                Node*duplicate=temp->next;
                temp->next=temp->next->next;
                delete(duplicate);
        }
    }
    return;
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
    mylist.deleteDulicate();
    mylist.print();
    return 0;
}