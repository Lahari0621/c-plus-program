#include<iostream>
using namespace std;
int main()
{
	int a[2][2]={1,2,3,4},i,j,sum1=0,sum2=0;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			if(i==j)
		sum1=sum1+a[i][j];	
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			if(i+j==2-1)
			{
				sum2=sum2+a[i][j];
			}
		}
	}
	cout<<sum1<<endl<<sum2;
	return 0;
}
