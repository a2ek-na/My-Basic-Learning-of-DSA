#include<iostream>
using namespace std;
class Base{
    private:
    int data1;
    protected:
    int data2;
    public:
    int data3;
};

class Derived : public Base{
    // data1=10;
    public:
    void setData(int ,int, int);
};
void Derived::setData(int x,int y,int z){
    // data1=x;THIS IS SO BECAUSE ,PRIVATE DATA-MEMBERS ARE NEVER IN HERTITED.
    data2=y;//THIS IS SO BECAUSE ,PROTECTED DATA-MEMBERS CAN BE HERTITED.
    data3=z;
}

int main(){
    Base b1;
    // b1.data2;data2 BEING PROTECTED MEMBER ,SO ACTS AS A PRIVATE MEMBER AND CAN'T BE USED DIRECTLY
    return 0;
}