#include<iostream>
#include<queue>

using namespace std;
class Node{
    public: 
    int data;
    Node *left;
    Node *right;
    Node (int val){
        data = val;
        left = right = NULL;
    }
};
void levelOrderTraversal(Node* root){
    if(root == NULL)return;
    queue<Node*> que;
    que.push(root);

    while (!que.empty()){
        int currentSize = que.size();
        while(currentSize--){
            if(currentSize == 0) cout<<que.front()->data<<" ";
            if(que.front()->left) que.push(que.front()->left);
            if(que.front()->right) que.push(que.front()->right);
            que.pop();
        }
        cout<<endl;
    }
    
}
int main(){
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->left->right = new Node(60);
    root->left->left = new Node(50);
    root->left->right = new Node(100);

    levelOrderTraversal(root);
    return 0;
}


//       10
//   20     30
// 50     40
//           60