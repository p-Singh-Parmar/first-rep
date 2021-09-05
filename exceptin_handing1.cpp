#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	cout<<"welcome";
	try{
		throw 10;
		cout<<"\n in try";
	}
	catch(int e)
	{
		cout<<"\nException no: "<<e;
	}
	cout<<"\nLast line";
	getch();
}
