#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int value;
    Node *next,*previous;
    Node(int data):value(data),next(NULL),previous(NULL){};  
    Node():value(int(NULL)),next(NULL),previous(NULL){};  
};
class Linklist{
    public:
    Node *head,*tail;
    Linklist():head(NULL),tail(NULL){};
    void insertionAtTail(int);  
    void print();
    vector<Node*> check(int);
};
vector<Node*> Linklist::check(int target){
    Node *ptr1=head,*ptr2=tail;
    vector<Node*> answer(2,NULL);
    while(ptr1<ptr2){
        if((ptr1->value + ptr2->value) == target){
            answer[0]=(ptr1);
            answer[1]=(ptr2);
            return answer;
        }
        else if((ptr1->value + ptr2->value) > target)
            ptr2=ptr2->previous;
        else if((ptr1->value + ptr2->value) < target)
            ptr1=ptr1->next;
    }
    return answer;
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
void Linklist::print(){
    Node *temp=head;
    cout<<"NULL <-> ";
    while (temp!=NULL){
        cout<<temp->value<<" <-> ";
        temp=temp->next;
    }
    cout<<"NULL";
}
int main(){
    Linklist mylist;
    mylist.insertionAtTail(2);
    mylist.insertionAtTail(3);
    mylist.insertionAtTail(5);
    mylist.insertionAtTail(6);
    mylist.insertionAtTail(7);
    mylist.insertionAtTail(8);
    mylist.print();
    vector<Node*> answer=mylist.check(13);
    cout<<"\nAnswer --> : "<<answer[0]->value<<" "<<answer[1]->value;
    return 0;
}
