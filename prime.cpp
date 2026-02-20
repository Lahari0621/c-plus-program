#include<iostream>
using namespace std;
int prime(int);
int main()
{
	int n;
	cin>>n;
	prime(n);
}
int prime(int n)
{
	int i,j,count;
	for(i=1;i<=n;i++)
	{
		count=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
			count++;
			break;
			}
		}
		if(count==0&&i!=1)
		cout<<i<<" ";
	}
	return 0;
}
