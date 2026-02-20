#include<iostream>
using namespace std;
class fib
{
	private:
		int a=0,b=1,c,d;
		public:
			int read()
			{
				int i;
				cout<<a<<" "<<b<<" ";
				for(i=1;i<10;i++)
				{
				c=a+b;
				a=b;
				b=c;
				cout<<c<<" ";
			}
			}
};
int main()
{
	fib s;
	s.read();
	return 0;
}
