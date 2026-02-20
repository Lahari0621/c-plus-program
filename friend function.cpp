#include<iostream>
using namespace std;
class math
{
	int m1,m2;
	public:
		mul()
		{
			cin>>m1>>m2;
		}
		friend int mul(math c);
};
int mul (math c)
{
	return (c.m1*c.m2);
}
int main()
{
	math d;
	d.mul();
	cout<<mul(d);
	return 0;
}
