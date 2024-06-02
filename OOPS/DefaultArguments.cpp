#include<iostream>
using namespace std ;
class simple{
    int data1,data2,data3;
    public:
    simple(int a=16,int b=16,int c=16)
    {
        data1=a;
        data2=b;
        data3=c;
    }
    void printData(void){
        cout<<"\nVALUES OF DATA ARE --> "<<data1<<" , "<<data2<<" and "<<data3;
    }
};
int main(){
    simple o1(1,2,3),o2(1,2),o3(1),o4;
    o1.printData();
    o2.printData();
    o3.printData();
    o4.printData();
    return 0;
}