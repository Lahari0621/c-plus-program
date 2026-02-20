#include<iostream>
using namespace std;
class display
{
	int a;
	//cin>>a;
	public:
		void print()
		{
				cin>>a;
			
		}
};
int main()
{
	display b,*c;
	b.print();
	c=&b;
	cout<<c;
}
