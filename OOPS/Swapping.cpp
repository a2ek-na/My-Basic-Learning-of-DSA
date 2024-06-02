#include<iostream>
using namespace std ;
class swa
{
    private:
    int d;
    public:
    void swapp(int *a,int *b, int *c)
    {
        d=*a;
        *a=*b;
        *b=*c;
        *c=d;
        return ;
    }
};
int main()
{
    int num1, num2,num3;
    cout<<"ENTER THE NUMBERs ONE BY ONE : ";
    cin>>num1>>num2>>num3;

    swa test;
    test.swapp(&num1,&num2,&num3);
    cout<<"AFTER SWAPPING --> \n";\
    cout<<"Num1 --> "<<num1;
    cout<<"\nNum2 --> "<<num2;
    cout<<"\nNum3 --> "<<num3;
    return 0;
}