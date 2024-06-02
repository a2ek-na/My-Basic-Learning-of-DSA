#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> pq1;
    pq1.push(20);
    pq1.push(2);
    pq1.push(03);
    pq1.push(30);
    pq1.push(50);
    pq1.push(8);
    pq1.push(100);
    cout<<pq1.top()<<endl;
    cout<<"Printing pq1 -> ";
     while (!pq1.empty()){
        cout<<pq1.top()<<" ";
        pq1.pop();
    }
    cout<<endl<<endl;
    priority_queue<int, vector<int> ,greater<int>> pq2;
    pq2.push(20);
    pq2.push(2);
    pq2.push(03);
    pq2.push(30);
    pq2.push(50);
    pq2.push(8);
    pq2.push(100);
    cout<<endl<<pq2.top();
    cout<<"Printing pq2 -> ";
    while (!pq2.empty()){
        cout<<pq2.top()<<" ";
        pq2.pop();
    }
    
    return 0;
}