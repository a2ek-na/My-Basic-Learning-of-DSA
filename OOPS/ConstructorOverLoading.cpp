#include<iostream>
using namespace std ;

class simple{
    int data1,data2,data3;
    public:
    simple(){
        cout<<"\nNO ARGUMENT PASSED : ";
    }
    simple(int a){
        cout<<"\nONE ARGUMENT PASSED --> ";
        data1=a;
    }
    simple(int a,int b){
        cout<<"\nTWO ARGUMENT PASSED --> ";
        data1=a;
        data2=b;
    }
    simple(int a ,int b,int c){
        cout<<"\nTHREE ARGUMENT PASSED --> ";
        data1=a;
        data2=b;
        data3=c;
    }

    void printData(void){
        cout<<"\nDATA VALUES ARE --> "<<data1<<" , "<<data2<<" and "<<data3;  
    }
};
int main(){
    simple o1(10);
    o1.printData();
    simple o2(10,20);
    o2.printData();
    simple o3(10,20,30);
    o3.printData();
    simple o4;
    o4.printData();
    return 0;
}