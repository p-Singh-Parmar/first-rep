#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"enetr two numbers:";
	cin>>a>>b;
	try{
		if(b==0)
			throw b;
		else{
			c=a/b;
			cout<<"result:"<<c;
		}
	}
	catch(int e)
	{
		cout<<"cannot divide by "<<e;
	}
	return 0;
}
