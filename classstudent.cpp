#include<iostream>
using namespace std;
class student
{
	private:
		char name[100];
		int reg;
		int m1;
		int m2;
	public:
		int read()
		{
			cin>>name>>reg>>m1>>m2;
			}
			int print();
};
int student::print() 
{
	cout<<"name: "<<name<<"\n"<<"reg: "<<reg<<"\n"<<"m1 marks: "<<m1<<"\n"<<"m2 marks: "<<m2<<"\n";
}
int main()
{
	int i;
   student a[5];
   for(i=0;i<5;i++)
   {
   a[i].read();
   a[i].print();
   }
   return 0;
   
}
