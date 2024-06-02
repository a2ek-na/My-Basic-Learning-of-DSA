#include<iostream>
#include<vector>
using namespace std;

bool canWePlaceTheKnight(int TotalRows, int TotalColumns, vector<vector<char>> &grid, int currentRow,int currentColumn){
    if(currentRow-2>=0 && currentColumn+1>=0 && grid[currentRow-2][currentColumn+1] == 'K') return false;
    if(currentRow-2>=0 && currentColumn-1>=0 && grid[currentRow-2][currentColumn-1] == 'K') return false;
    if(currentRow-1>=0 && currentColumn+2>=0 && grid[currentRow-1][currentColumn+2] == 'K') return false;
    if(currentRow-1>=0 && currentColumn-2>=0 && grid[currentRow-1][currentColumn-2] == 'K') return false;
    return true;
}

void K_Knights(int TotalRows, int TotalColumns, vector<vector<char>> &grid, int currentRow,int currentColumn, int k){
    if(currentRow == TotalRows ) {
        if(k==0){
            for(int i=0; i<TotalRows; i++){
                for(int j=0; j<TotalColumns; j++)cout<<grid[i][j]<<"  ";
                cout<<endl; 
            }
            cout<<"\n********\n";
        }
        return;
    }
    
    if(currentColumn == TotalColumns){
        K_Knights(TotalRows, TotalColumns, grid,currentRow+1, 0, k);
        return;
    }

    if(canWePlaceTheKnight(TotalRows, TotalColumns, grid, currentRow, currentColumn)){
        grid[currentRow][currentColumn] = 'K';
        K_Knights(TotalRows, TotalColumns, grid, currentRow, currentColumn+1, k-1);
        grid[currentRow][currentColumn] = '.';
    }
    
    K_Knights(TotalRows, TotalColumns, grid, currentRow, currentColumn + 1, k);
    return ;
}
int main(){
    vector<vector<char>> puzzle (3, vector<char> (3,'.'));
    K_Knights(3, 3, puzzle, 0, 0, 4);
    return 0;
}