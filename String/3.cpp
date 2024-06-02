#include<iostream>
#include<string>
#include<vector>
using namespace std;
int isomorphs(string str1, string str2){
    vector<int> array1(128,-1),array2(128,-1);
    int i,index;
    if(str1.length()!=str2.length())
    return 1;
    for(i=0;i<str1.length();i++){
        if(array1[str1[i]]!=array2[str2[i]])
            return 1;
        array1[str1[i]]=i;
        array2[str2[i]]=i;
    }
    // for(i=0;i<128;i++){
    //     if(array1[i]!=array2[i])
    //     return 1;
    // }
    return 0;
}
int main(){
    string str1,str2;
    cout<<"Enter the String-1 : "<<endl;
    getline(cin,str1);
    cout<<"Enter the String-2 : "<<endl;
    getline(cin,str2);
    int answer=isomorphs(str1,str2);
    if(answer==0)
    cout<<"\nYES , both the Strings are Isomorphs of each other...";
    else
    cout<<"NO ,both the Strings are not Isomorphs of each other...";
    return 0;
}