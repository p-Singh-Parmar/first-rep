#include<stdio.h>


int main()
{
	int n=10;
	
	
	int *arr =(int*)malloc(n*sizeof(n));
	for(int i=0; i<10; i++)
	scanf("%p", (arr+i));
	for(int i =0; i<n; i++)
	{
		printf("%c\n", (arr+i));
	}
	
	
	return 0;
	
	
}
