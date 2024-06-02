#include<iostream>
#include<queue>
#define dash cout<<"\n-----------------------------------------------------------------\n";
using namespace std;

// ====================================Displaying Functions==========================================
void displayChoiceOfChild(){
    cout<<"Choose '0' to choose Node \n";
    cout<<"Choose '1' to insert Node to Left\n";
    cout<<"Choose '2' to insert Node to Right\n";
    cout<<"\nChoose the Correct Option : ";
}

void displayMenu(){
    dash;
    cout<<"Choose '1' to insert a new Node\n";
    cout<<"Choose '2' to Print the Tree\n";
    cout<<"Choose '3' to Exit.\n";
    cout<<"\nChoose the correct option : ";
}

void displayPrintMenu(){
    cout<<"Choose '1' for Pre-order Traversal\n"
        <<"Choose '2' for In-order Traversal\n"
        <<"Choose '3' for Post-order Traversal\n"
        <<"Choose '4' for Level-order Traversal.\n"
    <<"\nChoose the correct option : ";
    return;
}

// ===========================Node Class=============================================
class Node{
    public:
    int data;
    Node *left, *right;
    Node(int val){
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// =====================Class Binarytree===========================
class Binarytree{
    Node *root;
    public:
    Binarytree();
    void insertNode(int);
    void inorderTraversal(Node*);
    void preorderTraversal(Node*);
    void postorderTraversal(Node*);
    void levelorderTraversal(Node*);
    void printTree();
};

Binarytree::Binarytree(){
    this->root = NULL;
    return ;
}

void Binarytree::insertNode(int val){
    Node *newNode = new Node(val);
    if(root==NULL){
        root = newNode;
        cout<<val<<" Added as Main Root of the Tree.\n";
        return;
    }
    
    Node *temp = root;
    int  option, height=1;
    bool flag = true;
    cout<<"\nPointer is at the Root Node having Data "<<temp->data<<endl;
    while(flag && temp != NULL){
        displayChoiceOfChild();
        cin>>option;
        switch(option){
            case 0:
                cout<<"\nNode having Data "<<temp->data<<" reached.\n";
                flag = false;
            break;

            case 1:
                if(temp->left == NULL){
                    cout<<"Invalid Node Position. \n";
                    return;
                }
                else{
                    temp = temp -> left;
                    height++;
                    cout<<"Current Pointer reached the Node having Data "<<temp->data<<" present at level ->"<<height<<endl;
                }
            break;

            case 2:
                if(temp->right == NULL){
                    cout<<"Invalid Node Position. \n";
                    return;
                }
                else{
                    temp = temp -> right;
                    height++;
                    cout<<"\nCurrent Pointer reached the Node having Data "<<temp->data<<" present at level -> "<<height<<endl;
                }
            break;
        }
    }

    cout<<"Choose '1' to insert Node to Left\n";
    cout<<"Choose '2' to insert Node to Right\n";
    cout<<"\nChoose the Correct Option : ";
    cin>>option;
    if(option == 1){
        temp->left = newNode;
        cout<<"Node inserted at level -> "<<height+1<<"  & to the left of the Current Node";
        return;
    }else if(option == 2){
        temp->right = newNode;
        cout<<"Node inserted at level -> "<<height+1<<" & to the right of the Current Node";
        return;
    }
}

void Binarytree::printTree(){
    if(root==NULL){
        cout<<"Nothing to Print, Empty Tree";
        return;
    }
    displayPrintMenu();
    int option;
    cin>>option;
    switch(option){
        case 1:
            cout<<"Pre-order Traversal ->  ";
            preorderTraversal(this->root);
            break;

        case 2:
            cout<<"In-order Traversal ->  ";
            inorderTraversal(this->root);
            break;

        case 3:
            cout<<"Post-order Traversal ->  ";
            postorderTraversal(this->root);
            break;

        case 4:
            cout<<"Level-order Traversal ->  ";
            levelorderTraversal(this->root);
            break;
    }
}

void Binarytree::inorderTraversal(Node* root) {
    if (root == NULL)
        return;
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

void Binarytree::preorderTraversal(Node* root) {
    if (root == NULL)
        return;
    cout << root->data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void Binarytree::postorderTraversal(Node* root) {
    if (root == NULL)
        return;
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->data << " ";
}

void Binarytree::levelorderTraversal(Node* root){
    if(root == NULL) return;
    queue<Node*> que;

    que.push(root);

    while(!que.empty()){
        int nodeAtCurrentLevel = que.size();
        cout<<endl;
        while(nodeAtCurrentLevel--){
            cout<<que.front()->data<<" ";
            if(que.front() -> right) que.push(que.front() -> right);
            if(que.front() -> left) que.push(que.front() -> left);
            que.pop();
        } 
        cout<<endl;
    }

}
// ==================================================================================
int main(){
    cout<<"Abhishek Gupta \n22bcs005\n"; 
    Binarytree tree;
    int option, value;
    bool flag=true;
    while(flag){
        displayMenu();
        cin>>option;
        switch (option)
        {
        case 1:
            cout<<"Enter the Data : ",
            cin>>value;
            tree.insertNode(value);
            break;
        
        case 2:
            tree.printTree();
            cout << endl;
            break;
        case 3:
            flag = false;
            break;
        default:
            cout << "Invalid choice. Please choose again." << endl;
            break;
        }
    }
    return 0;
}