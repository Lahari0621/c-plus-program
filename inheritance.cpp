#include<iostream>
#include<string.h>
using namespace std;
class animal
{
	protected:
		string name,species;
		int age;
		public:
			void display()
			{
				cin>>name>>species>>age;
				cout<<"name:"<<name<<endl<<"species:"<<species<<endl<<"age:"<<age<<endl;
			}
};
class cat:public animal
{
	protected:
		string colour,breed;
		public:
			void result()
			{
				cin>>colour>>breed;
				cout<<"colour:"<<colour<<endl<<"breed:"<<breed<<endl;
			}
};
class dog:public animal
{
	protected:
		string weight,breed;
		public:
			void print()
			{
				cin>>weight>>breed;
				cout<<"weight:"<<weight<<"\nbreed"<<breed<<endl;
			}
};
int main()
{
	cout<<"cat details\n";
	cat a;
	a.display();
	a.result();
	cout<<"dog details\n";
	dog b;
	b.display();
	b.print();
	return 0;
}
