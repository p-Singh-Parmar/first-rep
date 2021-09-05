#include<iostream>
using namespace std;

class digit
{
	public:
		void add();
			
	void add(int n1)
	{
		int t = n1;
		int r,sum=0;
		while(t!=0)
		{
			r=t%10;
			t=t/10;
			sum=sum+r;
		}
		cout<<"sum of digit is: "<<sum<<endl;
	}
};
	int main()
	{
		digit digi;
		int n;
		cout<<"numbr: ";
		cin>>n;
		digi.add(n);
		return 0;
		
	}


