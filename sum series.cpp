#include<iostream>
using namespace std;
int main()
{
	int start,end,i,n,sum=0;
	cin>>start>>end;
	for(n=start;n<=end;n++)
	{
		int fact=1;
		for(i=1;i<=n;i++)
		fact=fact*i;
		sum=sum+fact;
	}
	cout<<sum;
}
