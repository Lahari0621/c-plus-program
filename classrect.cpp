#include<iostream>
using namespace std;
class rectangle
{
	int a,b,area;
	public:
		int read()
		{
			cin>>a>>b;
		}
		int print();
};
int rectangle::print()
{
	area=a*b;
	cout<<"area is "<<area;
}
int main()
{
	rectangle s1;
	s1.read();
	s1.print();
	return 0;
}
