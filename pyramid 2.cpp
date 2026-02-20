#include<iostream>
using namespace std;
int main()
{
	int i,j,k,s,n;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(s=1;s<=n-i;s++)
		cout<<" ";
		for(j=1;j<=i;j++)
		cout<<j;
		for(k=i-1;k>=1;k--)
		cout<<k;
		cout<<"\n";
	}
	return 0;
}
