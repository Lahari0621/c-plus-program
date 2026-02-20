#include<iostream>
#include<string.h>
using namespace std;
int count(char a[])
{
	int n=1;
	char i;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		n++;
	}
	cout<<"no of words "<<n;
}
int main()
{
	char a[100];
	cout<<"enter the string";
	gets(a);
	count(a);
}
