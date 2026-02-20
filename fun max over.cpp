#include<iostream>
using namespace std;
int max(int a,int b)
{
	return (a>b)?a:b;
}
double max(double c,double d)
{
	return (c>d)?c:d; 
}
char max(char f,char e)
{
	return (e>f)?e:f;
}
int main()
{
	int a,b,g;
	double c,d,h;
	char e,f,i;
	g=max(2,3);
	cout<<g<<endl;
	h=max(3.1,4.8);
	cout<<h<<endl;
	i=max('a','t');
	cout<<i;
	return 0;
	
}
