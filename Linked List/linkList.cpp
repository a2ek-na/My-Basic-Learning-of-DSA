#include<iostream>
using namespace std;
class Node{
    public:
    int value;
    Node *next;
    Node(int data){
        this->value=data;
        this->next=NULL;
    }
    Node(){
        value=0;
        next=NULL;
    }
};

class Linklist{
    Node* head;
    public:
    Linklist(){head=NULL;}
    void insertNode(int);
    void printList();
};
void Linklist::insertNode(int data){
    Node* newNode=new Node(data);
    if(head==NULL){
        head=newNode;
        return;
    }
    else{
        Node* temp=head;
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next=newNode;
        return;
    }
}
void Linklist::printList(){
    Node* temp=head;
    int i=1;
    if(head==NULL){
        cout<<"Empty List...";
        return;
    }
    while(temp->next!=NULL){
        cout<<"Element No.-"<<i++<<" --> "<<temp->value<<" present at memory address : -> "<<temp->next<<endl;
        temp=temp->next;
    }
    return;
}
int main(){
    int i;
    Linklist mylist;
    for(i=1;i<=10;i++){
        mylist.insertNode(i*10);
    }
    mylist.printList();
    return 0;
}