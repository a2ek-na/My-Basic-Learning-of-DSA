#include<iostream>
using namespace std ;
class Test{
    int a,b;
    //AS PER RULE ,A MUST INITIALIZE FIRST BY CONSTRUCTOR METHOD ,IF IT DOES NOT SO, THEN IT WILL INITIALIZE ITSELF BY SOME GARBAGE VALUE
    public:
    Test(int  ,int );
};
// Test::Test(int i ,int j):a(3*i),b(10*j){
//     cout<<"Test case 1 "<<endl;
//     cout<<"Value of a --> "<<a<<endl;
//     cout<<"Value of b --> "<<b;
// }


// Test::Test(int i ,int j):a(i),b(a+10+(j*2)){
//     cout<<"Test case 2 "<<endl;
//     cout<<"Value of a --> "<<a<<endl;
//     cout<<"Value of b --> "<<b;
// }

// Test::Test(int i ,int j):b(j),a(i){
//     cout<<"Test case 3"<<endl;
//     cout<<"Value of a --> "<<a<<endl;
//     cout<<"Value of b --> "<<b;
// }

// -----------------EXCEPTIONAL CASES-------------------------------

// Test::Test(int i ,int j):b(j){
//     cout<<"Test case 4"<<endl;
//     cout<<"Value of a --> "<<a<<endl;
//     cout<<"Value of b --> "<<b;
// }


Test::Test(int i ,int j):b(j),a(b+i){
    cout<<"Test case 5"<<endl;
    cout<<"Value of a --> "<<a<<endl;
    cout<<"Value of b --> "<<b;
}


int main(){
    Test object(8,16);
    return 0;
}