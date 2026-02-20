#include<iostream>
using namespace std;
class sub
{
	private:
		int a,b;
		public:
			void setdata(int x,int y)
			{
				a=x;
				b=y;
			}
			void operator-(sub s2)
			{
				sub temp;
				temp.a=a-s2.a;
				temp.b=b-s2.b;
				cout<<temp.a<<"-i"<<temp.b;
			}
};
int main()
{
	sub s1,s2;
	s1.setdata(4,7);
	s2.setdata(2,5);
	s1-s2;
	return 0;
}
