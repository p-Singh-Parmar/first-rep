#include<iostream>
using namespace std;
class merge
{
	public:
		
		
		void input1(int a[],int b[], int m,int n)
		{
			cout<<"input 1st array:";
			int i;
			for(i=0;i<m;i++)
			{
				cin>>a[i];
			}
			for(i=0;i<m;i++)
			{
				cout<<a[i]<<"\t";
			}
			cout<<endl;
			cout<<"input 2nd array:"<<endl;
			for(i=0;i<n;i++)
			{
				cin>>b[i];
			}
			for(i=0;i<n;i++)
			{
				cout<<b[i]<<"\t";
			}
		}
		
		void combine(int a[],int b[], int m,int n)
		{
			int c[m+n];
			int i,k=0;
			for(i=0;i<m+n;i++)
			{
				if(i<m)
					c[i]=a[i];
					
				else
				{
					c[i]=b[k];
					k++;
				}
			}
			cout<<endl;
			for(i=0;i<m+n;i++)
			{
				cout<<c[i]<<"\t";
			}
		}
};

int main()
{
	merge mer;
	int m,n;
	cout<<"enter size of array1 nd array2:";
	cin>>m;
	
	cin>>n;
	int a[m], b[n];
	mer.input1(a,b,m,n);
	mer.combine(a,b,m,n);
	return 0;
}
