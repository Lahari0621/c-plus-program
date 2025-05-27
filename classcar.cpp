#include<iostream>
using namespace std;
class car
{
	private:
	char model[100];
	char company[100];
	int year;
	int price;
    public:
    	int read()
    	{
    		cin>>model>>company>>year>>price;
		}
		int print();
};
int car::print()
{
	cout<<"car model name: "<<model<<endl<<"company name: "<<company<<endl<<"year: "<<year<<endl<<"price: "<<price<<endl;
}
int main()
{
	car s;
	s.read();
	s.print();
	return 0;
}
