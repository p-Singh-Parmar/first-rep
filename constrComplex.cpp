#include<iostream>
using namespace std;

class complex
{
	public:
		int real;
		int img;
	
	complex()
	{
		
		
	}
	complex(int tReal, int tImg)
	{
		real= tReal;
		img= tImg;
	}
	complex addComp(complex c1, complex c2)
	{
		complex t;
		t.real = c1.real+c2.real;
		t.img = c1.img+c2.img;
		return t;
		
	}
	~complex()
	{
		cout<<"destructor invoked"<<endl;
	}
	
};
int main()
{
	
	complex c1(3,1);
	cout<<"complex number 1:	"<<c1.real<<"+"<<c1.img<<"i"<<endl;
	
	complex c2(4,5);
	cout<<"complex number2:		"<<c2.real<<"+"<<c2.img<<"i"<<endl;
	
	complex c3;
	c3 = c3.addComp(c1,c2);
	
	cout<<"sum of complex number: "<<c3.real<<"+"<<c3.img<<"i"<<endl;
}
