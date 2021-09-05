#include<iostream>
using namespace std;


int add(int n)
{
	int t= n;
	int r,sum=0;
	while(t!=0)
	{
		r=t%10;
		t=t/10;
		sum = sum+r;
	
	}
	return sum;	
	
}
int main()
{
	int n1;
	
	cout<<"enter 3-digit number";
	cout<<"n1:";
	cin>>n1;
	int ans=add(n1);
	cout<<"sum is"<<ans;
	
	

	return 0;
}



