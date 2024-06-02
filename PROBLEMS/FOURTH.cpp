//PROBLEM IN WHICH HIGHEST IMDB RATING MOVIE IS ESTIMATED FROM A GIVEN SET OF MOVIES
//CREATED ON 26th OF MARCH 2023  
#include <iostream>
using namespace std;

int main() 
{
    int test,i,lines,space,j,imdb,abhi=0,space1;
    cin>>test;
    for(i=0;i<test;i++)
    {
        cin>>lines>>space;
        for(j=0;j<lines;j++)
        {
            cin>>space1>>imdb;
            if((space1<=space)&&(imdb>abhi))
            {
                abhi=imdb;
            }
        }
        cout<<abhi;
    }
	
	return 0;
}
