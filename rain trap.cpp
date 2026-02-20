#include<iostream>
using namespace std;
int trapwater(int a[],int n);
int main()
{
	int a[100],n,i;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	int res=trapwater(a,n);
	cout<<"trap water "<<res<<"units"<<endl;
}
int trapwater(int a[],int n)
{
	int sum=0,i;
	int left[n],right[n];
	left[0]=a[0];
	right[n-1]=a[n-1];
	if(n==0)
	return 0;
	for(i=0;i<n;i++)
	{
		left[i]=max(left[i-1],a[i]);
	}
	for(i=n-2;i>=0;i--)
	{
		right[i]=max(right[i+1],a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+min(left[i],right[i])-a[i];
	}
	return sum;
}
