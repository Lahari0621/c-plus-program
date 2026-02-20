#include<iostream>
using namespace std;
int fun(int a[5]);
int main()
{
	int a[5],i;
	for(i=0;i<5;i++)
	cin>>a[i];
	fun(a);
}
int fun(int x[5])
{
	int max,min;
	max=min=x[0];
	int i,j;
	for(i=0;i<5;i++)
	{
		if(max<x[i])
		max=x[i];
		if(min>x[i])
		min=x[i];
	}
	cout<<"max is:"<<max<<"\nmin is:"<<min;
}
