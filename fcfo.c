#include<stdio.h>
#include<stdlib.h>
 int main()
 
{
    int n,avgwt=0,avgtat=0,i,j;
    printf("Enter total number of processes:");
    scanf("%d",&n);
    int *bt=(int *)malloc(n*sizeof(int));
    int *at=(int *)malloc(n*sizeof(int));
    int *wt=(int *)malloc(n*sizeof(int));
    int *tat=(int *)malloc(n*sizeof(int));
    printf("\nEnter Burst Time and arrival time : \n");
    for(i=0;i<n;i++)
    {
        printf("P[%d]:",i+1);
        scanf("%d",&bt[i]);
        scanf("%d",&at[i]);
    }
 
    wt[0]=0;   
 
    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=bt[j];
    }
 
    printf("nProcess\tArrival Time\tBurst Time\tWaiting Time\tTurnaround Time\tResponse Time");
 
    for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];
        avgwt+=wt[i];
        avgtat+=tat[i];
        printf("\nP[%d]\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d",i+1,at[i],bt[i],wt[i],tat[i],wt[i]);
    }
 
    avgwt/=i;
    avgtat/=i;
    printf("\nAverage Waiting Time:%d",avgwt);
    printf("\nAverage Turnaround Time:%d",avgtat);
 
    return 0;
}
