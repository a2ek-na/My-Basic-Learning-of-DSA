#include<iostream>
using namespace std;
class Node{
    public:
    int value;
    Node* next;

    Node(int);
};
Node ::Node(int data){
    value=data;
    next=NULL;
}
int main(){
    Node*n;
    n=new Node(16);
    cout<<n->value<<" "<<n->next;
    return 0;
}