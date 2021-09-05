#include<stdio.h>

void bubble_sort(int ar[],int n)
{
	int i,j,temp;
	
	for(i=0;i<n-1;i++)
	{
		
		for(j=0;j<n-1;j++)
		{
			if(ar[j]>ar[j+1])
			{
				temp=ar[j];
				ar[j]=ar[j+1];
				ar[j+1]=temp;
			}			
		}
	}
}
void print(int ar[], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\t",ar[i]);
	}
	
}

int main()
{
	int n,i;
	printf("enter size");
	scanf("%d",&n);
	int ar[n];
		printf("enter elements:\n");
		for(i=0; i<n;i++)
		{
			scanf("%d",&ar[i]);
	}

	bubble_sort(ar,n);
	print(ar,n);
	return 0;
}

