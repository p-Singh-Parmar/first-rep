#include<stdio.h>

#include<time.h>

void insertion(int a[], int n)
{
	int i,j, key;
	for(i=1;i<n;i++){
		key=a[i];
		j=i-1;
		while(j>=0 && a[j]>key)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=key;
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
	
	int i,n = 1000;
	int a[n];
	for(i=0;i<n;i++){
		a[i]=rand();
	}
	clock_t begin= clock();
	
	
	for(i=0;i<100000; i++){
		insertion(a,n);
	}
	clock_t end=clock();
	
	time +=(double)(end-begin)/CLOCKS_PER_SEC;
	printf("The elapsed time for insertion sorting is %f seconds", time);
    printf("\n");
	printArray(a, n);

	return 0;
}
