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

void addEdge(vector<list<pair<int, int>>> &graph, int src, int dest, int wt){
    graph[src].push_back(make_pair(dest, wt));
    graph[dest].push_back(make_pair(src, wt));
    return;
}

void printGraph(vector<list<pair<int, int>>> &graph){
    cout<<"\nPrinting the Graph in the form of {{source --> (destination , weight)}}";
    for(int i = 0; i < graph.size(); i++){
        cout<<endl<<i<<" --> ";
        for(pair<int,int> ans : graph[i]) cout<<"{ "<<ans.first<<", "<<ans.second<<" }, ";
        cout<<endl;
    }
    return;
}
int main(){
    int vertices, option, source, destination, weight;
    cout<<"Enter the number of vertices in the Graph :- ",
    cin>>vertices;
    vector<list<pair<int, int>>> graph(vertices, list<pair<int, int>> {});
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
                cout<<"Enter the Weight of this Edge : ",
                cin>>weight;
                
                addEdge(graph , source, destination, weight);
                cout<<"Edge Added...";
                break;

            case 2:
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