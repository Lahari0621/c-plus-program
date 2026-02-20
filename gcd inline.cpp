#include<iostream>
using namespace std;
int gcd(int,int);
int main()
{
	int a,b,c;
	cin>>a>>b;
	c=gcd(a,b);
	cout<<c;
}
inline int gcd(int a,int b)
{
	int temp;
	while(b!=0)
	{
		temp=b;
		b=a%b;
		a=temp;
	}
	return a;
}
