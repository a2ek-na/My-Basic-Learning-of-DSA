#include <iostream>
#include <string>
using namespace std;
class student
{
protected:
    int rollNumber;
    string name;

public:
    void setRollNumber(int, string);
    void showRollNumber(void);
};
void student::setRollNumber(int num, string naam)
{
    rollNumber = num;
    name = naam;
}
void student::showRollNumber(void)
{
    cout << "\n\n\n\n\n----------------------------------------RESULT----------------------------------------------" << endl
         << "Following is the Mark Sheet of student having NAME --> " << name << " under Roll Number --> " << rollNumber << endl;
}

class test : virtual public student
{
private:
    float maths, physics, chemistry;

public:
    void setMarks(void);
    void displayMarks(void);
};
void test::setMarks(void)
{
    cout << "Enter marks obtained of the following \n";
    cout << "PHYSICS : ", cin >> physics;
    cout << "MATHEMATICS : ", cin >> maths;
    cout << "CHEMISTRY : ", cin >> chemistry;
}
void test::displayMarks(void)
{
    cout << "PHYSICS --> " << physics
         << "\nCHEMISTRY --> " << chemistry
         << "\nMATHEMATICS --> " << maths;
}

class sports : virtual public student
{
private:
    int score;

public:
    void setScore(void);
    void displayScore(void);
};
void sports::setScore(void)
{
    cout << "Enter his sports score : ", cin >> score;
}
void sports::displayScore(void)
{
    cout << "\nSports Score --> " << score;
}

class result : public test, public sports
{
public:
    void showResult(result);
};
void result::showResult(result alpha)
{
    alpha.showRollNumber();
    alpha.displayMarks();
    alpha.displayScore();
    cout << "\n--------------------------------------------------------------------------------------------" << endl
         << endl;
}

int main()
{
    int num, i, rol;
    string naaaam;
    cout << "Enter number of student : ", cin >> num;

    result student[num];

    for (i = 0; i < num; i++)
    {
        cout << "\nEnter name of the student : ", cin >> naaaam;
        cout << "\nEnter roll number : ", cin >> rol;
        student[i].setRollNumber(rol, naaaam);
        student[i].setMarks();
        student[i].setScore();
    }

    for (i = 0; i < num; i++)
    {
        student[i].showResult(student[i]);
    }

    return 0;
}