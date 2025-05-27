#include<iostream>
using namespace std;
class book
{
	private:
		char name[100];
		char author[100];
		int year;
		int price;
		public:
			int read()
			{
				cin>>name>>author>>year>>price;
			}
			int print();
};
int book::print()
{
	cout<<"name of book:"<<name<<endl<<"author name :"<<author<<endl<<"year: "<<year<<endl<<"price: "<<price<<endl;
}
int main()
{
	book s1;
	s1.read();
	s1.print();
	return 0;
}
