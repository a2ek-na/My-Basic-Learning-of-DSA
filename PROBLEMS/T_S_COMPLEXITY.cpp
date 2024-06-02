#include<iostream>
using namespace std;
int main()
{
	int i,sum=0;
	for(i=0;i<=100000000;i++)
	{
		sum+=i;
	}
// 		sum=(i*(i+1))/2;
		cout<<sum;
	return 0;
}
