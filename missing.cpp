#include<iostream>
using namespace std;
int main()
{
	int a[5]={1,2,3,5},i,start=a[0];
	for(i=0;i<5;i++)
	{
		if(start!=a[i])
	{
			cout<<"missing number"<<start;
		}
		
		start++;
	}
}
