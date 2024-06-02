#include<iostream>
using namespace std;
class compoundInterest{
    int years,principle;
    float rate,Rate,returnValue;
    public:
    compoundInterest(int r,int y ,int p);
    compoundInterest(float r,int y ,int p);
    void show(void){
    }
};
compoundInterest::compoundInterest(int r, int y ,int p){
    principle=p;
    years=y;
    rate=float(r)/100;
    returnValue=principle;
    for(int i=0;i<years;i++)
    {
        returnValue += returnValue*rate;
    }
    cout<<endl<<years<<" years before, you have Invested Rs. "<<principle<<" @ "<<rate*100<<" per annum. Now, your compounded money is "<<returnValue;
}
compoundInterest::compoundInterest(float r, int y ,int p){
    principle=p;
    years=y;
    Rate=r;
    returnValue=principle;
    for(int i=0;i<years;i++)
    {
        returnValue += returnValue*Rate;
    }
    cout<<endl<<years<<" years before, you have Invested Rs. "<<principle<<" @ "<<Rate<<" per annum. Now, your compounded money is "<<returnValue;
}
int main(){
    int a,b,c;
    float d;
    cout<<"For, Rate in percentage, \nEnter Principal Amount: ";
    cin>>a;
    cout<<"Enter rate : ";
    cin>>b;
    cout<<"Enter years for which you have invested: ";
    cin>>c;
    compoundInterest case1(b,c,a);
    cout<<"\n\nFor, Rate in fraction, \nEnter Principal Amount: ";
    cin>>a;
    cout<<"Enter rate : ";
    cin>>d;
    cout<<"Enter years for which you have invested: ";
    cin>>c;
    compoundInterest case2(d,c,a);
    return 0;
}