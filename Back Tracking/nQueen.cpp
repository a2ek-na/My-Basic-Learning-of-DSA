#include<iostream>
#include<vector>
using namespace std;
bool canPlaceQueens(vector<vector<char>> &grid, int row, int column){
    for(int i = row-1; i>=0 ; i--){
        if(grid[i][column]=='Q') return false;
    }

    for(int i = row-1 ,j = column-1; i>=0 && j>=0 ;i--,j--){
        if(grid[i][j] == 'Q') return false;
    }

    for(int i =row-1 , j= column+1; i>=0 && column < grid.size(); i--, j++){
        if(grid[i][j] == 'Q') return false;
    }

    return true;
}
void nQueens(vector<vector<char>> &grid, int currentRow, int n){
    if(currentRow == n){
        for(int i =0; i<n; i++){
            for(int j=0; j<n; j++) cout<<grid[i][j]<<"  ";
            cout<<endl;
        }
        cout<<"************\n\n";
        return ;
    }

    for(int i = 0; i<n; i++){
        if(canPlaceQueens(grid,currentRow, i)){
            grid[currentRow][i] = 'Q';
            nQueens(grid,currentRow+1,n);
            grid[currentRow][i] = '.';
        }
    }
    return;
}
int main(){
    int size = 5;
    vector<vector<char>> puzzle(size,vector<char>(size, '.'));
    nQueens(puzzle, 0, size);
    return 0;
}