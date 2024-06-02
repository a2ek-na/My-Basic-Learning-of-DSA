//Anagram of Strings
//Re-Jumbled Words
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int anagram(string str1,string str2){
    vector<int> array1(26),array2(26);
    int i,index,j=26;
    if(str1.length()!=str2.length())
    return 1;
    else{
        for(i=0;i<str1.length();i++){
            index= str1[i] - 'a';
            array1[index]++;
        }
        for(i=0;i<str2.length();i++){
            index= str2[i] - 'a';
            array2[index]++;
        }
        for(i=0;i<26;i++){
            if(array1[j]!=array2[j])
            return i;
        }
    }
    return 0;
}
int main(){
    string str1,str2;
    cout<<"Enter the String-1 : "<<endl;
    getline(cin,str1);
    cout<<"Enter the String-2 : "<<endl;
    getline(cin,str2);
    int answer=anagram(str1,str2);
    if(answer==0)
    cout<<"\nYES , both the Strings are Anagrams of each other...";
    else
    cout<<"NO ,both the Strings are not Anagrams of each other...";
    return 0;
}