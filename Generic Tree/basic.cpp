#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    vector<Node*> childrens;
    Node(){}
    Node(int val):data(val){}
};

class genericTree{
    public:
    Node *root;
    genericTree():root(NULL){}
    void insert(int val,Node *temp){
        Node *newNode =  new Node(val);
        if(root==NULL) {
            root = newNode;
            return;
        }
    }
    void printLevelQrder(){
        queue<Node*> que;
        que.push(root);
        cout<<"Printing Level Order : \n";
        while(!que.empty()){
            int size =  que.size();
            for(int i = 0; i<size; i++){
                Node *current;
                current = que.front();
                que.pop();
                for(auto num: current->childrens) que.push(num);
                cout<<current->data<<" ";
            }
            cout<<endl;
        }
    }
};

void preOrder(Node *temp){
    if(temp==NULL) return;
    cout<<temp->data<<" ";
    for(auto i : temp->childrens) preOrder(i);
}
void postOrder(Node *temp){
    if(temp==NULL) return;
    for(auto i : temp->childrens) postOrder(i);
    cout<<temp->data<<" ";
}
void inOrder(Node *temp){
    if(temp==NULL) return;
    int size = temp->childrens.size();
    for(int i = 0; i<=size-1; i++) preOrder(temp->childrens[i]);
    cout<<temp->data<<" ";
    preOrder(temp->childrens[size]);
}

int main() {
    genericTree gt;
    gt.insert(10,gt.root);
    gt.root->childrens.push_back(new Node(20)); 
    gt.root->childrens.push_back(new Node(30)); 
    gt.root->childrens.push_back(new Node(100)); 
    gt.root->childrens.push_back(new Node(300)); 
    gt.root->childrens[0]->childrens.push_back(new Node(40)); 
    gt.root->childrens[0]->childrens.push_back(new Node(50));
    gt.root->childrens[1]->childrens.push_back(new Node(60)); 
    gt.root->childrens[1]->childrens.push_back(new Node(70)); 
    gt.root->childrens[1]->childrens.push_back(new Node(80)); 
    gt.root->childrens[1]->childrens.push_back(new Node(90)); 
    gt.printLevelQrder();
    cout<<"PreOrder  Traversal -> ";
    preOrder(gt.root);
    cout<<"\nPostOrder  Traversal -> ";
    postOrder(gt.root);
    cout<<"\nInOrder  Traversal -> ";
    inOrder(gt.root);
    return 0;
}