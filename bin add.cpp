#include<iostream>
using namespace std;
class sum
{
	private:
		int a,b;
		public:
			void setdata(int x,int y)
			{
				a=x;
				b=y;
			}
			void operator+(sum s2)
			{
				sum temp;
				temp.a=a+s2.a;
				temp.b=b+s2.b;
				cout<<temp.a<<"+i"<<temp.b;
			}
};
int main()
{
	sum s1,s2;
	s1.setdata(2,3);
	s2.setdata(2,3);
	s1+s2;
	return 0;
	
}
