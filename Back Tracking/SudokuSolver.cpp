#include<iostream>
#include<vector>
using namespace std;
bool canWePlaceNum(vector<vector<char>> &grid, int r, int c, int data){
    for(int i = 0; i<=8 ;i++){
        if(grid[i][c] == data) return false;
    } 

    for(int i = 0; i<=8 ;i++){
        if(grid[r][i] == data) return false;
    } 

    int ro = (r/3) *3;
    int co = (c/3) *3;

    for(int i = ro; i<ro+3; i++){
        for(int j = co; j<co+3; j++){
            if(grid[i][j] == data) return false;
        }
    }
    return true;
}
bool sudokuSolver(vector<vector<char>> &grid, int row, int column){
    if(column  == 9) return sudokuSolver(grid, row+1, 0);
    if(row == grid.size()){
        for(int i = 0; i<grid.size(); i++){
            for(int j = 0; j<grid.size(); j++) cout<<grid[i][j]<<"  ";
            cout<<endl;
        }
        return true;
    }

    if(grid[row][column] =='.'){
        for(int num = 1; num <=9; num++){
            if(canWePlaceNum(grid, row, column, num+'0')){
                grid[row][column] = '0'+num;
                if(sudokuSolver(grid, row, column+1)) return true;
                grid[row][column] = '.';
            } 
        }
        return false;
    }else{
        return sudokuSolver(grid, row, column+1);
    }
}
int main(){
    vector<vector<char>> puzzle(9,vector<char>(9 , '.'));
    sudokuSolver(puzzle,0,0);
    return 0;
}