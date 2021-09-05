#include<iostream>
using namespace std;

void  area(int r)
{
	float area;
	area= 3.14*r*r;
	cout<<"area of circle is: "<<area<<endl;
}
void area(int l, int b)
{
	float area;
	area = l*b;
	cout<<"area of rectangle: "<<area<<endl;
}
void area(int b, int h, int c)
{
	float area;
	area = 0.5*b*h;
	cout<<"area of triangle is: "<<area<<endl;
}
int main()
{
	area(5);
	area(3,4);
	area(2,10,0);
	return 0;
}
