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
        <<"Press 3 for finding all the paths from one vertex to the other,\n"
        <<"Press 4 to exit.\n"
        <<"Choose the correct option : ";
        return;
}

void dfs(vector<list<int>> graph, vector<bool> &visited, int src, int dest, vector<vector<int>> &answer, vector<int> &currentPath){
    currentPath.push_back(src);
    if( src == dest){
        answer.push_back(currentPath);
        currentPath.pop_back();
        return;
    }
    visited[src] = true; 
    for(int i : graph[src]){
        if(visited[i] == false) dfs(graph, visited, i, dest ,answer, currentPath);
    } 
    visited[src] = false;
    currentPath.pop_back();
    return;
} 


void addEdge(vector<list<int>> &graph, int src, int dest){
    graph[src].push_back(dest);
    graph[dest].push_back(src);
    return;
}

void printGraph(vector<list<int>> &graph){
    for(int i = 0; i < int(graph.size()); i++){
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
    vector<vector<int>> answer ;
    bool flag = true;
    vector<bool> visited(vertices, false);
    vector<int> current;
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
                cout<<"Enter the Source of the Searching : ",
                cin>>source;
                cout<<"Enter the Destination of the Searching : ",
                cin>>destination;
                current.clear();
                answer.clear();
                dfs(graph, visited, source, destination, answer, current);
                for(vector<int> i : answer){
                    for(int j : i) cout<<j<<" -> ";
                    cout<<"Reached\n";
                }
                break;

            case 4:
                flag = false;
                break;

            default: 
                cout<<"Invalid Option!!!\nPlease choose the correct Option.";
                break;
        }
    }
    return 0;
}