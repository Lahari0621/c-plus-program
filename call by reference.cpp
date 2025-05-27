#include<iostream>
using namespace std;
int swap(int*,int*);
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<"before swapping"<<a<<"\t"<<b;
	swap(&a,&b);
	cout<<"\nafter swapping"<<a<<"\t"<<b;
}
int swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	return *x,*y;
}
