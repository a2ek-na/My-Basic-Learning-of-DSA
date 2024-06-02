#include<iostream>
using namespace std;
class Node{
    public:
    int value;
    Node* next;
    Node(){
        value=0;
        next=nullptr;
    }
    Node(int data){
        this->value=data;
        this->next=nullptr;
    }
};

class Linklist{
    Node*head;
    public:
    Linklist(){
        head=NULL;
    }
    void insertAtHead(int);
    void insertAtTail(int);
    void insertAtKth(int,int);
    void printList();
};

void Linklist::insertAtHead(int data){
    Node*newNode=new Node(data);
    if(head==NULL)
        head=newNode;
    else{
        newNode->next=head;
        head=newNode;
    }
    return;
}
void Linklist::insertAtTail(int data){
    Node*newNode=new Node(data);
    if(head==NULL)
        head=newNode;
    else{
        Node*temp=head;
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next=newNode;
        return ;
    }
}
void Linklist::insertAtKth(int data,int index){
    Node*temp=head,*newNode=new Node(data);
    int i=1;
    while ((i++)!=(index-1)){
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
}

void Linklist::printList(){
    Node* temp=head;
    int i=1;
    if(head==NULL){
        cout<<"List is EMPTY..."<<endl;
        return;
    }
    do{
        cout<<"Element Number- "<<i++<<" is --> "<<temp->value<<endl;
        temp=temp->next;
    } while(temp->next!=NULL);
    cout<<"Element Number- "<<i++<<" is --> "<<temp->value<<endl;
    return ;
}

int main(){
    Linklist myList;
    cout<<"Here, I am following 1-indexing System "<<endl;
    myList.insertAtHead(10);
    myList.insertAtHead(20);
    myList.insertAtHead(30);
    myList.insertAtHead(40);
    myList.insertAtHead(50);
    myList.insertAtHead(60);
    myList.insertAtHead(70);
    myList.insertAtTail(80);
    myList.insertAtTail(90);
    myList.insertAtTail(100);
    myList.insertAtTail(110);
    myList.insertAtTail(120);
    myList.insertAtTail(130);
    myList.insertAtTail(140);
    myList.insertAtTail(150);
    myList.insertAtTail(160);
    myList.insertAtKth(1000,10);
    myList.insertAtKth(2000,11);
    myList.insertAtKth(3000,12);
    myList.printList();
    return 0;
}