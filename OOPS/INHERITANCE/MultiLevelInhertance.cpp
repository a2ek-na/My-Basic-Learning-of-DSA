#include<iostream>
#include<string>
using namespace std;
class student{
    protected:
    string name,collegeID;
    int rollNumber;
    public:
    student(int);
    string returncollegeId(void){
        return collegeID;
    }
    string returnName(void){
        return name;
    }
    student(){};
    void setData(string ,string );
};
student::student(int classRoll){
    rollNumber=classRoll;
}

void student::setData(string naam, string clgid){
    name=naam;
    collegeID=clgid;
}

class marks :public student{
    protected:
    float maths,physics,chemmistry,computer,english;
    public:
    marks(){};
    void setMarks(student );
};
void marks::setMarks(student alpha ){
    cout<<"Enter the marks of the following subjects of the student with COLLEGE ID -->  "<<alpha.returncollegeId()<<"\nand NAME --> "<<alpha.returnName()<<endl;
    cout<<"ENGLISH : ";
    cin>>english;
    cout<<"PHYSICS : ";
    cin>>physics;
    cout<<"CHEMISTRY : ";
    cin>>chemmistry;
    cout<<"MATHEMATICS : ";
    cin>>maths;
    cout<<"COMPUTER SCIENCE : ";
    cin>>computer;
}

class result:public  marks{
    protected:
    float percentage;
    public:
    void showResult(student);
};
void result:: showResult(student alpha){
    cout<<"\n\n\n\n------------------FINAL RESULT OF THE STUDENT--------------------------------"<<endl;
    cout<<"NAME OF STUDENT "<<alpha.returnName()<<endl;
    cout<<"COLLEGE ID OF STUDENT "<<alpha.returncollegeId()<<endl;
    cout<<"Marks obtained in ENGLISH --> "<<english<<endl;
    cout<<"Marks obtained in PHYSICS --> "<<physics<<endl;
    cout<<"Marks obtained in CHEMISTRY --> "<<chemmistry<<endl;
    cout<<"Marks obtained in MATHEMATICS --> "<<maths<<endl;
    cout<<"Marks obtained in COMPUTER SCIENCE --> "<<computer<<endl;
    cout<<"--------------------------------------------------------------------------------------"<<endl;
    percentage=(english+physics+chemmistry+maths+computer)/5;
    cout<<"Total Marks Obtained --->> "<<(english+physics+chemmistry+maths+computer)<<endl;
    cout<<"Total Percentage --->> "<<percentage;
} 
int main(){
    student abhi(5);
    abhi.setData("Abhishek Gupta" ,"22bcs005");
    result abhiResult;
    abhiResult.setMarks(abhi);
    abhiResult.showResult(abhi);
    return 0;
}