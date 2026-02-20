#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<cmath>
int trap(vector<int>& a)
{
	int n=a.size();
	vector<int> leftmax(n);
	vector<int> rightmax(n);
	leftmax[0]=a[0];
	int i;
	for(i=1;i<n;i++)
	{
		leftmax[i]=max(leftmax[i-1],a[i]);
	}
	rightmax[n-1]=a[n-1];
	for(i=n-2;i>=0;i--)
	{
		rightmax[i]=max(rightmax[i+1],a[i]);
	}
	int water=0,m;
	for(i=0;i<n;i++)
	{
		m=min(leftmax[i],rightmax[i]);
		water=m-a[i];
	}
	return water;
}
int main()
{
	vector<int> a={0,1,0,2,1,0,1,3,2,1,2,1};
	cout<<trap(a);
}
