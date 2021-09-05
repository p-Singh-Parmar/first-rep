#include <stdio.h>
#include<conio.h>
#include<time.h>

int binarySearch(int a[], int key, int low, int high)
{
	while (low <= high) {
		int mid = low + (high - low) / 2;
		if (key == a[mid])
			return mid + 1; 
		else if (key > a[mid])
			low = mid + 1;
		else
			high = mid - 1;
	}

	return low;
}

void insertionSort(int a[], int n)
{
	int i, loc, j, k, key;

	for (i = 1; i < n; ++i) {
		j = i - 1;
		key = a[i];

		
		loc = binarySearch(a, key, 0, j);

		
		while (j >= loc) {
			a[j + 1] = a[j];
			j=j-1;
		}
		a[j + 1] = key;
	}
}


int main()
{
    int size,i;
    double time=0.0;
    printf("ENTER SIZE = ");
    
    scanf("%d",&size);
    printf("\n");
    int  arr[size];
    for(i=0;i<size;i++)
    {
    	arr[i]=rand();
	}
	
	clock_t begin=clock();
	insertionSort(arr, size);
	clock_t end=clock();
	
	time=(double)(end-begin)/CLOCKS_PER_SEC;
	printf("The elapsed time for insertion sorting is %f seconds", time);
    printf("\n");

	printf("Sorted array: \n");
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);

	return 0;
}
