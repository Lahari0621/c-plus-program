#include<iostream>
using namespace std;
class sum
{
	private:
		int a;
		public:
			void setdata(int x)
			{
				a=x;
			}
			void operator+=(sum s2)
			{
				int add;
				add=a+s2.a;
				cout<<add;
			}
};
int main()
{
	sum s1,s2;
	s1.setdata(3);
	s2.setdata(4);
	s1+=s2;
	return 0;
}
