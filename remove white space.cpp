#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string h="hello world";
	//cin>>h;	
	int i,k,n;
	n=h.length();
	for(i=0;h[i]!='\0';i++)
	{
	if(h[i]==' '||h[i]=='\t'||h[i]=='\n')	
	{
			for(k=i;k<n;k++)
			{
			h[k]=h[k+1];
			n--;
			}
		    }   
		}
	cout<<h;
	return 0;	
}
