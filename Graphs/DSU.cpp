#include<vector>
#include<iostream>
using namespace std;
int operation = 0;
void displayMenu(){
    cout<<"\n--------------------------------------------------------------------------------------\n";
    cout<<"Enter 1 to Perform Union Operation,"
        <<"\nEnter 2 to Perform FInd Operation,"
        <<"\nEnter 3 to Exit..., "
        <<"\nChoose the Correct Option -> ";
}
int findDSU(vector<int>& array, int num){
    cout<<"IN findDSU "<<++operation<<endl;
    if(array[num] == num) return num; 
    int leader = findDSU(array, array[num]);
    array[num] = leader;
    return leader;
}

void unionDSU(vector<int>& array, vector<int>& rank, int num1, int num2){
    cout<<"IN unionDSU "<<++operation<<endl;
    int leader1 = findDSU(array, num1);
    int leader2 = findDSU(array, num2);

    if (leader1 != leader2) {  
        if (rank[leader1] > rank[leader2]) 
            array[leader2] = leader1; 
        
        else if (rank[leader1] < rank[leader2]) 
            array[leader1] = leader2; 

        else {
            array[leader2] = leader1; 
            rank[leader1]++; 
        }
    }
    return;
}
int main(){
    int size, option, num1, num2, before;
    cout<<"Enter the size of the Graph : ",
    cin>>size;
    vector<int> array(size);
    vector<int> rank(size, 1);

    for(int i = 0; i < size; i++) array[i] = i;
    bool flag = true;
    operation = 0;
    while(flag){
        displayMenu();
        cin>>option;
        switch (option){
        case 1:
            cout<<"Enter the element of First Group : ",
            cin>>num1;
            cout<<"Enter the element of Second Group : ",
            cin>>num2;
            before = operation;
            unionDSU(array, rank, num1, num2);
            cout<<"Array -> ";
            for(auto i : array) cout<<i<<" ";
            cout<<"\nRank-> ";
            for(auto i : rank) cout<<i<<" ";
            cout<<"\nTotal Operations Involved --> "<<operation-before;
            break;
        
        case 2:
            cout<<"Enter the Element of which you want to find the representative of the group : ",
            cin>>num1;
            before = operation;
            num2 = findDSU(array, num1);
            cout<<"Leader of "<<num1<<" is "<<num2<<endl;
            cout<<"Array -> ";
            for(auto i : array) cout<<i<<" ";
            cout<<"\nRank-> ";
            for(auto i : rank) cout<<i<<" ";
            cout<<"\nTotal Operations Involved --> "<<operation-before;
            break;

        case 3: 
            flag = false;
            break;

        default:
            cout<<"Invalid ENTRY!!!\nPlease choose the corrected one...";
            break;
        }
    }
    return 0;
}