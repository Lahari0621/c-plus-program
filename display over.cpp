#include<iostream>
using namespace std;
class display
{
	private:
		int a;
		public:
			void setdata(int x)
			{
				a=x;
			}
			friend ostream& operator<<(ostream&b,display s)
			{
				b<<"age:"<<s.a;
				return b;
			 } 
};
int main()
{
	display k;
	k.setdata(5);
	cout<<k;
	return 0;
}
