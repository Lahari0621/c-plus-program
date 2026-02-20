#include<iostream>
using namespace std;
class largest
{
	private:
	int a,b,c;
	public:
	int read()
	{
		cin>>a>>b>>c;
	}
	int print();
};
int largest::print()
{
	if((a>b)&&(a>c))
	cout<<"largest is "<<a;
	else if(b>c)
	cout<<"largest is "<<b;
	else
	cout<<"largest is "<<c;
}
int main()
{
largest g;
g.read();
g.print();
return 0;
}

