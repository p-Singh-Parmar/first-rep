#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[7]={1,4,1,2,7,5,2};
	int b[9]={0}, c[7];
	
	for(int i=0;i<7;i++){
		b[a[i]]++;
		
	}
	// array to store frequency of the numbers
	for(int i=1;i<9;i++){
		b[i]+=b[i-1];
	}
	
	
	for(int i=0;i<7;i++)
	{
		c[b[a[i]]-1]=a[i];
		b[a[i]]--;
	}
	
	for(int i=0;i<7;i++){
		cout<<c[i]<<endl;;
	}
	return 0;
	
}
