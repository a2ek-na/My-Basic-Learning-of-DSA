#include<iostream>
#include<vector>
using namespace std;
vector<int> dp;
int fibo(int n){
    if(dp[n] != -1) return dp[n];
    dp[n] = fibo(n - 1) + fibo(n - 2);
    return dp[n];
}
int main(){
    int num;
    cout<<"Enter the value of the number of which you want the result of Fibonacci Series : ",
    cin>>num;
    dp.resize(num + 1, -1);
    dp[0] = 0;
    dp[1] = 1;
    cout<<"\nThe "<<num<<"th number in the Series is -->> "<<fibo(num);
    return 0;
}