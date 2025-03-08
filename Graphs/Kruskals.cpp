#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> graph;
vector<int> arr;
vector<int> ranked;
int vertices, edges;
static bool comp(vector<int> v1, vector<int> v2){
    return v1[2] < v2[2];
}
int findLeader(int a){
    if(arr[a] == a) return a;
    arr[a] = findLeader(arr[a]);
    return arr[a];
}

void kruskal(vector<vector<int>>& answer){
    vector<vector<int>> g = graph;
    sort(g.begin(), g.end(), comp);
    int ed = 0;
    for(int i = 0; i < graph.size() - 1 && ed < vertices - 1; i++){
        int source = g[i][0], destination = g[i][1];
        if(findLeader(source) != findLeader(destination)){
            ed++;
            answer.push_back({source, destination, g[i][2]});
            arr[findLeader(destination)] = findLeader(source);
        }
    }
}
int main(){
    cout<<"Enter the number of Vertices : ",
    cin>>vertices;
    cout<<"Enter the number of Edges : ",
    cin>>edges;
    graph.resize(edges, vector<int>(3));
    arr.resize(vertices);
    ranked.resize(vertices, 1);
    for(int i = 0; i < vertices; i++) arr[i] = i;
    for (int i = 0; i < edges; i++) {
        int a, b, w;
        cout << "Enter the Source, Destination and Weight of the Edge: ";
        cin >> a >> b >> w;
        graph[i] = {a, b, w}; 
    }
    vector<vector<int>> answer;
    kruskal(answer);
    for(auto i : answer){
        cout << i[0] << " -- " << i[1] << " (Weight: " << i[2] << ")\n";
    }
    return 0;
}