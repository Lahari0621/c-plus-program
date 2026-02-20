#include<iostream>
#include<string>
using namespace std;
class student 
{
	private:
		string nam e;
		int reg,m1,m2;
		float avg;
		public:
			student()
			{
				cin>>name>>reg>>m1>>m2;
					avg=(m1+m2)/2;
				cout<<"name:"<<name<<endl<<"reg :"<<reg<<endl<<"m1:"<<m1<<endl<<"m2:"<<m2<<endl<<"average:"<<avg<<endl;
				}
				
				~student()
				{
					cout<<"\nobj is destroyed";
			}
};
int main()
{
	student s1;
	return 0;
}
