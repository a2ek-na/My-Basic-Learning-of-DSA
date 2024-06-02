#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* link;
    Node(int val) : data(val), link(NULL){}
};

Node* reverseLL(Node *h, Node* &ans){
    if(h == NULL){
        ans =  h;
        return h;
    } 
    Node* temp = reverseLL(h->link,ans);
    temp->link = h;
    return h;
}
int main(){
    Node *head = new Node(10);
    head->link = new Node(20);
    head->link->link = new Node(30);
    head->link->link->link = new Node(40);
    head->link->link->link->link = new Node(50);
    head->link->link->link->link->link = new Node(60);
    Node *temp= head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->link;
    }
    Node *ans = NULL;
    reverseLL(head,ans);
    cout<<endl<<endl;
    temp = ans;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->link;
    }

    return 0 ;
}