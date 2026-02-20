#include<iostream>
using namespace std;
int main()
{
	int a[9]={1,5,3,-4,-8,8,6,-7,1},left=0,right=9-1,c;
	while(left!=right)
	{
		if(a[left]<0)
		left++;
		else if(a[right]>0)
		right--;
		else
		{
			c=a[left];
			a[left]=a[right];
			a[right]=c;}
		left++;
		right--;
	}

	for(int i=0;i<9;i++)
	cout<<a[i];
	return 0;
}
