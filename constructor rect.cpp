#include<iostream>
using namespace std;
class rect
{
	private:
	int a,b,area;
	public:
	rect(int a,int b)
	{
		area=a*b;
		cout<<"area :"<<area<<endl;
	}
};
int main()
{
	rect s=rect(5,4);
	rect e(3,4);
	return 0;
}
