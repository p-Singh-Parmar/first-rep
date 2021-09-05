//User function template for C++

// arr : given array
// l : starting index of the array i.e 0
// r : ending index of the array i.e size-1
// k : find kth smallest element and return using this function
#include<iostream>
using namespace std;


void kthSmallest(int a[], int l, int r, int k) {
    //code here
    int temp,i,j;
    for(i=l; i<r; i++)
    {
        for(j=l;j<r-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<<a[k-1];
}

int main()
{
	int a[]={2,23,30,1,50,12,9};
	int l=0,r=6,k=3;
	kthSmallest(a,l,r,k);
}

