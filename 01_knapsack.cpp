#include<bits/stdc++.h>
using namespace std;

int knapsack(int wt[], int val[], int W, int n,int t[n][W])
{
    if(W==0 || n==0)
        return 0;

    if(t[n][W]=-1)
        return t[n][W];

    if(wt[n-1]<=W)
        return t[n][W] = max(val[n-1] + knapsack(wt, val,W-wt[n-1],n-1), knapsack(wt, val, W, n-1));

    else if(wt[n-1]>=W)
        return t[n][W] = knapsack(wt, val, W, n-1);
}

int main(){
    int n=4,W=7;
    int wt[n]={1,3,4,5};
    int val[n]={1,4,5,7};
    int static t[102][1002];
    memset(t,-1,sizeof(t));
    knapsack(wt,val,W,n,t);
    return 0;
}