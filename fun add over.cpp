#include<iostream>
using namespace std;
int add(int x,int y)
{
	return x+y;
}
double add(double a,double b)
{
	return a+b;
}
int main()
{
	int x,y;
	double a,b;
	cout<<"sum:"<<add(2,3);
	cout<<"\nsum:"<<add(2.4,1.5);
	return 0;
}
