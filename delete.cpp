#include<iostream>
using namespace std;
int main()
{
	int a[5],i,b;
	for(i=0;i<5;i++)
	{
		cin>>a[i];
			}
			cin>>b;
			for(i=5;i>=2;i++)
			{
				a[i]=a[i-1];
			}
			for(i=0;i<6;i++)
			{
				cout<<a[i];
			}
			return 0;
}


