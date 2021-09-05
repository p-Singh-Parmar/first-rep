#include<iostream>
#include<cstdlib>
using namespace std;

int diagonal(int a[][] ,int n)
{
	int sumL=0,sumR=0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n;j++)
		{
			if(i==j)
				sumL+=a[i][j];
			else if((i+j)==(n-1) )
				sumR+=a[i][j];
		}
	}
	int diff;
	diff=abs(sumL-sumR);
	return diff;
	
}

int main()
{
	int n;
	cin>>n;
	int a[n][n];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	diagonal(a,n);
}
