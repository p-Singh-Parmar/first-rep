#include<iostream>
using namespace std;

class pow
{
	public:
		inline int square(int n)
		{
			return (n*n);
		}
		inline int cube(int n)
		{
			return (n*n*n);
		}
		
};
int main()
{
	int a,b,n;
	pow p;
	cout<<"enter the number:";
	cin>>n;
	a=p.square(n);
	cout<<"square: "<<a<<endl;
	b=p.cube(n);
	cout<<"cube: "<<b<<endl;
	return 0;
}
