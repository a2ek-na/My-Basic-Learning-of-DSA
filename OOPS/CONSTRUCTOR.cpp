#include<iostream>
using namespace std ;
class constructor{
    private:
    int a , b, c;
    public:
    constructor(void);
    void printNumber(void);
};

constructor :: constructor(void){
    cout<<"ENTER THE VALUE OF FIRST VARIABLE : ";
    cin>>a;
    cout<<"ENTER THE VALUE OF SECOND VARIABLE : ";
    cin>>b;
    cout<<"ENTER THE VALUE OF THIRD VARIABLE : ";
    cin>>c;
}

void constructor::printNumber(void){
    cout<<"\nTHE VALUE OF FIRST VARIABLE IS -->"<<a;
    cout<<"\nTHE VALUE OF SECOND VARIABLE IS --> "<<b;
    cout<<"\nTHE VALUE OF THIRD VARIABLE IS --> "<<c;
}
int main()
{
    constructor object1,object2;
    object1.printNumber();
    object2.printNumber();
}