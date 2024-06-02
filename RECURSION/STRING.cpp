#include<iostream>
using namespace std ;
string alpha(string &stri ,int ind, int num)
{
    if (ind == num) return"";
    string check ="";
    check+=stri[ind];
    return (stri[ind]=='a'? "" : check ) +alpha(stri,ind+1,num);
    
}
int main()
{
    string str="abcdax";
    cout<<"STRING WITHOUT 'a' IS --> " <<alpha(str,0,6);
    return 0;
}