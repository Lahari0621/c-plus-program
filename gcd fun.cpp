#include<iostream>
using namespace std;
int gcd(int,int);
int main()
{
	int n,m;
	cin>>n>>m;
	gcd(n,m);
}
int gcd(int x,int y)
{
	int small,d;
	small=(x<y)?x:y;
	while(small>=1)
	{
		if(x%small==0&&y%small==0)
		{
		d=small;
		break;
	}
	small--;
	}
	cout<<"gcd is:"<<d;
	return 0;
/*	while(y!=0)
	{
		int temp=y;
		y=x%y;
		x=temp;
	}
	cout<<"gcd is:"<<x;
	return 0;*/
}
