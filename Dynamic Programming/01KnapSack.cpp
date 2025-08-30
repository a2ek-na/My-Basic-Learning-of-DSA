#include<iostream>
#include<vector>
using namespace std;
void solve(const vector<vector<int>> &item, int capacity, int index, int &answer, int cost){
    if(capacity < 0) return;
    if(index == item.size()){
        if(answer < cost) answer = cost;
        return;
    }

    //include
    solve(item, capacity-item[index][0], index+1, answer, cost + item[index][1]);
    
    //exclude
   solve(item, capacity, index+1, answer, cost ); 
   return;
}

int main(){
    vector<vector<int>> items = {
        {6, 5},    // Item 0
        {5, 3},    // Item 1
        {1, 4},    // Item 2
        {5, 9},    // Item 3
        {6, 6},   // Item 4
        {5, 1},   // Item 5
        {9, 1},   // Item 6
    };
    int answer = -1;
    solve(items, 63, 0, answer, 0);
    cout<<"Final Answer ->> "<<answer;
    return 0;
}