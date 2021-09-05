//overloadding of an opearator using friend function
#include<iostream>
using namespace std;

class complex
{
	private:
		int a,b;
	public:
	void setdata(int x,int y)
	{ a=x; b=y;
		}	
	void showdata()
	{
		cout<<"\na="<<a<<"\nb="<<b;
	}
	friend complex operator+(complex,complex);
};
complex operator +(complex c1, complex c2)
	{
		complex temp;
		temp.a=c1.a+c2.a;
		temp.b=c1.b+c2.b;
		return temp;
	}
int main()
{
	complex c1,c2,c3;
	c1.setdata(3,4);
	c2.setdata(5,7);
	c3=c1+c2;
	c3.showdata();
}
