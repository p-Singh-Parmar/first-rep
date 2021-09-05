#include<stdio.h>
#include<time.h>

void insertion_sort(int ar[], int size)
{
	int i,j,temp;
	
	for(i=0;i<size;i++)
	{
		temp=ar[i];
		j=i-1;
		while(j>=0 && ar[j]>temp)
		{
			ar[j+1]=ar[j];
			j--;
		}
		ar[j+1]=temp;
	}
}

void print(int ar[], int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d\t",ar[i]);
	}
}

void binary_search(int a[], int size, int search)
{
	int strt, end, mid;
	strt = 0;
  	end = size - 1;
  	mid = (strt+end)/2;

  while (strt <= end) {
    if (a[mid] < search)
      strt = mid + 1;
    else if (a[mid] == search) {
      printf("%d found at location %d\n", search, mid+1);
      break;
    }
    else
      end = mid - 1;

    mid = (strt + end)/2;
  }
  if (strt > end)
    printf("Not found! %d isn't present in the list.\n", search);
}


int main()
{
	clock_t begin= clock();
	double time=0.0;
	int i,search,size=100;
	int a[size];;
	
	for(i=0; i<size; i++){
		a[i]=rand()%100;
	}
	
	insertion_sort(a,size);
	print(a,size);
	
	printf("\nenter element to be searched:");
	scanf("%d",&search);
	
	binary_search(a, size, search);
	
	clock_t end=clock();
	
	time +=(double)(end-begin)/CLOCKS_PER_SEC;
	printf("The elapsed time is %f seconds", time);
    printf("\n");
	
	}
