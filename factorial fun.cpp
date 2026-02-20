#include<iostream>
using namespace std;
int fac(int);
int main()
{
	int n,b;
	cin>>n;
	b=fac(n);
	cout<<b;
}
int fac(int x)
{
	if(x==0)
	return 1;
	else
	return x*fac(x-1);
}
