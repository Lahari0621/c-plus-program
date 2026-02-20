#include<iostream>
using namespace std;
int sort(int a1[],int n,int a2[],int m);
int main()
{
	int a1[100],i,a2[100],n,m;
	cin>>n>>m;
	for(i=0;i<n;i++)
	cin>>a1[i];
	for(i=0;i<m;i++)
	cin>>a2[i];
	sort(a1,n,a2,m);
	return 0;
}
int sort(int a1[100],int n,int a2[100],int m)
{
	int count[100]={0},i,index=0;
	for(i=0;i<n;i++)
	count[a1[i]]++;

for(i=0;i<m;i++)
{
	while(count[a2[i]]>0)
	{
		a1[index]=a2[i];
		count[a2[i]]--;
		index++;
	}
}
for(i=0;i<100;i++)
{
	while(count[i]>0)
	{
		a1[index]=i;
		count[i]--;
		index++;
	}
}
cout<<"sorted array";
for(i=0;i<n;i++)
cout<<a1[i]<<" ";
}

