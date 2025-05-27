#include<iostream>
using namespace std;
#include<cmath>
int convert(int);
int main()
{
	int n;
	cin>>n;
	convert(n);
}
int convert(int n)
{
	int i=1,sum=0,rem;
	while(n>0)
	{
	rem=n%2;
	sum+=rem*i;
	i=i*10;
	n=n/2;	
	}
	cout<<sum;
}
