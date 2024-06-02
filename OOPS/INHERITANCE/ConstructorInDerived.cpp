#include<iostream>
using namespace std ;
class Base1{
    private:
    int data1;
    public:
    Base1(int );
};
Base1::Base1(int n){
    data1=n;
    cout<<"Constructor of Base1 called "<<endl;
    cout<<"DATA1 --> "<<data1<<endl;
}


class Base2{
    private:
    int data2;
    public:
    Base2(int );
};
Base2::Base2(int n){
    data2=n;
    cout<<"Constructor of Base2 called "<<endl;
    cout<<"DATA2 --> "<<data2<<endl;
}

class derived:public Base1,public Base2{//This run constructor of base1 first
// class derived:public Base2,public Base1{//This run constructor of base2 first
    int derived1,derived2;
    public:
    derived (int,int,int,int);
};
derived::derived(int arg1,int arg2,int arg3,int arg4):Base2(arg2),Base1(arg1){
    derived1=arg3;
    derived2=arg4;
    cout<<"Constructor of Derived class called "<<endl;
    cout<<"Derived 1 --> "<<derived1<<endl;
    cout<<"Derived 2 --> "<<derived2<<endl;
}
int main(){
    derived object(9,8,6,3);
    return 0;
}