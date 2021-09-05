#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    vector<int> v={-2,1,-3,4,-1,2,1,-5,4};
    int m=v[0];
    int i=0,sum=0;
    for(i=0; i<v.size(); i++)
    {
        sum= max(sum+v[i], v[i]);
        if(sum>m)
            m=sum;
    }
    cout<<m;
    return 0;
}