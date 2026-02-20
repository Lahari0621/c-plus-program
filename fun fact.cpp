#include<iostream>
using namespace std;
int fact(int);
int main()
{
	int a; 
	cin>>a;
	fact(a);
}
int fact(int b)
{
	int i,f=1;
	for(i=1;i<=b;i++)
	f=f*i;
	cout<<f;
}
