#include<bits/stdc++.h>
using namespace std;

int trappingWater(int a[], int n){  //using brute with intution method

    int left=0, right=n-1;
    int rain=0;
    int mle=0, mri=0;
    
    while(left>=right)
    {
        if(a[left]<=a[right])
        {
            if(a[left]>=mle)
                mle=a[left];
            else
                rain+=mle-a[left];
                
            left++;
        }
        else
        {
            if(a[right]>=mri)
                mri=a[right];
            else
                rain+=mri-a[right];
                
            right--;
        }
    }
return rain;
}

/*int height(node *root)
{
    if(root==null) 
        return null;

    int left = max(root->left);
}*/

int RotArrMin(int a[], int n)
{
    int strt=0, end=n-1;
    int mid=(end-strt)/2;
    int next=(mid+1)%n;
    int prev= (mid+n-1)%n;

    while(strt<=end)
    {
        mid= (end-strt)/2; next=(mid+1)%n; prev= (mid+n-1)%n;
        if(a[mid]<=a[next] && a[mid]<=a[prev])
            return mid;
        
        if(a[strt]<=a[mid])
            strt=mid+1;
        else if(a[end]>=a[mid])
            end=mid-1;
    }
    return mid;
}

int main()
{ 
    int n=9;
    int arr[n]={4,5,6,7,8,0,1,2,3};
    //cout<<trappingWater(arr,n);
    cout<<RotArrMin(arr,n);
    cout<<"hello";
    return 0;
}