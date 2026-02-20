#include<iostream>
using namespace std;
#include<string.h>
string cat(string a,string b)
{
	a=a+b;
	cout<<a<<endl;
	return a;
}
char* cat(char c[],char d[])
{
	string result;
	result+=c;
	result+=d;
	char* res=new char[result.length()+1];
	strcpy(res,result.c_str());
	cout<<res;
	return res;
}
int main()
{
	string a,b;
	//cin>>a>>b;
	char c,d;
	//cin>>c>>d;
	cat("hello","how r u");
	cout<<endl;
	cat("a","b");
	return 0;
}
