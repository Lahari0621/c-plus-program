#include<iostream>
using namespace std;
class multiply
{
	private:
		int r,c,a[10][10];
		public:
			multiply (int x,int y)
			{
				r=x;
				c=y;
			}
			void getdata()
			{
				int i,j;
				cout<<"enetr the data"<<"\n";
				for(i=0;i<r;i++)
				{
					for(j=0;j<c;j++)
					{
						cin>>a[i][j];
					}
				}
			}
			void operator*(multiply s2)
			{
				multiply s3(r,s2.c);
				int i,j,k;
				for(i=0;i<r;i++)
				{
					for(j=0;j<s2.c;j++)
					{
						s3.a[i][j]=0;
						for(k=0;k<c;k++)
						{
							s3.a[i][j]+=a[i][k]*s2.a[k][j];
						}
					}
				}
				for(i=0;i<s3.r;i++)
				{
					for(j=0;j<s3.c;j++)
					{
						cout<<s3.a[i][j]<<" ";
					}
					cout<<"\n";
				}
			}
};
int main()
{
   multiply s1(2,2);
   multiply s2(2,2);
	s1.getdata();
	s2.getdata();
	s1*s2;
	return 0;
}
