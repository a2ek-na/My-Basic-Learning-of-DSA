#include<iostream>
using namespace std;

class betta {
    private:
    int salary,bonus,increament;
    public:
    string name, address;
    int age;
    double phoneNumber;

    void setData(int sal,int bo, int incre);
    void display()
    {
        cout<<"\nNAME OF THE EMPLOYEE --> "<<name<<endl;
        cout<<"AGE OF THE EMPLOYEE --> "<<age<<endl;
        cout<<"ADDRESS OF THE EMPLOYEE --> "<<address<<endl;
        cout<<"PHONE NUMBER  OF THE EMPLOYEE --> "<<phoneNumber<<endl;
        cout<<"SALARY OF THE EMPLOYEE --> "<<salary<<endl;
        cout<<"INCREAMENT FOR THE EMPLOYEE FROM THIS MONTH --> "<<increament<<endl;
        cout<<"BONUS OF THE EMPLOYEE FOR THIS MONTH --> "<<bonus<<endl;
    }
};

void betta:: setData(int sal, int bo, int incre)
{
    salary=sal;
    bonus=bo;
    increament=incre;
}

int main()
{
    betta employee;
    //employee.salary=300000; // --> THIS WILL SHOW ERROR BECAUSE, U CAN'T ACCESS SALARY DIRECT OUTSIDE FROM ITS CLASS;
    employee.setData(250000,10000,50000);
    employee.name="ABHISHEK GUPTA";
    employee.age=21;
    employee.address="MASHOBRA";
    employee.phoneNumber=71691;
    
    employee.display();
    return 0;
}