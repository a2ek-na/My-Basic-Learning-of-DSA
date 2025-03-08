#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> graph;
int vertices;
vector<int> array;
vector<int> ranked;
void addEdge(int a, int b){
    graph.push_back({a, b});
    return;
}
int findDSU(int a){
    if(array[a] == a)return a;
    int leader = findDSU(array[a]);
    array[a] = leader;
    return leader;
}
bool Union(int a, int b){
    int leader1 = findDSU(a);
    int leader2 = findDSU(b);

    if(leader1 == leader2) return true;
    if(leader1 != leader2){
        if(ranked[leader1] > ranked[leader2])
            array[leader2] = leader1;

        else if (ranked[leader1] < ranked[leader2]) 
            array[leader1] = leader2; 

        else {
            array[leader2] = leader1; 
            ranked[leader1]++; 
        }
    }
    return false;
}
void detectCycle(){
    for(auto i : graph){
        if(Union(i[0], i[1])){
            cout<<"Cycle Detected...\n";
            return;
        }
    }
    cout<<"No Cycle Detected...\n";
    return;
}
int main(){
    cout<<"Enter the number of vertices : ",
    cin>>vertices;
    int edges;
    array.resize(vertices);
    ranked.resize(vertices, 1);
    for(int i = 0; i < vertices; i++) array[i] = i;
    cout<<"Enter the number of total Edges : ",
    cin>>edges;
    while(edges--){
        int a, b;
        cout<<"Enter the vertices : ",
        cin>>a>>b;
        addEdge(a, b);
    }
    detectCycle();
    return 0;
}