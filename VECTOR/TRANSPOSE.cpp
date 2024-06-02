#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int rows,columns,i,j;
    cout<<"ENTER THE NUMBER OF ROWS : "<<endl;
    cin>>rows;

    cout<<"ENTER THE NUMBER OF COLUMNS : "<<endl;
    cin>>columns;
    
    cout<<"ENTER ELEMENTS : "<<endl;
    vector<vector<int>> matrix(rows,vector<int> (columns));

    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            cin>>matrix[i][j];
        }
    }
  
    cout<<endl<<"ANSWER MATRIX IS : "<<endl;
  {
    for ( i = 0; i < columns; i++)
    {
        for(j=0;j<rows;j++)
        {
            cout<<matrix[j][i]<<" ";
        }
        cout<<endl;
    }
    
  }
  return 0;  
}
