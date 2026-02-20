#include<iostream>
using namespace std;
int jumps(int a[],int n)
{
	int i,jump=0,max=0,current=0;
	for(i=0;i<n;i++)
	{
		if(max<=i+a[i])
		max=i+a[i];
		if(i==current)
		{
			jump++;
			current=max;}
			if(current>=n-1)
			return jump;
		}
		//return jump;
	}

int main()
{
	int a[100],n;
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	int res=jumps(a,n);
	cout<<res;
	return 0;
}

