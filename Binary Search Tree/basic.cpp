#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(){}
    Node(int val) : data(val), left(NULL), right(NULL){}
};

class BinarySearchTree : private Node{
    public:
    Node* root;
    BinarySearchTree(): root(NULL){}
    void insertion(int val);
    void inOrder(Node*);
    void preOrder(Node*);
    void postOrder(Node*);
};

void BinarySearchTree :: insertion(int val){
    Node* newNode = new Node(val);
    if(root == NULL){
        root =  newNode;
        return; 
    }

    Node* temp = root;
    while(true){
        if(val >= temp->data) {
            if(temp->right == NULL) break;
            temp = temp->right;
        }

        else{
            if(temp->left == NULL) break;
            temp = temp ->left;
        }
    }

    if(val >= temp->data) temp->right = newNode;
    else temp->left = newNode;

    return;
}

void BinarySearchTree::inOrder(Node *r){
    if(r==NULL) return;
    inOrder(r->left);
    cout<<r->data<<" ";
    inOrder(r->right);
    return;
}

void BinarySearchTree::preOrder(Node *r){
    if(r==NULL) return;
    cout<<r->data<<" ";
    preOrder(r->left);
    preOrder(r->right);
    return;
}
void BinarySearchTree::postOrder(Node *r){
    if(r==NULL) return;
    postOrder(r->left);
    postOrder(r->right);
    cout<<r->data<<" ";
    return;
}

int main(){
    BinarySearchTree bst;
    bst.insertion(10);
    bst.insertion(50);
    bst.insertion(20);
    bst.insertion(12);
    bst.insertion(1);
    bst.insertion(51);
    bst.insertion(81);
    bst.insertion(71);
    bst.preOrder(bst.root);
    cout<<endl;
    bst.inOrder(bst.root);
    cout<<endl;
    bst.postOrder(bst.root);
    return 0;
}