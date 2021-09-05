#include<stdio.h>
#include<math.h>
int n=9;
int a[]={50,45,35,33,16,25,34,12,10};

void insert_heap(int a[],int n,int val)
{
	n=n+1;
	a[n]=val;
	int temp;
	int i=n;
	while(i>1)
	{
		int prnt=floor(i/2);
		if(a[prnt]<a[i])
		{
			temp=a[prnt];
			a[prnt]=a[i];
			a[i]=temp;
			i=prnt;
		}
		else
		{
			return;
		}
	}
}
void delete_heap(int a[],int n, int pos)
{
	int temp=a[pos];
	a[pos]=a[n];
	a[n]=0;
	int lc,rc,i=0;
	while(a[i]<a[i+1] || a[i]<a[i+2])
	{
		if(a[i+1]>a[i+2])
		{
			int t1=a[i];
			a[i]=a[i+1];
			a[i+1]=t1;
			i+=1;
		}
		else
		{
			int t1=a[i];
			a[i]=a[i+2];
			a[i+2]=t1;
			i+=2;
		}
	}
	
}

int main()
{
	int val=0;
	delete_heap(a,n,val);
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
