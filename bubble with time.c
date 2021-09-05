#include<stdio.h>
#include<time.h>


void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
 
void bubble(int a[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)    
   {
       for (j = 0; j < n-i-1; j++)
       {
           if (a[j] > a[j+1])
              swap(&a[j], &a[j+1]);
       }
   }
}
void printArray(int a[] ,int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d, ",a[i]);
	printf("\n");
}

int main()
{
	double time=0.0;
	int i,n=100;
	int a[n];
	for(i=0;i<n;i++){
		a[i]=rand();
	}
	
	clock_t begin= clock();
	
	for(i=0;i<100000; i++){
		bubble(a,n);
	}
	clock_t end=clock();
	
	time +=(double)(end-begin)/CLOCKS_PER_SEC;
	printf("The elapsed time for bubble sorting is %f seconds", time);
    printf("\n");
	printArray(a, n);

	return 0;
}
