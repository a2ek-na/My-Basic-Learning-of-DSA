#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> set1;
    set1.insert(10);
    set1.insert(7);
    set1.insert(17);
    set1.insert(4924);
    set1.insert(1);
    set1.insert(65);
    set1.insert(65);
    set1.insert(65);
    set1.insert(65);

    cout<<"Size of the Set is -> "<<set1.size()<<endl;
    cout<<"Maximum Size of the Set is -> "<<set1.max_size()<<endl;

    cout<<"\nPrinting Elements of the SET...";
    
    cout<<"\n\tUsing For Each Loop : \n";
    for(int num :set1){
        cout<<num<<" ";
    }
    cout<<endl;


    set<int>::iterator itr;
    set1.erase(10);
    itr = set1.begin();
    advance(itr,3);
    set1.erase(itr);
    itr = set1.begin();
    set1.erase(itr++);
    // set1.erase(set1.begin());
    cout<<"\tUsing Iterators : \n";
    while(itr != set1.end()){
        cout<<*itr<<" ";
        itr++;
    }
    cout<<endl;

    return 0;
}