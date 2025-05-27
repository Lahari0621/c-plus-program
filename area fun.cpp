#include<iostream>
using namespace std;
int area(int a)
{
	int sarea;
	sarea=a*a;
	cout<<"square area:"<<sarea;
}
int area(int b,int c)
{
	int rarea;
	rarea=b*c;
	cout<<"rectangle area:"<<rarea;
}
double area(double d)
{
	double carea;
	carea=3.14*d*d;
	cout<<"circle area:"<<carea;
}
int main()
{
int a,b,c;
double d;
cin>>a>>b>>c>>d;
area(a);
area(b,c);
area(d);
return 0;	
}
