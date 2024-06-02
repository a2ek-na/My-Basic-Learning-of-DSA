#include<iostream>
#include<stack>
using namespace std;
class Queue{
    public:
    stack<int> que;
    void pushQ(int val);
    void popQ();
    int frontQ();

    int size(){
        return que.size();
    }
};

void Queue::pushQ(int val){
    this->que.push(val);
    return;
}

void Queue::popQ(){
    if(this->que.size() == 1){
        cout<<"Dequeued Element -> "<<this->que.top()<<endl;
        this->que.pop();
        return;
    }
    int temp = this->que.top();
    this->que.pop();
    popQ();
    this->que.push(temp);
    return;
}

int Queue::frontQ(){
    int answer;
    if(this->que.size()==1){
        answer = this->que.top();
        return answer;
    }
    int temp = this->que.top();
    this->que.pop();
    answer = frontQ();
    this->que.push(temp); 
    return answer;
}

int main(){
    Queue q;
    q.pushQ(100);
    q.pushQ(10);
    q.pushQ(200);
    q.pushQ(40);
    q.pushQ(45);
    q.pushQ(4);
    cout<<q.frontQ()<<endl;
    q.popQ();
    cout<<q.frontQ()<<endl;
    return 0 ;
}