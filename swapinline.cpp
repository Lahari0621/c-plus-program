#include<iostream>
using namespace std;
inline int swap(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	cout<<x<<" "<<y;
}
int main()
{
	swap(2,3);
	
	return 0;
}

