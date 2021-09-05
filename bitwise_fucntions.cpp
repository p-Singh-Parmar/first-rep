#include<iostream>
using namespace std;

int getBit(int n, int pos)
{
    return ((n & (1<<pos)!=0));
}

int setBit(int n, int pos){
    return (n | (1<<pos));
}

int clearBit(int n, int pos)
{
    int i = ~(1<<pos); 
    return (n & i);
}

int updateBit(int n, int pos, int value)  // combination of clearBit and setBit
{
    int i = ~(1<<pos);  
    n = n & i;          //putting 0 at the given position
    int k = value<<pos;
    return n | k;
}

bool ispower2(int n){
    return !(n && (n & n-1));
}

int countOnes(int n){
    int c=0;
    while(n!=0){
        n = (n & (n-1));
        c++;
    }
    return c;
}

void subsets(int arr[], int n)
{
    for(int i=0; i < (1<<n); i++)
    {
        for(int j=0; j<n; j++)
        {
            if( i & (1<<j) )
                cout<<arr[j]<<" ";
        } cout<<endl;
    }
}

int main()
{
    //cout<<getBit(5,2)<<endl;
    cout<<setBit(5,1)<<endl; 
    cout<<clearBit(5,2)<<endl;
    cout<<updateBit(5,1,1)<<endl;
    cout<<ispower2(31)<<endl;
    cout<<countOnes(6);
    int arr[4]={1,2,3,4};
    subsets(arr, 4);
    return 0;
}