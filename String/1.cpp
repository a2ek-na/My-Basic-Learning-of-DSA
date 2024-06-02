//Sorting of strings
#include<iostream>
#include<vector>
#include<string>
using namespace std;
string sort(string question){
    int i,num,j=0;
    vector<int> array(26,0);
    int str;
    //Stroing Frequency
    for(i=0;i<question.length();i++){
        num=question[i] - 'a';
        array[num]++;
    }

    //Sorting The Array
    for(i=0;i<26;i++){
        while(array[i]--){
            question[j++]= i+'a';
        }
    }

    return question;
}
int main(){
    string str;
    cout<<"Enter the String"<<endl;
    getline(cin,str);
    cout<<"\nYour Sorted String is --> "
    <<sort(str);

}