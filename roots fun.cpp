#include<iostream>
using namespace std;
#include<math.h>
int root(int,int,int);
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	root(a,b,c);
}
int root(int a,int b,int c)
{
	int r1,r2,real,img,dis;
	dis=b*b-(4*a*c);
	if(dis>0)
	{
		r1=(-b+sqrt(dis))/(2*a);
		r2=(-b+sqrt(dis))/(2*a);
		cout<<r1<<" "<<r2;
	}
	else if(dis==0)
	{
		r1=r2=-b/2*a;
		cout<<r1<<" "<<r2;
	}
	else
	{
		real=-b/2*a;
		img=sqrt(-dis)/(2*a);
		cout<<"r1="<<real<<"+"<<img<<"i"<<"\n";
		cout<<"r2="<<real<<"-"<<img<<"i"<<"\n";
	}
	return 0;
}
