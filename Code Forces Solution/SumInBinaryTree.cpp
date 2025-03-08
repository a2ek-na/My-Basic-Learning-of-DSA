#include<iostream>
#include<queue>
using namespace std;
class TreeNode{
   public:
   int data;
   TreeNode* left;
   TreeNode* right;
   TreeNode() : data(0), left(NULL), right(NULL){} 
   TreeNode(int val) : data(val), left(NULL), right(NULL) {} 
};
void buildTree(int size , TreeNode *root){
    queue<TreeNode*> que;
    int val = 2;
    que.push(root);
    while (true){
        TreeNode* currentNode = que.front();
        que.pop();
        if(val == size+1) break;;
        currentNode->left = new TreeNode(val++);
        if(val == size+1) break;;
        currentNode->right = new TreeNode(val++);
        que.push(currentNode->left);
        que.push(currentNode->right);
    }
    return;
}
void calculate(TreeNode* root, int size, int &answer, int &sum){
    if(size == root->data){
        answer = sum + root->data;
        return;
    }
    sum += root->data;
    if(root->left != NULL) calculate(root->left, size, answer, sum);
    if(root->right != NULL)calculate(root->right, size, answer, sum);
    sum -= root->data;
    return;
}
int main(){
    int test;
    cin>>test;
    TreeNode*root = new TreeNode(1);
    for(int i = 0; i < test; i++){
        int sizeOfTree ;
        cin>>sizeOfTree;
        buildTree(sizeOfTree, root);
        int answer; 
        int sum = 0;
        calculate(root, sizeOfTree, answer, sum);
        cout<<answer<<endl;
    }

    return 0;
}