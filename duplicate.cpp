#include<iostream>
using namespace std;
int main()
{
	int a[7]={1,2,3,4,5,2,1};
	int i,j,k,n=7;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
			for(k=j;k<n;k++)
			{
			a[k]=a[k+1];
			n--;
			}
		    }   
		}
	}
    for(i=0;i<n;i++)
	cout<<a[i];
	return 0;	
}
