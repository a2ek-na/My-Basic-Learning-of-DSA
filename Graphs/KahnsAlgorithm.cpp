#include<bits/stdc++.h>
using namespace std;
vector<list<int>> graph;
int vertices;

void addEdge(int a, int b, bool biDirectional = true){
    if (a >= vertices || b >= vertices || a < 0 || b < 0) {
        cout << "Invalid vertex index!" << endl;
        return;
    }
    graph[a].push_back(b);
    if(biDirectional) graph[b].push_back(a);
    return;
}

void countInDegree(vector<int>& inDegree){
    for(auto i : graph){
        for(int j : i) inDegree[j]++;
    }
    return;
}

void topologicalSort(vector<int>& inDegree){
    queue<int> que;
    for(int i = 0; i < vertices; i++){
        if(inDegree[i] == 0) que.push(i);
    }

    cout << "Starting --> ";
    while(!que.empty()){
        int current = que.front();
        que.pop();
        cout << current << " -> ";
        
        for(int i : graph[current]){
            if(--inDegree[i] == 0) que.push(i);
        }
    }

    for(auto i : inDegree){
        if(i != 0){
            cout << "Can-not be Resolved Further...\n";
            return;
        }
    }
    
    cout << "Resolved..." << endl;
    return;
}

int main(){
    cout << "Enter the Number of Vertices: ";
    cin >> vertices;
    
    int edges;
    cout << "Enter the Number of Edges: ";
    cin >> edges;
    
    graph.resize(vertices, list<int>());
    
    while(edges--){
        int a, b;
        cout << "Enter the Source Vertex: ";
        cin >> a;
        cout << "Enter the Destination Vertex: ";
        cin >> b;
        addEdge(a, b, false);  
    }
    
    vector<int> inDegree(vertices, 0);
    countInDegree(inDegree);
    topologicalSort(inDegree);
    
    return 0;
}
