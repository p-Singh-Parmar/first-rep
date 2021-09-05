#include<stdio.h>
int n;
int arr[];
int rear,front;
void main()
{
	rear=-1;
	front=-1;
	
	printf("enter the size of the array:");
	scanf("%d",&n);
	arr[n];
	int choice=1;
	while(choice!=0)
	{
		printf("enter 1 to insert element:");
		if(choice==1)
			enqueue();
		printf("enter 2 to delete element:");
		if(choice==2)
			dequeue();
		printf("enter 3 to display element:");
		if(choice==3)
			display();
		printf("enter 0 to insert element:");
		scanf("%d",&choice);
	}
}

void enqueue()
{
	printf("enter data:");
	scanf("%d",&arr[rear]);
	rear++;	
}

void dequeue()
{
	arr[front]=NULL;
	front++;
}

void display()
{
	int i;
	for(i=front;i<=rear;i++)
	{
		printf("%d\t",arr[i]);
	}
}
