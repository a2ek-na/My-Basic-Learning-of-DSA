#include<iostream>
using namespace std;
class complex{
    int real,imaginary;
    public:
    void setData(int,int);
    void getData();
};
void complex::setData(int x,int y){
    real=x;
    imaginary=y;
}
void complex::getData(){
    cout<<"The imaginary number is : "<<real<<"+"<<imaginary<<"i"<<endl;
}
int main(){
    complex object;
    complex *ptr=&object;
    ptr->setData(5+3,65);
    ptr->getData();
    return 0;
}