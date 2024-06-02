#include<iostream>
using namespace std;
class complexNumber;
class summation{
    public:
    int sumOfRealPart(complexNumber c1,complexNumber c2);
    int sumOfImaginaryPart(complexNumber c1,complexNumber c2);
};
class complexNumber{
    private:
    int real,img;
    public:
    
    // INDIVIDUAL DECLARATION
    // friend int summation::sumOfRealPart(complexNumber ,complexNumber );
    // friend int summation::sumOfImaginaryPart(complexNumber ,complexNumber );
    
    //DECLARING CLASS SUMMATION AS FRIEND
    friend class summation;
    
    void setData(int num1,int num2);
    void print();

};
void complexNumber :: setData(int a,int b)
{
    real=a;
    img=b;
    return ;
}
void complexNumber :: print()
{
    cout<<"COMPLEX NUMBER IS --> "<<real<<" + "<<img<<"i\n";
    return ;
}

int summation::sumOfRealPart(complexNumber o1,complexNumber o2)
{
    return (o1.real+o2.real);
}
int summation::sumOfImaginaryPart(complexNumber o1,complexNumber o2)
{
    return (o1.img+o2.img);
}
int main()
{
    complexNumber complex1,complex2,complex3;
    complex1.setData(4,6);
    complex1.print();

    complex2.setData(5,16);
    complex2.print();

    summation sum;
    cout<<"SUM OF REAL PART OF BOTH THE NUMBER IS --> "<<sum.sumOfRealPart(complex1,complex2);
    cout<<"\nSUM OF IMAGINARY PART OF BOTH THE NUMBER IS --> "<<sum.sumOfImaginaryPart(complex1,complex2);
    return 0;
}