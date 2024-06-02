#include<iostream>
using namespace std;
class Complex{
    int real,imaginary;
    public:
    Complex(int,int);
    void getNumber();
    Complex(int ,int,Complex,Complex &);
};
Complex::Complex(int a,int b){
    real=a;
    imaginary=b;
}
void Complex::getNumber(){
    cout<<"Complex Number is : "<<real<<"+"<<imaginary<<"i\n";
}
Complex::Complex(int real,int imaginary,Complex number,Complex &result){
    result.real=this->real+number.real;
    result.imaginary=this->imaginary+number.imaginary;
}
int main(){
    Complex c1(129,219),result(23,74,c1,result);
    c1.getNumber();
    result.getNumber();
    return 0;
}