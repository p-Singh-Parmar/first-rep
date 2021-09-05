#include<iostream>
#include<vector>
using namespace std;

void miniMaxSum(int arr[]) {
	
int i,j,temp;
    for(i=0; i<4;i++)
    {
        for(j=i+1; j<5;j++)
        {
            if(arr[i]>arr[j])
            {    
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
    
        }
    }
    cout<<endl;
        int max=0,min=0;
        for(i=1;i<5;i++)
        {
            max=max+arr[i];
        }
        min=min+max+arr[0]-arr[4];
     cout<<min<<endl;
	 cout<<max;   
}

int main()
{
	int arr[5];
	int i;
	for(i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	miniMaxSum(arr);
}
