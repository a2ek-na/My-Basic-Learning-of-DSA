#include <iostream>
#include<string>
using namespace std;

class Employee
{
private:
    int id, salary;
    string name, address;

public:
    static int count, expenditure;
    void setData(void);
    void displayData(void);
    void increament(void);
};

int Employee::count;
int Employee::expenditure;

void Employee::increament(void)
{
    count++;
    expenditure += salary;
}
void Employee::setData()
{
    cout << "ENTER THE ID OF THE EMPLOYEE \n";
    cin >> id;

    cout << "ENTER THE NAME OF THE EMPLOYEE : \n";
    // getline(cin,name);
    cin >> name;

    cout << "ENTER THE SALARY OF THE EMPLOYEE : \n";
    cin >> salary;

    cout << "ENTER THE ADDRESS OF THE EMPLOYEE : \n";
    // getline(cin,address);
    cin >> address;
}
void Employee::displayData()
{
    cout << "\n\nID OF THE EMPLOYEE IS  --> " << id;

    cout << "\nNAME --> " << name;

    cout << "\nADDRESS --> " << address;

    cout << "\nSALARY --> " << salary;
}
int main()
{
    int num, i;
    cout << "ENTER THE NUMBER OF EMPLOYEES :\n";
    cin >> num;
    Employee number[num];
    for (i = 0; i < num; i++)
    {
        number[i].setData();
        number[i].increament();
    }
    cout <<"\n\nTOTAL NUMBER OF THE EMPLOYEES IS --> " << Employee::count;
    for (i = 0; i < num; i++)
    {
        number[i].displayData();
    }
    cout << "\n\nEXPENDITURE --> RS." << Employee::expenditure;

    return 0;
}
//kabhi bhi agr aapko koi static variable use krna ho main function mein toh aapko jydaa kuch nhii,aapko bss us class ka naam ,uske baad scope resolution operator and then static avriable ka naam likhna h 