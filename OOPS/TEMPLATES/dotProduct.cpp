#include<iostream>
using namespace std;
template <class T>
class vector{
    public:
    T *arr;
    int size;
    vector(int m){
        size=m;
        arr=new T[size];
    }
    T answer=0;
    T dotProduct(vector &v){
        for(int i=0;i<size;i++){
            answer+=((this->arr[i]) * (v.arr[i]));
        }
        return answer;
    }
};
int main(){
    vector <int> brr(3);
    brr.arr[0]=4;
    brr.arr[1]=0;
    brr.arr[2]=1;
    vector <int> crr(3);
    crr.arr[0]=1;
    crr.arr[1]=1;
    crr.arr[2]=1;
    cout<<brr.dotProduct(crr)<<endl;

    vector <float> drr(3);
    drr.arr[0]=4.8989;
    drr.arr[1]=0;
    drr.arr[2]=1.57;
    vector <float> err(3);
    err.arr[0]=1.52;
    err.arr[1]=1.687;
    err.arr[2]=1.6589;
    cout<<drr.dotProduct(err);
    return 0;
}