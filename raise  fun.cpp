#include<iostream>
#include<csignal>
#include<unistd.h>
using namespace std;
void signalhandler(int sigma)
{
cout<<"interrupt signal ("<<sigma<<")received\n";
exit(sigma);
}
int main()
{
	int i=0;
	signal(SIGINT,signalhandler);
	while(++i)
	{
		cout<<"going to sleep....."<<endl;
		if(i==3)
		raise(SIGINT);
		sleep(1);
	}
	return 0;
}













