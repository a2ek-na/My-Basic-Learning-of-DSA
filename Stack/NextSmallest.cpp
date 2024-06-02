#include<iostream>
#include <vector>
#include<stack>
using namespace std;

vector<int> nextSmallestElement(vector<int> &array){
    int size = array.size();
    vector<int> output(size, -1);
    stack<int> stac;
    stac.push(0);

    for(int i =1; i <size; i++){
        while(!stac.empty() && array[i] < array[stac.top()]){
            output[stac.top()] = array[i];
            stac.pop(); 
        }
        stac.push(i);
    }

    return output;
} 
int main(){
    vector<int> array={4, 6, 3, 1, 0, 9, 5, 6, 7, 3, 2};
    vector<int> answer = nextSmallestElement(array);
    cout<<"Answer -> ";
    for(auto num: answer)
        cout<<num<<" ";
    return 0;
}