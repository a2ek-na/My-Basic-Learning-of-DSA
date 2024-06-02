#include<iostream>
using namespace std;
class Node{
    public:
    Node *next,*previous;
    int value;
    Node(int data):value(data),next(NULL),previous(NULL){}

};

class LinkList{
    Node *head,*tail;
    public:
    LinkList():head(NULL),tail(NULL){}
    void print();
    void insertion(int);
    void reverse();
};

void LinkList::insertion(int data){
    Node *newNode=new Node(data),*temp=head;
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    newNode->previous=tail;
    tail=newNode;
}

void LinkList::print(){
    Node*temp=head;
    cout<<"NULL <-> ";
    while(temp!=NULL){
        cout<<temp->value<<" <-> ";
        temp=temp->next;
    }
    cout<<"NULL";
}
void LinkList::reverse(){
    if(head==NULL || tail==NULL){
        cout<<"NO Linklist to be REVERSED : ";
        return ;
    }
    Node*current1=head,*current2;
    while(current1!=NULL){
        current2=current1->next;
        current1->next=current1->previous;
        current1->previous=current2;
        current1=current2;
    }
    head=tail;
    tail=current1;
    return ;
}


int main(){
    LinkList list;
    list.insertion(10);
    list.insertion(20);
    list.insertion(30);
    list.insertion(40);
    list.insertion(50);
    list.insertion(60);
    list.insertion(70);
    list.insertion(80);
    list.insertion(90);
    cout<<"\nOriginal List :: ";
    list.print();
    list.reverse();
    cout<<"\n\nAfter Reversing :: ";
    list.print();
    return 0;
}