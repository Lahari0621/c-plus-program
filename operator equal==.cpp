#include<iostream>
using namespace std;
class set{
	int a;
public:
	void over(int x){
		a=x;
	}
	 void operator==(set s2){
		if(a==s2.a)
		cout<<"equal";
		else 
		cout<<"not";
	}
};

int main(){
	set s1,s2;
	s1.over(5);
	s2.over(4);
	s1==s2;
	}
