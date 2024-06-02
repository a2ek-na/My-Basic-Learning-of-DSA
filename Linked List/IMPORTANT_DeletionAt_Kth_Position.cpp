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
    void printList();
    void deleteAtHead();
    void deleteAtTail();
    void deleteAtKth(int);
    void storage();
};
void Linklist::deleteAtHead(){
    Node *temp=head;
    if(head==NULL){
        cout<<"Empty List,Nothing to Delete...";
        return ;
    }
    else{
        head=head->next;
        free(temp);
    }
    return;
}
void Linklist::deleteAtTail(){
    Node *temp=head;
    if(head==NULL){
        cout<<"Empty List,Nothing to Delete...";
        return ;
    }
    else{
        while((temp->next)->next!=NULL)
        temp=temp->next;
        Node *lastElement=temp->next;
        free(lastElement);
        temp->next=NULL;
    }
}
void Linklist::deleteAtKth(int index){
    int i=1;
    Node* temp=head;
    if(index==1){
        head=temp->next;
        free(temp);
    }
    else {
        while(i++!=(index-1))
        temp=temp->next;
        Node*temp1=(temp->next)->next;
        free(temp->next);
        temp->next=temp1;
    }
    return;
}

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
void Linklist::printList(){
    Node* temp=head;
    if(head==NULL){
        cout<<"List is EMPTY..."<<endl;
        return;
    }
    do{
        cout<<temp->value<<"-->";
        temp=temp->next;
    } while(temp->next!=NULL);
        cout<<temp->value<<"-->"<<"NULL"<<endl;
    return ;
}
void Linklist::storage(){
    Node*temp=head;
    int storage=0;
    while(temp->next!=NULL){
        storage+=sizeof(temp);
        temp=temp->next;
    }
    cout<<"Total Memory Consumed -> "<<storage<<" bytes\n";
}


int main(){
    Linklist myList;
    cout<<"\nHere, I am following 1-indexing System "<<endl;
    {
        myList.insertAtHead(10);
        myList.insertAtHead(20);
        myList.insertAtHead(30);
        myList.insertAtHead(40);
        myList.insertAtHead(50);
        myList.insertAtHead(60);
        myList.insertAtHead(70);
        myList.insertAtHead(80);
        myList.insertAtHead(90);
        myList.insertAtHead(100);
        myList.insertAtHead(110);
        myList.insertAtHead(120);
    }
    myList.printList();
    // myList.storage();
    myList.deleteAtHead();
    myList.printList();
    // myList.storage();
    myList.deleteAtTail();
    myList.printList();
    // myList.storage();
    myList.deleteAtKth(1);
    myList.printList();
    // myList.storage();

    return 0;
}