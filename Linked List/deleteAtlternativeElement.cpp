#include<iostream>
using namespace std;
class Node{
    public:
    int value;
    Node*next;
    Node():value(0),next(NULL){};    
    Node(int data):value(data),next(NULL){};    
};
class Linklist{
    private:
    Node* head;
    public:
    Linklist():head(NULL){};
    void insertAtTail(int);
    void printList();
    void deleteAlternate();
};
void Linklist::insertAtTail(int data){
    Node* newNode=new Node(data);
    if(head==NULL)
        head=newNode;
    else{
        Node*temp=head;
        while (temp->next!=NULL)
            temp=temp->next;
        temp->next=newNode;
        return ;
    }
}
void Linklist::printList(){
    Node* temp=head;
    if(head==NULL){
        cout<<"List is EMPTY..."<<endl;
        return;
    }
    do{
        cout<<temp->value<<" --> ";
        temp=temp->next;
    } while(temp->next!=NULL);
        cout<<temp->value<<" --> "<<"NULL"<<endl;
    return ;
}
void Linklist::deleteAlternate(){
    Node *needed=head;
    if(head==NULL){
        cout<<"Empty List... "<<endl;
        return ;
    }
    while (needed->next!=NULL && needed!=NULL){
        Node*current=needed->next;
        needed->next=current->next;
        needed=current->next;
        free(current);
        needed=needed->next;
    }
    return;
}
int main(){
    Linklist mylist;
    mylist.insertAtTail(10);
    mylist.insertAtTail(20);
    mylist.insertAtTail(30);
    mylist.insertAtTail(40);
    mylist.insertAtTail(50);
    mylist.insertAtTail(60);
    mylist.insertAtTail(70);
    mylist.insertAtTail(80);
    mylist.insertAtTail(90);
    mylist.insertAtTail(100);
    mylist.insertAtTail(110);
    mylist.insertAtTail(120);
    mylist.insertAtTail(130);
    mylist.insertAtTail(140);
    mylist.insertAtTail(150);
    mylist.insertAtTail(160);
    mylist.printList();
    mylist.deleteAlternate();
    mylist.printList();
    return 0;
}