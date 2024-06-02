#include<iostream>
using namespace std;
class complexNumber{
    private:
    int real, img;
    public:
    friend complexNumber complexBySum (complexNumber o1,complexNumber o2);
    void setData(int num1,int num2);
    void print(); 
};
void complexNumber:: setData(int num1,int num2)
{
    real=num1;
    img=num2;
    return;
}
void complexNumber:: print()
{
    cout<<"YOUR COMPLEX NUMBER IS --> "<<real<<" + "<<img<<"i";
    return ;
}
complexNumber complexBySum(complexNumber o1, complexNumber o2)
{
    complexNumber o3;
    o3.setData((o1.real+o2.real),(o1.img+o2.img));
    return o3;
}
int main()
{
    complexNumber complex1,complex2,complex3;
    complex1.setData(15,16);
    complex1.print();
    cout<<endl;

    complex2.setData(15,16);
    complex2.print();

    complex3= complexBySum(complex1,complex2);

    cout<<endl;
    complex3.print();
    return 0;
}
