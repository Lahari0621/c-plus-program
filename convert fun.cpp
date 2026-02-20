#include<iostream>
using namespace std;
int convert(float n);
int main()
{
	int n;
	cin>>n;
	convert(n);
}
int convert(float m)
{
	float x;
	x=(m-32)*5/9;
	cout<<"fahrenhit:"<<x;
}
