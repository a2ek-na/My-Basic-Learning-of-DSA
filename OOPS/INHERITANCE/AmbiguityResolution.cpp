#include<iostream>
using namespace std ;
class base1{
    public:
    void greet(void){
        cout<<"How are You....";
    }
};
class base2{
    public:
    void greet(void){
        cout<<"Kaise Ho....";
    }
};

class derived : public base1, public base2{
    public:
    void greet(void){
        base1::greet();
    }
    void greet(int){
        base2::greet();
    }
};
int main(){
    derived object1;
    cout<<"This will call function greet from base class 1 --> \n";
    object1.greet();
    cout<<"\n";
    object1.base1::greet();
    cout<<"\n\n\nThis will call function greet from base class 2 --> \n";
    object1.greet(2);
    cout<<"\n";
    object1.base2::greet();
    return 0;
}