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
void justGreater(Node *temp, int &exprectedAnswer, int key){
    if(temp == NULL) return ;
    for(auto i : temp->childrens){
        if(i->data > key && exprectedAnswer > i->data) exprectedAnswer = i->data;
        justGreater(i,exprectedAnswer,key);
    }
    return;
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

    gt.root->childrens[0]->childrens[0]->childrens.push_back(new Node(110)); 
    gt.root->childrens[0]->childrens[0]->childrens.push_back(new Node(120)); 
    gt.root->childrens[0]->childrens[1]->childrens.push_back(new Node(130)); 
    gt.root->childrens[1]->childrens[1]->childrens.push_back(new Node(140)); 
    gt.root->childrens[1]->childrens[1]->childrens.push_back(new Node(150)); 
    gt.root->childrens[2]->childrens.push_back(new Node(160)); 
    gt.root->childrens[2]->childrens.push_back(new Node(170)); 
    gt.root->childrens[2]->childrens.push_back(new Node(180)); 
    gt.root->childrens[2]->childrens.push_back(new Node(190)); 
    gt.root->childrens[3]->childrens.push_back(new Node(200));

    gt.printLevelQrder();
    int answer = INT16_MAX;
    justGreater(gt.root,answer,2000);
    cout<<endl<<endl<<answer;
    return 0;
}