#include<iostream>
using namespace std;
class add
{
	protected:
		int a,b;
		public:
			void read(int x,int y)
			{
				a=x;
				b=y;
			}
			void operator+(add s2)
			{
				add temp;
				temp.a=a+s2.a;
				temp.b=b+s2.b;
				cout<<temp.a<<"+i"<<temp.b;
			}
};
int main()
{
	add s1,s2;
	s1.read(3,2);
	s2.read(3,4);
	s1+s2;
	return 0;
}
