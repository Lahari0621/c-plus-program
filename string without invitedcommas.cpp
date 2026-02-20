#include<iostream>
using namespace std;
#define MKSTR(x) #x
//we can use this function by removing the invited commas for the string
int main()
{
	cout<<MKSTR(hello babes);
	return 0;
}
