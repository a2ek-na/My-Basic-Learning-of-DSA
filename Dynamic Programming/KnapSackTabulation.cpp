#include<iostream>
#include<vector>
using namespace std;
int KnapSack(vector<int> profit, vector<int> weight, int capacity){
    vector<vector<int>> Table(profit.size()+1, vector<int>(capacity + 1));
    

    for(int i = 0 ; i < capacity + 1; i++) Table[0][i] = 0;

    for(int i = 1; i < profit.size() + 1; i++){
        Table[i][0] = 0;
        for(int j = 1; j < capacity  + 1; j++){
            if(weight[i-1] > j) Table[i][j] = Table[i-1][j];
            else Table[i][j] = max(Table[i-1][j] , Table[i-1][j-weight[i-1]] + profit[i-1]);
        }
    }

    return Table[profit.size()][capacity];
}
int main(){
    vector<int> profit = { 10, 15, 40};
    vector<int> weight = {1, 2, 3};
    int Capacity = 6;

    int profitAns  = KnapSack(profit, weight, Capacity);

    cout<<"Maximum Profit that can be Gained -> "<<profitAns;
    return 0;
}