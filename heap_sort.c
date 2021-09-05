#include<stdio.h>


void maxheapify(int a[],int n,int i)
{
	int largest = i;
	int l=(2*i);
	int r=(2*i)+1;
	if(l<=n && a[l]>a[largest])
	{
		largest = l;
	}
	if(l<=n && a[r]>a[largest])
	{
		largest=r;
	}
	if(largest!=i)
	{
		int swap;
		swap=a[largest];
		a[largest]=a[i];
		a[i]=swap;
		maxheapify(a,n,largest);
	}
}
void display(int a[], int n)
{
	int j;
	for(j=1;j<7;j++)
	{
		printf("%d\t",a[j]);
	}
	printf("\n\n");
}

int main()
{
	int n=7;
	int a[n];
	printf("enetr 8 elements:\n");
	int j;
	for(j=1;j<7;j++)
	{
		scanf("%d",&a[j]);
	}
	display(a,n);
	int i=a[1];
	maxheapify(a,n,i);
	display(a,n);
}


