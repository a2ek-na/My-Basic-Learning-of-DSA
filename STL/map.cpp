#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string,long long int > map1;
    map1["Prerna"]=8628079302;
    map1["Nikhil"]=7876509815;
    map1["Sumit"]=7876810618;
    map1["Papa"]=9816454302;
    map1["Mummy"]=8219190433;
    map1.insert(make_pair("Abhi",7018271691));
    
    map<string,long long int>::iterator itr;
    itr=map1.begin();
    advance(itr,5);
    cout<<itr->first<<endl<<endl;
    cout<<"Name \t\t Phone Number"<<endl;
    for(auto element:map1)
        cout<<element.first<<"\t\t"<<element.second<<endl;
    return 0;
}