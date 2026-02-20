#include<iostream>
using namespace std;
#include<string.h>
int palindrome();
int main()
{
	int b;
	b=palindrome();
	if(b==1)
	cout<<"palindrome";
	else
	cout<<"not";
}
int palindrome()
{
	string a,e;
	cin>>a;
	int c,d;
	e=a;
	c=a.length();
	d=c-1;
	int i=0;
	while(i<=d)
	{
		swap(a[i],a[d]);
		i++;
		d--;
	}
	if(a==e)
	return 1;
	else
	return 0;
}


