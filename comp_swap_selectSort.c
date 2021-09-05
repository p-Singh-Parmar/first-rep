#include<stdio.h>
#include<malloc.h>
int ar[] = {99,88,77,66,55,44,33,22,11};
int ans[2];
void comp_swap()
{
	int comp=0,swap=-1;
	int i,j,temp;
	for(j=0; j<8;j++)
	{
		for(i=j+1; i<9;i++)
		{
			if(ar[j]>ar[i])
			{	
				temp=ar[j];
				ar[j]=ar[i];
				ar[i]=temp;
				swap++;
			}
			comp++;
	
		}
	
	}
	ans[0]=swap;
	ans[1]=comp;
}
void print()
{
	int i;
	for(i=0;i<9;i++)
	{
		printf("%d\t",ar[i]);
	}
	printf("\n%d",ans[0]);
	printf("\n%d",ans[1]);
	
}

int main()
{
	comp_swap();
	print();
	return 0;
}

