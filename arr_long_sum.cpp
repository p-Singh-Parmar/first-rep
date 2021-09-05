#include<iostream>
using namespace std;
void Sum(long ar[], int n)
{
    int i;
	long sum=0;
    
    for(i=0; i<n;i++)
    {
        cin>>ar[i];
        sum+=ar[i];
        }    
        cout<<sum;
}
int main()
{
    int n;
    cin>>n;
    long ar[n];
    Sum(ar,n);
    return 0;
}

