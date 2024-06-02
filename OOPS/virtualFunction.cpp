#include<iostream>
using namespace std;
class base{
    protected:
    int base_var;
    public:
    virtual void display(void);
};
void base::display(void){
    cout<<"Called from base class, base_var --> "<<base_var<<endl;
}
class derived:public base{
    int derived_var;
    public:
    void display();
};
void derived::display(){
    cout<<"Called from derived class, base_var --> "<<base_var<<endl;
    cout<<"Called from derived class, derived_var --> "<<derived_var<<endl;
}

int main(){
    base *ptrOfBase;
    derived object_derived;
    ptrOfBase=& object_derived;
    ptrOfBase->display();
    return 0;
}