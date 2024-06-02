#include<iostream>
using namespace std;
class base{
    protected:
    int base_var;
    public:
    base(int);
    base();
    void display(){
        cout<<"Called from base class and base_var --> "<<base_var<<endl;
    }
};
class derived:public base{
    int derived_var;
    public:
    derived(int );
    void display(){
        cout<<"Called from derived class and base_var --> "<<base_var<<endl;
        cout<<"Called from derived class and derived_var --> "<<derived_var<<endl;
    }
};
base::base(int alpha){
    base_var=alpha;
}
derived::derived(int alpha){
    derived_var=alpha;
}
base::base(){
    return ;
}
int main(){
    base *ptr_base;
    base alpha(100);
    derived derivedObject(10);
    ptr_base=&derivedObject; 
    ptr_base->display();
    // derivedObject.display();
    return 0;
}