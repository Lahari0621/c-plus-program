#include<iostream>
using namespace std;
class bank
{
	private:
		char bankname[100];
		char accountholdername[100];
		int accountno,totalamount;
		int depositamount;
		int withdrawamount;
		int balance1,balance;
		public:
			int read()
			{
				cin>>bankname>>accountholdername>>accountno>>totalamount>>depositamount>>withdrawamount;
			}
			int print();
};
int bank::print()
{
	cout<<"bank name: "<<bankname<<endl<<"name: "<<accountholdername<<endl<<"account no: "<<accountno<<endl<<"total amount: "<<totalamount<<endl;
     cout<<"deposit amount: "<<depositamount<<endl;
	 balance1=totalamount+depositamount;
	 cout<<"withdraw amount: "<<withdrawamount<<endl;
	 balance=balance1-withdrawamount;
	 cout<<"balance: "<<balance<<endl;	
} 
int main()
{
	bank s;
	s.read();
	s.print();
	return 0;
}
