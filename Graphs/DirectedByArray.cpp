#include<iostream>
#include<vector>
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

void addEdge(vector<vector<int>> &graph, int src, int dest, int wt){
    graph[src][dest] = wt;
    return;
}

void printGraph(vector<vector<int>> &graph){
    cout<<"\n\nX  ";
    for(int i = 0; i < graph.size(); i++)cout<<i<<"  ";
    cout<<endl;
    for(int i = 0; i < graph.size(); i++){
        cout<<i<<"  ";
        for(int j = 0; j < graph[i].size(); j++) cout<<graph[i][j]<<"  ";
        cout<<endl;
    }
    return;
}
int main(){
    int vertices, option, source, destination, weight;
    cout<<"Enter the number of vertices in the Graph :- ",
    cin>>vertices;
    vector<vector<int>> graph(vertices, vector<int> (vertices, 0));
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
                cout<<"Enter the weight of this Edge : ",
                cin>>weight;
                addEdge(graph , source, destination, weight);
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