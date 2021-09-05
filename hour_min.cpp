#include<iostream>
using namespace std;

class time
{
	public:
		int hour;
		int minute;
	
	time()
	{
		
	}	
	time(int h, int m)
	{
		hour=h;
		minute=m;	
	}	
	time::print(time h1,time m1)
	{
		time tm;
		cout<<tm.h1<<":"<<tm.m1;
		
	}
};
int main()
{
	time(3,54);
	
	time t;
	t = t.print(h1,m1);
	return 0;
	
}
