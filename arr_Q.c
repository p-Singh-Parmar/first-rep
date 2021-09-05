#include<stdio.h>

		int n;
		int arr[5];
		int front;
		int rear;
	
	void enQ()
	{
		printf("enetr data:\n");
		scanf("%d",&n);
		rear++;
		arr[rear]=n;
		
		if(front==-1)
		{
			front=0;
		}
	}
	
	void deQ()
	{
		printf("value out: %d\n",arr[front]);
		front++;
	}
	
	void Rear()
	{
		printf("element at rear is:%d\n",arr[rear]);
		
	}
	void Front()
	{
		printf("elemnt at front is:%d\n",arr[front]);
	}
	void status()
	{
		if(rear==-1 && front==-1)
		printf("queue is empty");
		else if(rear==5 && front!=0)
		printf("queue is full");
		
	}
	
	void display()
	{
		int i;
		printf("\n");
		for(i=front;i<rear+1;i++)
		{
			printf("%d\t",arr[i]);
		}
	}
	int main()
	{
		front=-1; rear=-1;
		int choice;
	do
	{
	printf("1. for Enqueue \n");
	printf("2. for Dequeue\n");
	printf("5. print elemnts in list\n");
	printf("3. for rear elemnt\n");
	printf("4. for front elemnt\n");
	printf("6. for status\n");	
	printf("enter choice:\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 0:
			break;
			
		case 1:
			enQ();
			break;
		case 2:
			deQ();
			break;
		case 3:	
			Rear();
			break;
		case 4:
			Front();
			break;
		case 5:
			display();
			break;
		case 6:
			status();
			break;
	}
	}while(choice!=0);
	
		return 0;
	}	
