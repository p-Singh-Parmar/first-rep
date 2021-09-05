#include<iostream>
using namespace std;

class complex
{
	private:
		int a,b; //called Instance Member Variables
	public:
		void set_data(int,int);  //Instance Member Function
		void show_data()
		{
			cout<<"\na="<<a<<"\tb="<<b;
		}
		complex add(complex c)
		{
			complex temp;
			temp.a=a+c.a;
			temp.b=b+c.b;
			return temp;
		}
};
void complex::set_data(int x,int y)  //writing class name before fucntion name so it is recognosed as a member fucntion of that class even after being outside of class
{
	a=x;b=y;
}
int main()
{
	complex c1,c2,c3;
	c1.set_data(3,4);
	c2.set_data(4,1);
	c3=c1.add(c2);
	c3.show_data();
	
}


