#include<iostream>
using namespace std ;
class Base{
    int data1;
    public:
    int data2;
    void setData(int , int);
    int getData1();
    int getData2();
};
void Base::setData(int num1,int num2){
    data1=num1;
    data2=num2;
}
int Base::getData1(){
    return data1;
}
int Base::getData2(){
    return data2;
}

//HERE, I AM DECLARING THAT THE PUBLIC MEMBERS OF BASE CAN BE USED AS PUBLIC IN DERIVED::
class Derived : private Base{
    int data3;
    public:
    void process(int, int);
    void display();
};
void Derived::process(int num1,int num2){
    //So here, I am setting the value by passing it to the process function as it is a public function of derived class.And in the process function,I am using the setData function of the base class
    setData(num1,num2);
    // data3=data1*data2; THE ONLY PROBLEM IS THAT I AM DIRECTLY USING THE PRIVATE MEMBER OF BASE CLASS IN THE DERIVED CLASS WHICH IS NEVER POSSIBLE.
    data3=getData1()*data2;
    //THE PROBLEM IS SOLVED BECAUSE I AM USING THE PRIVATE MEMBER OF BASE CLASS IN THE DERIVED CLASS THROUGH A FUNCTION,PRESENT IN PUBLIC .
}
void Derived::display(){
    cout<<"VALUE OF DATA-1 --> "<<getData1()<<endl;
    cout<<"VALUE OF DATA-2 --> "<<getData2()<<endl;
    cout<<"VALUE AFTER MULTIPLYING "<<getData1()<<" and "<<getData2()<<" is  --> "<<data3<<endl<<endl;
}
int main(){
    Derived d1,d2;
    // d1.setData(10,20);Here,I can't use setData directly because setData is now a private member of derived class
    d1.process(10,20);
    d1.display();

    // d2.setData(30,50);Here,I can't use setData directly because setData is now a private member of derived class
    d2.process(30,50);
    d2.display();
    return 0;
}