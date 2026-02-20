#include<iostream>
#include<string.h>
using namespace std;
class car
{
	private:
	string company;
	string model_name;
	int price,year;
	public:
		car()
		{
			cin>>company>>model_name>>price>>year;
			cout<<"company name:"<<company<<endl<<"model name:"<<model_name<<endl<<"price:"<<price<<endl<<"year:"<<year<<endl;
		}
};
int main()
{
	cout<<"car details:"<<endl;
	car s;
	return 0;
}
