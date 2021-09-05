#include<iostream>
using namespace std;

void frequency(int a[],int n)
{
	int i,j,c,max=0;
	for(i=0;i<n;i++)
	{
		c=0;
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j])
				c++;
		}
		if(c>max)
			max=c;
	}
	cout<<max;
}
int main()
{
	int n=5;
	int a[n];
	int i;
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	frequency(a,n);
}
