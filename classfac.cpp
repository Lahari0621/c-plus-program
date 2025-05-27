#include<iostream>
using namespace std;
class factorial
{
	private:
	int x;
		int i,fac=1;
	public:
		int read()
		{
			cin>>x;
		}
		int print();
};
int factorial::print()
{
		for(i=1;i<=x;i++)
	{
		fac=fac*i;
	}
	cout<<fac;
}
int main()
{
	factorial n;
	n.read();
	n.print();
	return 0;
}
