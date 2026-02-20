#include<iostream>
using namespace std;
int main()
{
	int i,j,s,k,n,num;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		num=i;
		for(s=0;s<=n-i;s++)
		cout<<" ";
		for(j=1;j<=2*i-1;j++)
		{
		cout<<num;
	    if(j<i)
	    num++;
	    else
	    num--;
	}
		cout<<"\n";
	}
}
