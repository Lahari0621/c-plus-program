#include<iostream>
using namespace std;
#include<string.h>
class person
{
	protected:
		string name;
		static int age;
		public:
			virtual void getdata()=0;
			virtual void putdata()=0;
};
int person::age;
class professor:public person
{
	protected:
		string publication;
	public:
		professor()
		{
			cout<<"professor details";
		}
		void getdata()
		{
		cin>>name>>age>>publication;	
		}
		void putdata()
		{
				cout<<"name:"<<name<<"\nage:"<<age<<"\npublication"<<publication;
		}
};
class student:public person
{
	protected:
		int i,a[5];
	public:
		student()
		{
			cout<<"\nstudent details";
		}
		void getdata()
		{
		cin>>name>>age;	
		for(i=0;i<5;i++)
		cin>>a[i];
		}
		void putdata()
		{
				cout<<"\nname:"<<name<<"\nage:"<<age<<"\nmarks:";
				for(i=0;i<5;i++)
				cout<<a[i]<<" ";
		}
};
int main()
{
	professor a,*c;
	c=&a;
	c->getdata();
	c->putdata();
	student b,*d;
	d=&b;
	d->getdata();
	d->putdata();
	return 0;
}
