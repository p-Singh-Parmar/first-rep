#include<stdio.h>
struct node
{
	int data;
	struct node* next;
}; struct node *front; struct node *rear;

void enqueue()
{
		
		struct node *newnode;
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("enter data:\n");
		scanf("%d",&newnode->data);
		
		if(front==NULL)
		{
			front=newnode;
			rear=front;
		}
		else
		{
			rear->next=newnode;
			rear=newnode;
			rear->next=NULL;
		}
		
}

void dequeue()
{
	struct node *temp=front;
	front=front->next;
	free(temp);
}

int peep()
{
	int n;
	printf("enter item to be searched:\n");
	scanf("%d",&n);
	struct node *temp=front;
	while(temp!=NULL)
	{
		if(n==temp->data)
		{
			return 1;
			break;
		}
		temp=temp->next;
	}
}

void display()
{
	
	struct node *temp;
	temp=front;
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
}
void main()
{
	front=NULL;
	rear=NULL;
	
	int choice=1;
	do
	{
	printf("1. for enqueue\n");
	printf("2. for dequeue\n");
	printf("3. to see a particular element\n");
	printf("5. display all elements\n");
	printf("6. dispaly particular element at a node\n");
	
	printf("enter choice:\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 0:
			break;
			
		case 1:
			enqueue();
			break;
		case 2:
			dequeue();
			break;
		case 3:
			printf("%d\n",peep());;
			break;
		case 4:
			display();
			break;
	}
	}while(choice!=0);
	
}
