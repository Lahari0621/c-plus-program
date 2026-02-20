//write a c++ program for the function by using pointer
#include<iostream>
using namespace std;
int fac(int x){
	int i,f=1;
	for(i=1;i<=x;i++){
		f=f*i;
	}
	cout<<f;
}
int main(){

	int (*facmax)(int);
	facmax=fac;
		int y;
	cin>>y;
	facmax(y);
	
	return 0;
}
