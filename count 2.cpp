#include<iostream>
using namespace std;
#include<string.h>
int main()
{
	int n,i,count=0;
	cin>>n;
	count=n-1;
	for(i=0;i<=n;i++)
	{
		string s;
		getline(cin,s);
		for(i=0;s[i]!='\0';i++)
		{
			if((s[i]==' '&&s[i+1]!=' ')||s[i]==','||s[i]=='.')
			count++;
		}
	}
	cout<<count;
}
