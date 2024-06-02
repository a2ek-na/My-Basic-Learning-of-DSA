#include<iostream>
using namespace std ;
void print(int number)
{
    if (number==1)
    {
        cout<<endl<<number<<endl;
        return;
    }
    print (number-1);
    cout<<number<<endl;
    return ;

}
int main()
{
    int num=6;
    // cin>>num;
    print(num);
    return 0;
}