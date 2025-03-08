#include<bits/stdc++.h>
using namespace std;
vector<list<pair<int, int>>> graph;
int vertices, edges;
void primsAlgo(vector<vector<int>>& answer, int source){
    vector<int> parent(vertices, -1);
    vector<int> distance(vertices, INT_MAX);
    vector<bool> marked(vertices, false);

    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> que;
    que.push(make_pair(0, make_pair(0, source)));
    int edges = 0; 
    while(!que.empty() && edges < vertices ){
        pair<int, pair<int, int>> front = que.top();
        que.pop();
        if (marked[front.second.second]) continue;
        marked[front.second.second] = true;
        parent[front.second.second] = front.second.first;
        distance[front.second.second] = front.first;
        edges++;
        for(auto i : graph[front.second.second])
            que.push(make_pair(i.second, make_pair(front.second.second, i.first)));
    }
    for(int i = 1; i < vertices; i++){
        if(distance[i]!=INT_MAX ) answer.push_back({parent[i], i, distance[i]});
    }
    return;
}
int main(){
    cout<<"Enter the number of Vertices : ",
    cin>>vertices;
    cout<<"Enter the number of Edges : ",
    cin>>edges;
    graph.resize(vertices, list<pair<int,int>> {});
    for (int i = 0; i < edges; i++) {
        int a, b, w;
        cout << "Enter the Source, Destination and Weight of the Edge: ";
        cin >> a >> b >> w;
        graph[a].push_back(make_pair(b, w));
        graph[b].push_back(make_pair(a, w));
    }
    vector<vector<int>> answer;
    primsAlgo(answer, 0);
    for(auto i : answer){
        cout << i[0] << " -- " << i[1] << " (Weight: " << i[2] << ")\n";
    }
    return 0;
}






// #include <bits/stdc++.h>
// using namespace std;

// vector<vector<pair<int, int>>> graph;
// int vertices;

// void primsAlgo(vector<vector<int>>& answer, int source) {
//     vector<int> parent(vertices, -1);
//     vector<int> distance(vertices, INT_MAX);
//     priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> minHeap;

//     distance[source] = 0;
//     minHeap.push({0, source}); // {weight, current}

//     int edgesCount = 0;

//     while (!minHeap.empty() && edgesCount < vertices - 1) {
//         auto front = minHeap.top();
//         minHeap.pop();
//         int currVertex = front.second;

//         if (distance[currVertex] == -1) continue; // Skip already visited vertex
//         distance[currVertex] = -1; // Mark as visited
//         edgesCount++;

//         for (const auto& neighbor : graph[currVertex]) {
//             int adjVertex = neighbor.first;
//             int edgeWeight = neighbor.second;

//             if (distance[adjVertex] != -1 && edgeWeight < distance[adjVertex]) {
//                 distance[adjVertex] = edgeWeight; // Update distance
//                 parent[adjVertex] = currVertex;   // Update parent
//                 minHeap.push({edgeWeight, adjVertex});
//             }
//         }
//     }

//     for (int i = 1; i < vertices; i++) {
//         if (parent[i] != -1) {
//             answer.push_back({parent[i], i, distance[i]});
//         }
//     }
// }

// int main() {
//     cout << "Enter the number of Vertices: ";
//     cin >> vertices;
//     int edges;
//     cout << "Enter the number of Edges: ";
//     cin >> edges;

//     graph.resize(vertices);

//     for (int i = 0; i < edges; i++) {
//         int a, b, w;
//         cout << "Enter the Source, Destination and Weight of the Edge: ";
//         cin >> a >> b >> w;
//         graph[a].emplace_back(b, w);
//         graph[b].emplace_back(a, w);
//     }

//     vector<vector<int>> answer;
//     primsAlgo(answer, 0);

//     for (const auto& edge : answer) {
//         cout << edge[0] << " -- " << edge[1] << " (Weight: " << edge[2] << ")\n";
//     }

//     return 0;
// }
