#include<iostream>
#include<string.h>
using namespace std;
class employee
{
	protected:
		string name;
		int id,salary;
		public:
			void display()
			{
				cin>>name>>id>>salary;
				cout<<"\nName:"<<name<<"\nID:"<<id<<"\nSalary:"<<salary;
			}
};
class manager:public employee
{
	protected:
		string dept;
		int bonus;
		public:
			void result()
			{
				cin>>dept>>bonus;
				cout<<"\nDepartment:"<<dept<<"\nBonus:"<<bonus;
			}
};
class engineer:public employee
{
	protected:
		string spec;
		int hrs;
		public:
			void print()
			{
				cin>>spec>>hrs;
				cout<<"\nSpecialty:"<<spec<<"\nhours:"<<hrs;
			}
};
int main()
{
	cout<<"\nManager Details";
	manager m;
	m.display();
	m.result();
	cout<<"\nEngineer details:";
	engineer e;
	e.display();
	e.print();
	return 0;
}
