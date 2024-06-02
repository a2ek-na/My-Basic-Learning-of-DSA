#include<iostream>
#define dash cout<<"\n\n----------------------------------------------------------";
using namespace std;
    class Node{
    public:
    int data;
    Node *next;
    Node (int val):data(val),next(NULL){};
    Node ():data((int)NULL),next(NULL){};
};
class MinStack{
    int capacityOfStack , existingMinima , currSize;
    Node *head; 
    public:
    MinStack(int);
    void push(int);
    void pop();
    int getTop();
    int currentSize();
    int minimum();
};

MinStack :: MinStack(int passsedValue){
    this->capacityOfStack=passsedValue;
    currSize=0;
    head=NULL;
}

void MinStack::push(int passsedValue){
    if(currSize>capacityOfStack-1){
        cout<<"OverFlow Occur, No More element can be Added ...\n";
        return;
    }
    if(currSize == 0){
        Node *newNode=new Node(passsedValue);
        newNode->next=head;
        head=newNode;
        existingMinima = passsedValue;
    }
    else{
        Node *newNode=new Node(passsedValue - existingMinima);
        newNode->next=head;
        head=newNode;
    }
    currSize++;
    if(passsedValue < existingMinima)
        existingMinima = passsedValue;
    
    return;
}

void MinStack::pop(){
    if(head==NULL){
        cout<<"UnderFlow Condition!!! \nNothing to be Popped Out \n";
        return;
    }
    if(currSize == 1)
        cout<<"\nRemoved Element is : "<<head->data<<endl;
    
    else{
        if(head->data < 0)
        existingMinima = existingMinima - head->data;
        cout<<"\nRemoved Element is : "<<head->data + existingMinima<<endl;
    }

    
    
    Node *toBeRemoved=head;
    head=head->next;
    delete(toBeRemoved);
    currSize--;
}

int MinStack::getTop(){
    return head->data;
}

int MinStack::currentSize(){
    return currSize;
}

int MinStack::minimum(){
    return existingMinima;
}


void displayMenu(){
    dash;
    cout<<"\n\tMENU"
        <<"\nChoose '1' for Pushing element to Stack "
        <<"\nChoose '2' for Popping element from Stack "
        <<"\nChoose '3' for Printing Top element of the Stack "
        <<"\nChoose '4' for Minimum element of the Stack "
        <<"\nChoose '5' for printing size of the Stack "
        <<"\nChoose '6' to Exit. "
    <<"\n\nChoose the Correct option : ";
    return;
}

int main(){
    int size, option, input;
    bool flag=true;
    cout<<"Enter the maximum size of the stack : ",
    cin>>size;
    MinStack myStack(size);
    while(flag){
        displayMenu();
        cin>>option;
        switch (option)
        {
        case 1:
            cout<<"Enter the element that you,want to insert in the Stack : ",
            cin>>input;
            myStack.push(input);
            break;

        case 2:
            myStack.pop();
            break;

        case 3:
            cout<<"Top -> "<<myStack.getTop();
            break;

        case 4:
            cout<<"Minimum Element -> "<<myStack.minimum();
            break;

        case 5:
            cout<<"Current Size of the Stack -> "<<myStack.currentSize();
            break;

        case 6:
            cout<<"\nExiting...";
            flag = false;
            break;

        default:
        cout<<"Enter a Valid option...\n";
            break;
        }
    }
    return 0;
}