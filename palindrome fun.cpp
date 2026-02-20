#include<iostream>
#include<string.h>
using namespace std;
int palindrome(string h);
int main()
{
	string h;
	cin>>h;
	palindrome(h);
}
int palindrome(string x)
{
	int b,i=0,a;
	string m;
	m=x;
	b=x.length();
	a=b-1;
	while(i<=a)
	{
		swap(x[i],x[a]);
		a--;
		i++;
	}
	m==x?cout<<"palindrome":cout<<"not";
}
