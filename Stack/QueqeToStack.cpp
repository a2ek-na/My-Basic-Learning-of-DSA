#include<iostream>
#include<deque>
using namespace std;
class Stack{ 
    deque<int> st;
    public:
    void pushS(int val);
    void popS();
    int topS();
    int sizeS(){
        return st.size();
    }
};

void Stack ::pushS(int val){
    st.push_front(val);
    return;
}

void Stack ::popS(){
    cout<<"Popped Element -> "<<st.front();
    st.pop_front();
    return;
}

int Stack ::topS(){
    return st.front();
}
int main(){
    Stack s;
    s.pushS(10);
    s.pushS(20);
    s.pushS(30);
    s.pushS(40);
    s.pushS(50);
    s.pushS(60);
    s.pushS(70);
    s.pushS(80);
    s.pushS(90);
    s.pushS(100);
    cout<<"\nTop -> "<<s.topS()<<endl;
    cout<<"Size -> "<<s.sizeS()<<endl;
    s.popS();
    cout<<"\nTop -> "<<s.topS()<<endl;
    cout<<"Size -> "<<s.sizeS()<<endl;
    s.popS();
    cout<<"\nTop -> "<<s.topS()<<endl;
    cout<<"Size -> "<<s.sizeS()<<endl;
    s.popS();
    cout<<"\nTop -> "<<s.topS()<<endl;
    cout<<"Size -> "<<s.sizeS()<<endl;
    s.popS();
    return 0;
}