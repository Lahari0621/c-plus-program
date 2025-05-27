#include<iostream>
using namespace std;
class rect
{
	private:
		int a,b;
		float area;
		public:
			rect()
			{
				cin>>a>>b;
				area=a*b;
				cout<<"area:"<<area<<endl;
			}
			rect(int x,int y)
			{
				area=x*y;
				cout<<"area:"<<area<<endl;
			}
			/*~rect()
			{
				cout<<"\nobj is destroyed";
			}
			rect(int z)
			{
				area=z;
			}*/
			rect(rect &e)
			{
				area=e.area;
				cout<<"area"<<area<<endl;
			}
};
int main()
{
	rect s1;
	rect s2(4,5);
	rect s3=s1;
	return 0;
}
