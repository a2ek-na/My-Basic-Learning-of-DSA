#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string str1,str2;
    ifstream in("alpha(a).txt");
    getline(in,str2);
    in.close();
    cout<<"Initially, the file contain -> "<<str2
        <<"\nEnter the name u want to change with in the file : ",
        getline(cin,str1);
    ofstream out("alpha(a).txt");
    out<<"My name is "<<str1;
    out.close();
    ifstream hin("alpha(a).txt");
    getline(hin,str2);
    cout<<"Now the content of the file is changed to ,\ncontent --> "<<str2;
    return 0;
}