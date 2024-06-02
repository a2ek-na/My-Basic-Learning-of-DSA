#include<iostream>
using namespace std;
class Node{
    public:
    int value;
    Node *next,*previous;
    Node(int data):value(data),next(NULL),previous(NULL){};  
};
class Linklist{
    public:
    Node *head,*tail;
    Linklist():head(NULL),tail(NULL){};
    void insertionAtHead(int);
    void deleteFromHead();
    void deleteFromTail();
    void deleteAtKth(int);
    void printDataFromHead();  
    void printDataFromTail();  
};
void Linklist::insertionAtHead(int data){
    Node *newNode=new Node(data);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    newNode->next=head;
    head->previous=newNode;
    head=newNode;

}
void Linklist::printDataFromHead(){
    Node *temp=head;
    if(head==NULL){
        cout<<"Empty List...";
        return;
    }
    cout<<"NULL <-> ";
    while (temp!=NULL){
        cout<<temp->value<<" <-> ";
        temp=temp->next;
    }
    cout<<"NULL";
}
void Linklist::printDataFromTail(){
    Node*temp=tail;
    if(head==NULL){
        cout<<"Empty List...";
        return;
    }
    cout<<"NULL <-> ";
    while (temp!=NULL){
        cout<<temp->value<<" <-> ";
        temp=temp->previous;
    }
    cout<<"NULL";
}
void Linklist::deleteFromHead(){
    Node*temp=head;
    if(head==NULL){
        cout<<"\nEmpty List, Nothing to Delete!!!";
        return;
    }else if (head->next==NULL){
        delete(head);
        head=NULL;
        tail=NULL;
        return;
    }
    head=head->next;
    head->previous=NULL;
    delete(temp);
}
void Linklist::deleteFromTail(){
    if(head==NULL){
        cout<<"\nEmpty List, Nothing to Delete!!!";
        return;
    }else if (head->next==NULL){
        delete(head);
        head=NULL;
        tail=NULL;
        return;
    }
    Node*temp=tail;
    tail=tail->previous;
    tail->next=NULL;
    delete(temp);
}
void Linklist::deleteAtKth(int position){
    int i=0;
    Node *temp=head;
    if(head==NULL){
        cout<<"\nEmpty List, Nothing to Delete!!!";
        return;
    }else if (head->next==NULL){
        delete(head);
        head=NULL;
        tail=NULL;
        return;
    }
    while(++i!=(position-1))
        temp=temp->next;
    Node*temp2=temp->next;
    temp->next=temp->next->next;
    temp->next->previous=temp;
    delete(temp2);
}
int main(){
    Linklist list;
    list.insertionAtHead(10);
    list.insertionAtHead(20);
    list.insertionAtHead(30);
    list.insertionAtHead(40);
    list.insertionAtHead(50);
    list.insertionAtHead(60);
    list.insertionAtHead(70);
    list.insertionAtHead(80);
    list.insertionAtHead(90);
    list.insertionAtHead(100);
    cout<<"\nPrinting list from Head ::-->"<<endl;
    list.printDataFromHead();
    cout<<"\nPrinting list from Tail ::-->"<<endl;
    list.printDataFromTail();

    list.deleteFromHead();
    list.deleteFromHead();
    cout<<"\n\nAfter Deleting from Head : -> ";
    cout<<"\nPrinting list from Head ::-->"<<endl;
    list.printDataFromHead();
    cout<<"\nPrinting list from Tail ::-->"<<endl;
    list.printDataFromTail();

    list.deleteFromTail();
    list.deleteFromTail();
    cout<<"\n\nAfter Deleting from Tail : -> ";
    cout<<"\nPrinting list from Head ::-->"<<endl;
    list.printDataFromHead();
    cout<<"\nPrinting list from Tail ::-->"<<endl;
    list.printDataFromTail();

    list.deleteAtKth(3);
    list.deleteAtKth(3);
    cout<<"\n\nAfter Deleting from 3rd,4th position : -> ";
    cout<<"\nPrinting list from Head ::-->"<<endl;
    list.printDataFromHead();
    cout<<"\nPrinting list from Tail ::-->"<<endl;
    list.printDataFromTail();
    return 0;
}