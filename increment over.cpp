#include<iostream>
using namespace std;
class increase
{
	private:
		int a;
		public:
			void setdata(int x)
			{
				a=x;
			}
			void operator++()
			{
				++a;
				cout<<a;
			}
};
int main()
{
increase s;
s.setdata(4);
++s;
return 0;
}


