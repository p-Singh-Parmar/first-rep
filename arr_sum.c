#include <stdio.h>

int addnum(int *ptr, int n)
{
	int ind, tot=0;
	for(ind=0; ind<n; ind++){
		tot+=*(ptr+ind);
	} return tot;
}

int main()
{
	int i,n;
	printf("enter the size:");
	scanf("%d",&n);
	int a[n];
	
	for(i=0; i<n; i++){
		a[i]=rand()%100;
	}
	int sum= addnum(a, n);
    printf("Sum of all array elements = %d\n", sum);
}
