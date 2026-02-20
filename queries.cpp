#include<iostream>
using namespace std;
void rev(int a[],int n)
{
	int temp;
	int start=0;
	int end=n-1;
	while(start<end)
	{
	temp=a[start];
	a[start]=a[end];
	a[end]=temp;
	start++;
	end--;
}
}
int index(int a[],int n,int x)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
		return i;
    }
	    return -1;
}
void swap(int a[],int x,int y)
{
	int temp=a[x];
	a[x]=a[y];
	a[y]=temp;
}
void queries(int a[],int n,int q,int query[][3])
{
	int i;
	for(i=0;i<q;i++)
	{
		int type=query[i][0];
		if(type==1)
		rev(a,n);
		else if(type==2)
		{
			int x=query[i][1];
			int res=index(a,n,x);
			cout<<res<<" ";
		}
		else
		{
			int x=query[i][1];
			int y=query[i][2];
			swap(a,x,y);
		}
	}
}
int main()
{
	int a[100],n,q,i;
	int query[][3]={{1},{2,8},{3,2,4},{2,1}};
	cin>>n>>q;
	for(i=0;i<n;i++)
	cin>>a[i];
	queries(a,n,q,query);
	return 0;
}
