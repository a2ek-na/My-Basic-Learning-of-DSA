#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int tests, size,price,a;
    cin>>tests;
    for(int imp = 0; imp < tests; imp++){
        cin>>size>>price;
        vector<int> v;
        for(int i = 0; i<size; i++){
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(), v.end());
        long long answer = 0, temp, t;
 
        for(int i = 0, j = 0; i < size && j < size + 1;i++){
            j = i;
            temp = 0;
            while (j<size && v[j] == v[i]){
                temp+=v[j++];
                if(temp <= price) answer = max(answer, temp);
            }
            while (j<size && v[j] == v[i] + 1){
                temp+=v[j++];
                if(temp <= price) answer = max(answer, temp);
            }
        }
        cout<<answer<<endl;
    }
    return 0;
}