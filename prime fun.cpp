#include<iostream>
using namespace std;
int prime(int n);
int main()
{
	int n;
	cin>>n;
	prime(n);
}
int prime(int m)
{
	int i,count=0;
	for(i=1;i<=m;i++)
	{
		if(m%i==0)
		count++;
	}
	if(count==2)
	cout<<"prime";
	else
	cout<<"not";
	return 0;
}
