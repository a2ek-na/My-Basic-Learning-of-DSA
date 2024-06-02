#include<iostream>
using namespace std;
class Node{
    public:
    int value;
    Node *next;
    Node(int data):value(data),next(NULL){}
};
class Linklist{
    public:
    Node*head;
    Linklist():head(NULL){}
    void insertion(int);
    void print();
    void deleteion(int);
};

void Linklist::insertion(int data){
    Node *newNode=new Node(data),*temp=head;
    if(head==NULL){
        head=newNode;
        head->next=head;
        return;
    }
    while(temp->next!=head)
        temp=temp->next;
    temp->next=newNode;
    newNode->next=head;
    return ;
}
void Linklist:: print(){
    Node*temp=head->next;
    cout<<head->value<<" at "<<&head->value<<" -> ";
    while(temp!=head){
        cout<<temp->value<<" -> ";
        temp=temp->next;
    }
    cout<<temp->value<<" at "<<&(temp->value);
    return;
}

void Linklist::deleteion(int index){
    Node*temp=head;
    int count=1;
    if(index==1){
        Node*temp2=head;
        while(temp->next!=head)
            temp=temp->next;
        head=head->next;
        temp->next=head;
        delete(temp2);
        return;
    }
    while(count!=index-1){
        temp=temp->next;
        count++;
    }
    Node*temp2=temp->next;
    temp->next=temp2->next;
    delete(temp2);
}

int main(){
    Linklist mylist;
    mylist.insertion(10);
    mylist.insertion(20);
    mylist.insertion(30);
    mylist.insertion(40);
    mylist.insertion(50);
    mylist.insertion(60);
    cout<<endl;
    mylist.print();
    cout<<"\nAfter Deletion: \n";
    mylist.deleteion(1);
    mylist.print();
    cout<<endl;
    mylist.deleteion(5);
    mylist.print();
    return 0;
}