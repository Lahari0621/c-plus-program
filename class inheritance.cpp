#include<iostream>
using namespace std;
class A
{
	public:
		void read(int a)
		{
			cout<<a*2<<endl;
		}
	
};
class B
{
	public:
		void display(int b)
		{
			cout<<b*3<<endl;
		}
};
class C
{
	public:
		void print(int c)
		{
			cout<<c*5<<endl;
		}
};
class D:public A,public B,public C
{

};
int main()
{
	D d;
	d.read(2);
    d.display(3);
    d.print(5);
    return 0;
}
