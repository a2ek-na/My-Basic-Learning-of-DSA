#include<iostream>
#include<vector>
#include<list>
#include<queue>
using namespace std;
#define dash cout<<"\n--------------------------------------------------------------------\n"
void displayMenu(){
    dash;
    cout<<"Press 1 to add a Edge in the Graph,\n"
        <<"Press 2 to Print the Graph,\n"
        <<"Press 3 for the Breadth First Traversing of the Graph,\n"
        <<"Press 4 for the Depth First Traversing of the Graph,\n"
        <<"Press 5 to exit.\n"
        <<"Choose the correct option : ";
        return;
}

void dfs(vector<list<int>> graph, vector<bool> &visited, int where){
    if(visited[where] == true) return;
    cout<<where<<" -> ";
    visited[where] = true;
    for(int i : graph[where]) dfs(graph, visited, i);
} 

void bfs(vector<list<int>> graph, int source){
    vector<bool> visited(graph.size() , false);
    queue<int> que;
    que.push(source);
    visited[source] = true;
    while(!que.empty()){
        int currentLevelSize = que.size();
        for(int i = 0; i < currentLevelSize; i++){
            cout<<que.front()<<" -> ";
            for(int num : graph[que.front()]){
                if(visited[num] == true) continue;
                que.push(num);
                visited[num] = true;
            } 
            que.pop();
        }
        cout<<"END...";
        cout<<endl;
    }
    return;
}

void addEdge(vector<list<int>> &graph, int src, int dest){
    graph[src].push_back(dest);
    graph[dest].push_back(src);
    return;
}

void printGraph(vector<list<int>> &graph){
    for(int i = 0; i < (int)graph.size(); i++){
        cout<<endl<<i<<" --> ";
        for(int ans : graph[i]) cout<<ans<<", ";
        cout<<endl;
    }
    return;
}
int main(){
    int vertices, option, source, destination;
    cout<<"Enter the number of vertices in the Graph :- ",
    cin>>vertices;
    vector<list<int>> graph(vertices, list<int> {});
    bool flag = true;
    vector<bool> visited(vertices, false);
    while(flag){
        displayMenu();
        cin>>option;
        switch (option){
            case 1: 
                cout<<"Enter the Source of the Edge : ",
                cin>>source;
                cout<<"Enter the Destination of the Edge : ",
                cin>>destination;
                addEdge(graph , source, destination);
                cout<<"Edge Added...";
                break;

            case 2:
                cout<<"Printing the Graph ... ";
                printGraph(graph);
                break;

            case 3:
                cout<<"Printing the Breadth First Traversing of the Graph --> ";
                bfs(graph, 0);
                break;

            case 4:
                cout<<"Printing the Depth First Traversing of the Graph --> ";
                dfs(graph, visited, 0);
                cout<<"END...";
                break;

            case 5:
                flag = false;
                break;

            default: 
                cout<<"Invalid Option!!!\nPlease choose the correct Option.";
                break;
        }
    }
    return 0;
}