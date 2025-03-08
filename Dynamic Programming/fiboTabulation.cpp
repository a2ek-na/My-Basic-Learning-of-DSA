#include<iostream>
#include<vector>
using namespace std;
int main(){
    int num;
    cout<<"Enter the value of the number of which you want the result of Fibonacci Series : ",
    cin>>num;
    vector<int> dp(num + 1);
    dp[0] = 0;
    dp[1] = 1;
    for(int i = 2; i <= num; i++)dp[i] = dp[i-1] + dp[i-2];
    cout<<"\nThe "<<num<<"th number in the Series is -->> "<<dp[num];
    return 0;
}

