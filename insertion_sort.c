#include<stdio.h>
int comp=0,swap=0;
void insertion_sort(int ar[])
{
	int i,j,temp;
	
	for(i=0;i<9;i++)
	{
		temp=ar[i];
		j=i-1;
		while(j>=0 && ar[j]>temp)
		{
			ar[j+1]=ar[j];
			j--;
			
			comp++;			
		}
		ar[j+1]=temp;
		swap++;
	}
}
void print(int ar[])
{
	int i;
	for(i=0;i<9;i++)
	{
		printf("%d\t",ar[i]);
	}
	printf("comparision:%d\n",comp);
	printf("swapping:%d",swap);
	
}

int main()
{
	int n,i;
	int ar[] = {99,88,77,66,55,44,33,22,11};

	
	insertion_sort(ar);
	print(ar);
	return 0;
}
 
