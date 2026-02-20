#include<iostream>
using namespace std;
class shape
{
	protected:
		int a,b;
		public:
			void read()
			{
				cin>>a>>b;
			}
			virtual void area()
			{
				cout<<"details";
			}
};
class rectangle:public shape
{
	protected:
		int rarea;
		public:
		void area()
		{
			rarea=a*b;
			cout<<rarea;
		 } 
};
class triangle:public shape
{
	public:
		void area()
		{
			int tarea;
			tarea=0.5*a*b;
			cout<<"\n"<<tarea;
		}
};
int main()
{
	shape *c,*d;
	rectangle e;
	e.read();
	c=&e;
	c->area();
	triangle f;
	f.read();
	d=&f;
	d->area();
	return 0;
}
