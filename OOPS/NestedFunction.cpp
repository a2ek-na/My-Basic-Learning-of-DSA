#include<iostream>
using namespace std;
class binary{
    private:
    string s;
    void check(void);
    
    public:
    void read(void);
    void onesCompliment(void);
    void display(void);
};

void binary:: read(void)
{
    cout<<"ENTER THE NUMBER : \n";
    cin>>s;
}

void binary::check(void)
{
    for( int i=0; i<s.length();i++)
    if (s.at(i)!='0' && s.at(i)!='1')
    {
        cout<<"\nTHE ENTERED NUMBER IS NO A BINARY NUMBER \nHENCE WE CAN NOT PROCESS FURTHER ";
        exit(0);
    }
}


//HERE ALL THE FUNCTIONS ARE NESTED UNDER THE onesCompliment function.
void binary:: onesCompliment(void){
    check();
    cout<<"\nTHE ENTERED IS A BINARY NUMBER \nHENCE WE CAN PROCESS FURTHER \n";
    cout<<"DIPLAYING NUMBER BEFORE ONE'S COMPLIMENT -->";
    display();
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)=='0')
        s.at(i)='1';
        else
        s.at(i)='0';
    }
    cout<<"\nDIPLAYING NUMBER AFTER ONE'S COMPLIMENT -->";
    display();
}

void binary:: display(void){
    for(int i=0;i<s.length();i++)
    {
        cout<<s.at(i);
    }
}

int main()
{
    binary alpha;
    alpha.read();
    alpha.onesCompliment();
    return 10;
}