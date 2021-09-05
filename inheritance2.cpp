#include<iostream>
using namespace std;

class array
{
	private:
		int a[10];
	public:
		void insert(int index, int value)
		{ a[index]=value;
		}
};
class stack: private array
{
	int top;
	public:
		void push(int value)
		{
			insert(top,value);
			top++;
		}
};
int main()
{
	stack s1;
	s1.push(23);
}
