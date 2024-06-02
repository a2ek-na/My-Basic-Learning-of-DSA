#include<iostream>
using namespace std;
class Node{
    public:
    int value;
    Node* next;
    Node(int data):value(data),next(NULL){};
    Node():value(int(NULL)),next(NULL){};
};


class Linklist{
    public:
    Node *head;
    Linklist():head(NULL){};
    void insertAtTail(int data);
    void printList();
};


void Linklist::insertAtTail(int data ){
    Node *newNode=new Node(data);
    if(head==NULL){
        head=newNode;
        return;
    }
    Node*temp=head;
    while(temp->next!=NULL)
    temp=temp->next;
    temp->next=newNode;
    return;
}
void Linklist::printList(){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->value<<" --> ";
        temp=temp->next;
    }
    cout<<"NULL";
    return;
}

bool equalOrNot(Linklist l1, Linklist l2){
    Node *temp1=l1.head,*temp2=l2.head;
    // bool answer=true;
    while(temp1!=NULL && temp2!=NULL){
        if(temp1->value!=temp2->value)
            return false;
        temp1=temp1->next;
        temp2=temp2->next;
    }
    return (temp1==NULL && temp2==NULL);
}
int main(){
    Linklist list1,list2;
    list1.insertAtTail(10);
    list1.insertAtTail(20);
    list1.insertAtTail(30);
    list1.insertAtTail(40);
    list1.insertAtTail(50);
    list1.insertAtTail(50);
    list2.insertAtTail(10);
    list2.insertAtTail(20);
    list2.insertAtTail(30);
    list2.insertAtTail(40);
    list2.insertAtTail(50);
    list2.insertAtTail(50);
    list1.printList();
    cout<<endl;
    list2.printList();
    if(equalOrNot(list1,list2)==false)
    cout<<"\nThey are not Equal !!";
    else
    cout<<"\nThey are Equal..";
    return 0;
}