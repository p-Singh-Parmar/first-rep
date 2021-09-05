#include<iostream>
using namespace std;
class complex
{
	public:
		int a,b;
		complex(int x,int y)   //Parameterized constructor
		{ a=x;b=y; }
		
		complex (int k)   //parameterized constructor
		{ a=k;
		}
		complex()  //default constructor
		{		}
		complex(complex &c)   //copy constructor
		{
			a=c.a;
			b=c.b;
		}
};
int main()
{
	complex c1(3,4),c2,c3(5);
	complex c4(c1);
	return 0;
}

