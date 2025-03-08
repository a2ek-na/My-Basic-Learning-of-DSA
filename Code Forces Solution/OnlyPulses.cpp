#include<iostream>
#include<vector>
using namespace std;
int main(){
    int count = 1, mini;
    cin>>count;
    
    for(int j = 0; j < count; j++){
        vector<int> arr(3);
        for(int i = 0; i < 3; i++) cin>>arr[i];
        for(int i = 0; i < 5; i++){
            mini = 0;
            if (arr[mini] > arr[1])mini = 1;
            if (arr[mini] > arr[2])mini = 2;
            arr[mini]++;
        }
        cout<<arr[0]*arr[1]*arr[2]<<endl;
    }
    return 0;
}
