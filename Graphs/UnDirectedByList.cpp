#include<iostream>
#include<vector>
#include<list>
using namespace std;
#define dash cout<<"\n--------------------------------------------------------------------\n"
void displayMenu(){
    dash;
    cout<<"Press 1 to add a Edge in the Graph,\n"
        <<"Press 2 to Print the Graph,\n"
        <<"Press 3 to exit.\n"
        <<"Choose the correct option : ";
        return;
}

void addEdge(vector<list<int>> &graph, int src, int dest){
    graph[src].push_back(dest);
    graph[dest].push_back(src);
    return;
}

void printGraph(vector<list<int>> &graph){
    for(int i = 0; i < graph.size(); i++){
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
                flag = false;
                break;

            default: 
                cout<<"Invalid Option!!!\nPlease choose the correct Option.";
                break;
        }
    }
    return 0;
}