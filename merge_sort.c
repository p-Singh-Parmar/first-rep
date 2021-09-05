#include <stdio.h>
#include<time.h>

void merging(int *arr, int s, int e)
{

    int mid = (s + e) / 2;
    int i = s;
    int j = mid + 1;
    int k = s; // yh counter variable hai jo ki temp aray mein use hoga
    int temp[100000];

    // Check for chota bada and place in new array accordingly
    while (i <= mid && j <= e)
    {
        if (arr[i] < arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
        }
    }
	//Ab Maanlo ki ek koi phle khtm hogyi to upr wli condition false then hamko poori poori array
    // as it is copy krni pdegi haina ? to uske lie do loop lgege

    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }
    while (j <= e)
    {
        temp[k++] = arr[j++];
    }

    //Ab ham sorted order mein sab kaam kr chuke daalne ka
    // Now copy all the elemnts in the main array  for using in next things correctly
    for (i = s; i <= e; i++)
    {
        arr[i] = temp[i]; // copied for respective recursive call
    }
}

void mergesort(int *arr, int s, int e)
{

    if (s >= e) // Mtlb ki sirf ek hi element hai to aap wwapis return maaro
    {
        return;
    }

    // Now Divide the Array into two parts
    int mid = (s + e) / 2;
    mergesort(arr, s, mid);
    mergesort(arr, mid + 1, e);

    //Ab maine dono ko tod lia hai recursively ab mujhe inko join krna h sorted order mein concatenate
    merging(arr, s, e);
}
int main()
{
	double time=0.0;
    int n=50000,i;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        arr[i]=rand();
    }
    printf("Before Merge Sorting\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    int start = 0;	int end = n - 1;
    
    clock_t beginT=clock();
    mergesort(arr, start, end);
    clock_t endT= clock();
    
    printf("After Merge Sorting\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    time +=(double)(endT-beginT)/CLOCKS_PER_SEC;
	printf("\nThe elapsed time for merge sorting sorting is %f seconds", time);
    printf("\n");
	

    return 0;
}
