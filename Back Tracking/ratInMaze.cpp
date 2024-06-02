#include<iostream>
#include<vector>
using namespace std;
int path = 0;
void ratInMaze(vector<vector<int>> &grid , int i ,int j){
    int size=grid.size();
    if(i == size-1 && j == size-1) {
        path++;
        return;
    } 
    if (i < 0 || j < 0 || i >= size || j >= size || grid[i][j] != 1) {
        return; 
    }
    grid[i][j]=2;
    ratInMaze(grid,i-1,j);
    ratInMaze(grid,i+1,j);
    ratInMaze(grid,i,j-1);
    ratInMaze(grid,i,j+1);
    grid[i][j]=1;
    return;
}
int main(){
    vector<vector<int>> maze = {{1,1,1,1} , {0,1,1,1} , {1,1,0,1} , {1,1,0,1}};
    ratInMaze(maze,0,0);
    cout<<"Total Possible Paths are --> "<<path;
    return 0;
}