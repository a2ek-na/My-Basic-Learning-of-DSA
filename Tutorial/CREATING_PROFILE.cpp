/*Creating profile, by asking questions from the user
created on 12th of November 2022*/
#include<iostream>

using namespace std;

int main()
{
    string a, b, c, d, e ;
    cout<<"What is your name? \n" ;
    cin>>a;

    cout<<"What is your father's name? \n " ;
    cin>>b;

    cout<<"What is your mother's name? \n " ;
    cin>>c;

    cout<<"What is your age? \n " ;
    cin>>d;

    cout<<"What is the name of your college or school? \n " ;
    cin>>e;

    cout<<"According to your entered data, your profile is as given below: \n" ;
    cout<<"NAME: " <<a;
    cout<<"\nFATHER'S NAME: " <<b;
    cout<<"\nMOTHER'S NAME: " <<c;
    cout<<"\nAGE: " <<d;
    cout<<"\nCOLLEGE NAME: " <<e;

    return 0 ;

    }
    //"Here, '<<' is known as the INSERTION OPERATOR"
    //"Here, '>>' is known as the EXTRACTION OPERATOR"