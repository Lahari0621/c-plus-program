#include<iostream>
using namespace std;
#include<string.h>
int main()
{
	string a="hello";
	string b="how r u?";
	//a.append(b);
	//a=a+b;
	char c[]="hi";
	char d[]="bye";
	strcat(c,d);
	cout<<c;
	return 0;
}
