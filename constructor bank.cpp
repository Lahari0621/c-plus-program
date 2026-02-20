#include<iostream>
using namespace std;
class bank
{
	private:
	char name[100];
	int account_no,phone_number;
	char account_type[50];
	public:
		bank()
		{
			cin>>name>>account_no>>phone_number>>account_type;
			cout<<"name:"<<name<<endl<<"account no:"<<account_no<<endl<<"phone number:"<<phone_number<<endl<<"account type:"<<account_type;
		}
};
int main()
{
	cout<<"bank details";
	bank s;
	return 0;
}
