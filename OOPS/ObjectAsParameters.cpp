#include<iostream>
using namespace std;
class ComplexNumber{
    private:
    int real,img;
    public:
    void setData(int num1,int num2)
    {
        real=num1;
        img=num2;
    }
    void setDataBySum(ComplexNumber o1,ComplexNumber o2)
    {
        real=o1.real+o2.real;
        img=o1.img+o2.img;
    }
    void print(void)
    {
        cout<<"COMPLEX NUMBER --> "<<real<<"+"<<img<<"i"<<endl;
    }
};
int main()
{
    ComplexNumber complex1,complex2,complex3,complex4,complex6,complex5;
    complex1.setData(5,6);
    complex1.print();
   
    complex2.setData(11,1);
    complex2.print();
    
    //HERE, I AM PASSING OBJECTS (complex1 and complex2) AS ARGUMENT TO THE FUNCTION SetDataBySum
    complex3.setDataBySum(complex1,complex2);
    complex3.print();
   
    cout<<endl;
    complex4.setData(9,25);
    complex4.print();
    
    complex5.setData(2,3);
    complex5.print();
    
    //HERE, I AM PASSING OBJECTS (complex4 and complex5) AS ARGUMENT TO THE FUNCTION SetDataBySum
    complex6.setDataBySum(complex4,complex5);
    complex6.print();
    return 0;
}