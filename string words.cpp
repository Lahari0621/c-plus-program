#include<iostream>
#include<string.h>
using namespace std;
int count(string ch);
int main()
{
	string ch;
    cin>>ch;
	count(ch);
}
int count(string x)
{
	int i,words=1;
	for(i=1;x[i]!='\0';i++)
	{
		if(x[i]==' '&&x[i+1]!=' ')
		words++;
	}
	cout<<"count is:"<<words;
	return 0;
}
