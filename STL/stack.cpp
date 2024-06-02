#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<char> st;
    st.push('a');
    st.push('n');
    st.push('r');
    st.push('e');
    st.push('r');
    st.push('P');
    cout<<st.size()<<endl;
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
    cout<<st.top();
}