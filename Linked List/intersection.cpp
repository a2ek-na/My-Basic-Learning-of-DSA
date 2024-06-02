#include<iostream>
using namespace std;
class Node{
    public:
    int value;
    Node* next;
    Node(int data):value(data),next(NULL){};
    Node():value(int(NULL)),next(NULL){};
    Node(Node *given):value(given->value),next(given->next){};
};

class Linklist{
    public:
    Node *head;
    Linklist():head(NULL){};
    void insertAtTail(int data);
    void printList();
    void mergeTwoLists(Linklist , int);
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
        cout<<temp->value<<" at "<<&temp->value<<" --> ";
        temp=temp->next;
    }
    cout<<"NULL";
    return;
}
void Linklist::mergeTwoLists(Linklist givenList,int nodeOfIntersection){
    int num=1;
    Node *temp=givenList.head,*temp2=head;
    while(num!=nodeOfIntersection){
        num++;
        temp=temp->next;
    }
    while(temp2->next!=NULL)
    temp2=temp2->next;
    temp2->next=temp;
    return;
}

int lengthOfList(Linklist list){
    Node *temp=list.head;
    int length=0;
    while(temp!=NULL){
        length++;
        temp=temp->next;
    }
    return length;
}

Node *intersection(Linklist l1, Linklist l2){
    Node *temp1=l1.head,*temp2=l2.head;
    int num1=lengthOfList(l1);
    int num2=lengthOfList(l2);
    if(num1>num2){
        while(num1!=num2){
            temp1=temp1->next;
            num1--;       
        }
    }
    else if(num1<num2){
        while(num1!=num2){
            temp2=temp2->next;
            num2--;       
        }
    }
    while(temp1!=NULL){
        if(temp1==temp2)
        return temp1;
        temp1=temp1->next;
        temp2=temp2->next;
    }
    return NULL;
}
int main(){
    Linklist list1,list2;
    list1.insertAtTail(10);
    list1.insertAtTail(30);
    list1.insertAtTail(50);
    list1.insertAtTail(70);
    list1.insertAtTail(80);
    list1.insertAtTail(90);
    list1.insertAtTail(100);

    list2.insertAtTail(20);
    list2.insertAtTail(40);
    list2.mergeTwoLists(list1,4);
    // list2.head->next->next=list1.head->next->next->next;
    
    list1.printList();
    cout<<endl<<endl;
    list2.printList();

    Node intersectionPoint;
    intersectionPoint=intersection(list1,list2);

    cout<<"\n\nValue of intersection of Lists is :->"<<intersectionPoint.value;
    return 0;
}