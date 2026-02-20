#include<iostream>
using namespace std;
int sort(int a[]);
int main()
{
	int a[5]={1,6,2,3,5};
	sort(a);
}
int sort(int a[])
{
	int i,j,temp;
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		cout<<a[i];
	}
}
