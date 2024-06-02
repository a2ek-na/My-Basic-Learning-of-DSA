#include<iostream>
#include<vector>
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
    void insertion(Node*& ,vector<int> &, int ,int);
    void inOrder(Node*);
    void preOrder(Node*);
    void postOrder(Node*);
};

void BinarySearchTree :: insertion(Node *&root,vector<int> &v, int start, int end){
    if(end<start) return;
    
    int mid = (start+end)/2;
    root = new Node(v[mid]);

    insertion(root->left, v, start,mid-1);
    insertion(root->right, v, mid+1,end);
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
    vector<int> vec ={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    bst.insertion(bst.root,vec,0, vec.size()-1);
    bst.preOrder(bst.root);
    cout<<endl;
    bst.inOrder(bst.root);
    cout<<endl;
    bst.postOrder(bst.root);
    return 0;
}