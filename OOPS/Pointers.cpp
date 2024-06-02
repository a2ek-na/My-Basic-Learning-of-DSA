#include<iostream>
using namespace std;
int main(){
    // int alpha;
    // alpha =16;
    // int *address=&alpha;
    // cout<<"Value of variable a is --> "<<*(address);
    // *address=16.1718;
    // cout<<"\nValue of variable alpha changed to float 16.1718 by using (*address)"
    //     <<"\nNow alpha --> "<<*(address);
    // alpha=16.1718;
    // cout<<"\n\nValue of variable alpha changed to float 16.1718 by using (alpha)"
    //     <<"\nNow alpha --> "<<*(address);
    // cout<<"\nNothing happened !!!!"

    cout<<"\nDynamically changing value of alpha by using 'new' keyword ";
    float *ptr=new float(16.178);
    cout<<"\nNow value at address ptr is --> "<<*(ptr);
    float *arr=new float[10];
    arr[0]=68.1648284;
    arr[1]=12.13624;
    arr[2]=6482.13624;
    arr[3]=12.39;
    arr[4]=4.136424;
    arr[5]=1.136844;
    arr[6]=464.134;
    arr[7]=462.18443;
    arr[8]=678.7813;
    arr[9]=132.8713;
    cout<<"Representing array --> "<<endl;
    for (int  i = 0; i < 10; i++){
        cout<<arr[i]<<" ";
    }
    delete arr;
    cout<<"\nRepresenting array --> "<<endl;
    for (int  i = 0; i < 10; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}