#include<iostream>
using namespace std;
int arr[100][100];
int r;
int c;
void input()
{
	cout<<"rows: ";
	cin>>r;
	cout<<"columns:";
	cin>>c;
	
	int i,j;
	cout<<"\n enter the elements of the array"<<endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>arr[i][j];
			
			
		}
	}
	
}

int sum(int m, int n)
{
	int sum=0;
	for(int i=m;i<m+2;i++)
	{
		for(int j=n;j<n+2;j++)
		{
			sum+=arr[i][j];
		}
	}
	return sum;
}

int main()
{
	input();
	int sumMax=arr[0][0], Msum;

	
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			Msum=sum(i,j);
		
		if(Msum>sumMax)
		{
			sumMax=Msum;
		}
}}
cout<<"biggest sum is: "<<sumMax;	
	
}
