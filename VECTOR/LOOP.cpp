#include<iostream>
//including heading file
#include<vector>
using namespace std ;
int main()
{
    int number ,i;
    vector<int> alpha;//declaring vector
    alpha.size();//tell number of elements.
    alpha.resize(5);//resize the vector to size 8.
    alpha.capacity();//tell the capacity of the vector.
    // cout<<"ENTER THE NUMBER OF ELEMENTS :\n";
    // cin>>number;
    cout<<alpha.capacity()<<endl;
    cout<<"ENTER THE ELEMENTS"<<endl;
    for ( i = 0; i < 5; i++)
    {
        int n;
        
        cin>>n;
        alpha.push_back(n);
    }
    cout<<alpha.capacity()<<endl;
    

    return 0;
}