#include<iostream>
#include<string.h>
using namespace std;
class person
{
	protected:
		string name,gender;
		int age;
		public:
			void read()
			{
				cin>>name>>gender>>age;
				cout<<"name:"<<name<<"gender:"<<gender<<"age:"<<age;
			}
};
class student:public person
{
	protected:
		int rollno,year;
		public:
			void print()
			{
				cin>>rollno>>year;
				cout<<"roll no.:"<<rollno<<"class:"<<year;
			}
};
class teacher:public person
{
	protected:
		string sub;
		double salary;
		public:
			void display()
			{
				cin>>sub>>salary;
				cout<<"subject:"<<sub<<"salary:"<<salary;
			}
};
int main()
{
	cout<<"student details:";
	student a;
	a.read();
	a.print();
	cout<<"teacher details:";
	teacher b;
	b.read();
	b.display();
	return 0;
	
}
