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
    void insertionAtTail(int);  
    void insertionAtHead(int);
    void insertionAtKth(int,int);  
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
void Linklist::insertionAtTail(int data){
    Node *newNode=new Node(data);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    newNode->previous=tail;
    tail=newNode;
}
void Linklist::insertionAtKth(int data,int position){
    int i=0;
    Node*temp=head, *newNode=new Node(data);
    while((++i)<position-1)
        temp=temp->next;
    newNode->next=temp->next;
    temp->next=newNode;
    
    newNode->previous=temp;
    newNode->next->previous=newNode;
};
void Linklist::printDataFromHead(){
    Node *temp=head;
    cout<<"NULL <-> ";
    while (temp!=NULL){
        cout<<temp->value<<" <-> ";
        temp=temp->next;
    }
    cout<<"NULL";
}
void Linklist::printDataFromTail(){
    Node*temp=tail;
    cout<<"NULL <-> ";
    while (temp!=NULL){
        cout<<temp->value<<" <-> ";
        temp=temp->previous;
    }
    cout<<"NULL";
}
int main(){
    Linklist list;
    list.insertionAtHead(10);
    list.insertionAtHead(20);
    list.insertionAtHead(30);
    list.insertionAtHead(40);
    list.insertionAtHead(50);
    list.insertionAtTail(60);
    list.insertionAtTail(70);
    list.insertionAtTail(80);
    list.insertionAtTail(90);
    list.insertionAtTail(100);
    list.insertionAtKth(2000,5);
    list.insertionAtKth(1000,7);
    list.insertionAtKth(3000,9);
    cout<<"\nPrinting list from Head ::-->"<<endl;
    list.printDataFromHead();
    cout<<"\n\nPrinting list from Tail ::-->"<<endl;
    list.printDataFromTail();
    return 0;
}