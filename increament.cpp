#include<iostream>
using namespace std;

int inc(int a)
{
	a=a+1;
	return a;	
}
int main()
{
	int a =8;
	cout<<a;
	int r=inc(a);
	cout<<r;
	return 0;
}
