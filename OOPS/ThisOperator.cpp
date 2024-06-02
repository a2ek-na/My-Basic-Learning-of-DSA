#include<iostream>
using namespace std;
class A{
    int a,a;
    public:
    void setData(int);
    void setData1(int);
    void getData();
};
void A::setData(int a){
    a=a;
}
void A::setData1(int a){
    this->a=a;
}
void A ::getData(){
    cout<<"The value of a is "<<a;
}
int main(){
    A a;
    a.setData(16);
    a.getData();
    cout<<"\n\nThe above is showing some garbage value , because in the setData, the local function variable 'a' is prioritised "<<endl
        <<"Due to which it is not accessing the variable 'a' of the class ,Hence to solve this, we are going to use ||this|| pointer \n";
    a.setData1(16);
    a.getData();
    return 0;
}