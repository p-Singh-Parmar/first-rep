#include<iostream>
using namespace std;

int main()
{
	int a[3], b[3], c[2];
	int x, y;
	for(x=0; x<3; x++)
	{
		cin>>a[x];
	}
	for(y=0; y<3;y++)
	{
		cin>>b[y];
	}
	int p=1,q=1,n;
	x=0, c[0]=0,c[1]=0;
	for(n=0;n<3;n++)
	{
		if(a[n]>b[n])
		{
			c[0]=p;
			p++;
		}
		else if(a[n]<b[n])
		{
			c[1]=q;
			q++;
		}
		else
			continue;
		
	}
	for(n=0;n<2;n++)
	{
		cout<<c[n]<<'\t';
	}
	return 0;
}
