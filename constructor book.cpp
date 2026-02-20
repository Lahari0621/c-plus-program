#include<iostream>
using namespace std;
#include<string.h>
class book
{
	protected:
		string name,author;
		int year,price;
		public:
			book()
			{
				cin>>name>>author>>year>>price;
			}
			void read()
			{
				cout<<"name:"<<name<<"\nauthor:"<<author<<"\nyear:"<<year<<"\nprice:"<<price;
			}
			~book()
			{
				cout<<"object is destroyed";
			}
};
int main()
{
	book a;
	a.read();
	return 0;
}
