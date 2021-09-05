#include<stdio.h>
class queue
{
	public:
		int n;
		int arr[5];
		int front;
		int rear;
	
	void enQ()
	{
		printf("enetr data:\n");
		scanf("%d",n);
		arr[rear]=n;
		rear++;
		if(front==-1)
			front++;
	}
	void deQ()
	{
		printf("value out: %d",arr[front]);
		arr[front]=0;
		front++;
	}
	void dispaly()
	{
		int i;
		printf("\n");
		for(i=0;i<5;i++)
		{
			printf("%d\n",arr[i]);
		}
	}
	int main()
	{
		front=-1; rear=-1;
		queue q;
		q.enQ();
		q.enQ();
		q.enQ();
		q.deQ();
		q.enQ();
		q.dispaly();
		return 0;
	}	
};
