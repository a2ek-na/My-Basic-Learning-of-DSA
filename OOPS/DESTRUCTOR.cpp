#include<iostream>
using namespace std;
class classs{
    static int count;
    public:
    classs(void){
        count++;
        cout<<"Constructor called for object " <<count<<endl<<"Hence creating object "<<count<<endl;
    }
    ~classs(void){
        cout<<"Destructor called for object "<<count<<endl<<"Hence destroying object "<<count<<endl;
        count--;
    }
};
int classs::count=0;
int main(){
    cout<<"We are in the main function."<<endl;
    classs o1,o2;
    {
        cout<<"\n\nNow we are inside the inner block.\n";
        classs o3,o4;
        {
            cout<<"\n\nNow are inside the innermost block.\n";
            classs o6,o5;
            cout<<"\n\nExiting the innermost block.\n";
        }
        cout<<"\n\nExiting the outermost block.\n";
    }
    cout<<"\n\nAgain back to the main function.\n";
    return 0;
}