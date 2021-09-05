#include<stdio.h>
#include<malloc.h>
int ar[] = {99,88,77,66,55,44,33,22,11};
int b[]={99,88,77,66,55,44,33,22,11};
int compS=0,swapS=0;
void selection()
{
	
	int i,j,temp;
	for(j=0; j<8;j++)
	{
		for(i=j+1; i<9;i++)
		{
			compS+=1;
			if(ar[j]>ar[i])
			{	
				temp=ar[j];
				ar[j]=ar[i];
				ar[i]=temp;
				swapS+=1;
			}
			
	
		}
	
	}
	printf("SELCTION SORTED:");
	for(i=0;i<9;i++)
	{
		printf("%d\t",ar[i]);
	}
	printf("%d & %d\n\n",swapS,compS);

}
int compI=0,swapI=0;
void insertion_sort()
{
	int i,j,temp;
	
	for(i=0;i<9;i++)
	{
		temp=b[i];
		j=i-1;
		compI+=1;
		while(j>=0 && b[j]>temp)
		{
			swapI+=1;
			b[j+1]=b[j];
			j--;		
		}
		b[j+1]=temp;
		swapI++;
		
	}
	printf("INERTION SORTED:");
	for(i=0;i<9;i++)
	{
		printf("%d\t",b[i]);
	}
		printf("%d & %d",swapI,compI);
}
void print(int ar[],int b[])
{
	int costS=1,costI=1;
	costS=3*compS+swapS;
	costI=3*compI+swapI;
	printf("\nSelcetion:%d \n Insertion:%d",costS,costI);
	
}
int main()
{
	printf("\nPRAKHAR SINGH PARMAR 1905261\n");
	selection();
	insertion_sort();
	print(ar,b);
	return 0;
}

