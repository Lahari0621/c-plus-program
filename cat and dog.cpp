#include<iostream>
#include<string>
using namespace std;
class animal
{
	protected:
		string name;
		int age,species;
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
		int weight;
		string breed;
		public:
			void print()
			{
				cin>>weight>>breed;
				cout<<"weight:"<<weight<<endl<<"breed"<<breed;
			}
};
int main()
{
	cout<<"cat details";
	cat a;
	a.display();
	a.result();
	cout<<"dog details";
	dog b;
	b.display();
	b.print();
	return 0;
}
