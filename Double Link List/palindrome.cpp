#include<iostream>
using namespace std;
class Node{
    public:
    int value;
    Node*next,*previous;
    Node(int data):value(data),next(NULL),previous(NULL){};
};
class LinkList{
    public:
    Node *head, *tail;
    LinkList():head(NULL),tail(NULL){}
    void insertion(int);
    void print();
    void check();
};
void LinkList::insertion(int data){
    Node*newNode=new Node(data);
    if(head==NULL ){
        head=newNode;
        tail=head;
        return;
    }
    tail->next=newNode;
    newNode->previous=tail;
    tail=newNode;
}
void LinkList::print(){
    Node*temp=head;
    cout<<"NULL <-> ";
    while(temp){
        cout<<temp->value<<" <-> ";
        temp=temp->next;
    }
    cout<<"NULL";
}
void LinkList::check(){
    Node *temp1=head,*temp2=tail;

    while((temp1!=temp2)){
        if(temp1->value!=temp2->value){
            cout<<"\n\nThe list is not a Palindrome...";
            return;
        }
        temp1=temp1->next;
        temp2=temp2->previous;
    }
    cout<<"\n\nThe list is a Palindrome...";
    return;
}
int main(){
    LinkList list;
    list.insertion(10);
    list.insertion(20);
    list.insertion(30);
    list.insertion(40);
    list.insertion(40);
    list.insertion(30);
    list.insertion(20);
    list.insertion(10);
    list.print();
    list.check();
    return 0;
}