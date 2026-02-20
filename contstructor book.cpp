#include<iostream>
#include<string>
using namespace std;
class book
{
	string book_name,author;
	int price,pages;
	public:
		book()
		{
			cin>>book_name>>author>>price>>pages;
			cout<<"book name:"<<book_name<<endl<<"author:"<<author<<endl<<"price:"<<price<<endl<<"pages:"<<pages<<endl;
		}
};
int main()
{
	book s;
	return 0;
}
