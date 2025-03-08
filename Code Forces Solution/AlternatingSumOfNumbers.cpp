#include<iostream>
#include<vector>
using namespace std; 
int main(){
    int testCases, size, odd , even ;
    vector<int> v;
    cin>>testCases;
    for(int i = 0; i < testCases; i++){
        cin>>size;
        odd = 0;
        even = 0;
        v.resize(size);
        for(int i = 0; i < size; i++) cin>>v[i];

        for(int i = 0; i < size; i+=2) odd+=v[i];

        for(int i = 1; i < size; i+=2) even+=v[i];

        cout<<odd-even<<endl;
    }
    return 0;
}