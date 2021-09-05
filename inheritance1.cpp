#include<iostream>
using namespace std;

class A
{
	private:
		int a;
	protected:
		void setValue(int k)
		{a=k;
		cout<<a%2;
		}
};
class B: public A
{
	public:
		void setdata(int x)
		{
			setValue(x);
		}
};
int main()
{
	B obj;
	obj.setdata(6);
}
