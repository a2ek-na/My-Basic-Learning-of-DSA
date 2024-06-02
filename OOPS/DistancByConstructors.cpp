#include<iostream>
#include<cmath>
using namespace std;
class points{
    int x,y;
    public:
    friend int distance(points,points);
    points(void);
};
points:: points(void){
    cout<<"ENTER X-COORDINATE: ";
    cin>>x;
    cout<<"ENTER Y-COORDINATE: ";
    cin>>y;
}
int distance(points p1,points p2){
    float xdiff = (p1.x-p2.x);
    float xsquare = pow(xdiff,2);
    float ydiff = (p1.y-p2.y);
    float ysquare = pow(ydiff,2);
    cout<<"THE DISTANCE BETWEEN THEM IS --> "<<sqrt(xsquare+ysquare);
}

int main(){
    cout<<"\nFOR FIRST POINT --> \n";
    points point1;
    cout<<"\nFOR SECOND POINT --> \n";
    points point2;
    distance(point1,point2);
    return 0;
 }