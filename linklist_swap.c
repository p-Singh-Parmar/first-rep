#include<stdio.h>
#include<malloc.h>

struct node
{
	int data;
	struct node *next;
};struct node *head; struct node *head2;

void main()
{
	
	head=NULL;
	int choice=1;
	do
	{
	printf("\n");
	printf("1. create link list\n");
	printf("2. Insert or delete node at front\n");
	printf("3. Insert or delete node at end\n");
	printf("4. print elemnts in list\n");
	printf("5. count number elemnts in list\n");
	printf("6. dispaly particular element at a node\n");
	printf("7. swap pair values\n");
	
	printf("enter choice:\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 0:
			break;
			
		case 1:
			head=create();
			break;
		case 2:
			front(head);
			break;
		case 3:
			END(head);
			break;
		case 4:
			print(head);
			break;
		case 5:
			count();
			break;
		case 6:
			ShowAtPos();
			break;
		case 7:
			swap(head);
			break;
	}
	}while(choice!=0);
	
}

int create()
{
	int choice=1,data;
	struct node *temp, *temp2, *newnode, *newnode2;
	head=NULL;
	head2=NULL;
	while(choice==1)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode2=(struct node)malloc(sizeof(struct node));
		printf("enter data\n");
		printf("enter data2\n");
		scanf("%d",&newnode->data);
		scanf("%d",&newnode2->data);
		newnode->next=0;
		newnode2->next=0;
		if(head==NULL || head2==NULL)
		{
			head=newnode;
			head2=newnode2;
			temp=head;
			temp2=head2;
		}
		else
		{
			temp->next=newnode;
			temp2->next=newnode2;
			temp=newnode;
			temp2=newnode2;
		}
		printf("%d\n%d\n",newnode->data, newnode2->data);
		printf("do you want to continue?(1/0) \n");
		scanf("%d",&choice);
	}
	return head,head2;
}
void front(struct node *head)
{
	int choice;
	printf("press 1 for Insert node at front and press 2 to delete\n");
	scanf("%d",&choice);
	struct node *newnode, *temp;
	switch(choice)
	{
		case 1:
			printf("enter data\n");
			scanf("%d",&newnode->data);
			newnode=(struct node*)malloc(sizeof(struct node));
			
			newnode->next=head;
			head=newnode;
			break;
			
		case 2:
			temp=head;
			head=head->next;
			free(temp);
			break;
	}
}
void END(struct node *head)
{
	int choice;
	printf("press 1 for Insert node at END and press 2 to delete\n");
	scanf("%d",&choice);
	struct node *newnode, *temp;
	temp=head;
	struct node *prevnode;
	switch(choice)
	{
		case 1:
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=newnode;
			
			break;
		case 2:
			
			while(temp->next!=NULL)
			{
				prevnode= temp->next;
				temp=temp->next;
			}
			prevnode->next=NULL;
			free(temp);
			break;
	}
}
void swap(struct node *head)
{
	struct node *temp=head;
	int c;
	while(temp!=NULL)
	{
		c=temp->data;
		temp->data=temp->next->data;
		temp->next->data=c;
		temp=temp->next;
		temp=temp->next;
	}
	
}
void intersect()
{
	struct node *temp, *temp2;
	temp=head;
	temp2=head2;
	while(temp!=NULL)
	{
		while(temp2!=NULL)
		{
			
		}
	}
}

void print(struct node *head)
{
	struct node *temp;
	temp=head;
	printf("\nlist is:\n");
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	
	}
	
	
}

void count()
{
	struct node *temp;
	int c=0;
	temp=head;
	while(temp!=NULL)
	{
		c++;
		temp=temp->next;
	}
	printf("number of nodes inside list: %d\n",c);
	
}

void ShowAtPos()
{
	int c=1,pos;
	printf("enter the position at which you want to display node:\n");
	scanf("%d",&pos);
	struct node *temp;
	temp=head;
	
	while(c!=pos)
	{
		temp=temp->next;
		c++;
	}
	printf("number at %d position:%d\n",pos,temp->data);
}
