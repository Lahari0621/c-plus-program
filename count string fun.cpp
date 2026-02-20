#include<iostream>
#include<string.h>
using namespace std;
int  count(string x);
int main()
{
	string x="hello world";
	//cin>>x;
	count(x);
}
int count(string x)
{
	int i,c;
	c=1;
	for(i=0;x[i]!='\0';i++)
	{
		if(x[i]==' ' && x[i+1]!=' ')
		c++;
	}
	cout<<c;
	return 0;
}
