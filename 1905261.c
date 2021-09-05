#include<stdio.h>
#include<malloc.h>

struct node
{
	int data;
	struct node *next;
};struct node *head; struct node *head2; struct node *head3=NULL;

void main()
{
	
	head=NULL;
	head2=NULL;
	int choice=1;
	do
	{
	printf("1. create link list\n");
	printf("2 to create list2\n");
	printf("4. print elemnts in list\n");
	printf("3. interesct elements\n");
	
	printf("enter choice:\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 0:
			break;
			
		case 1:
			create1();
			break;
		case 2:
			create2();
			break;
		case 3:
			intersect();
			break;
		case 4:
			print(head3);
			break;
	}
	}while(choice!=0);
}

void create1()
{
	int choice=1,data;
	struct node *temp, *newnode;
	head=NULL;
	while(choice==1)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("enter data for list 1\n");
		scanf("%d",&newnode->data);
		newnode->next=0;
		if(head==NULL)
		{
			head=newnode;
			temp=head;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
		printf("%d\n",newnode->data);
		printf("do you want to continue?(1/0) \n");
		scanf("%d",&choice);
	}
}


void create2()
{
	int choice=1,data;
	struct node *temp,*newnode, *head2;
	head2=NULL;
	while(choice==1)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("enter data for list2\n");
		scanf("%d",&newnode->data);
		newnode->next=0;
		if(head2==NULL)
		{
			head=newnode;
			temp=head2;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
		printf("%d\n",newnode->data);
		printf("do you want to continue?(1/0) \n");
		scanf("%d",&choice);
	}
}


void print(struct node *head3)
{
	struct node *temp;
	temp=head3;
	printf("\nlist is:\n");
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	
	}	
	printf("hello");
}

void intersect()
{
	struct node *temp1;
	struct node *temp2;
	struct node *temp3;
	temp1=head;
	temp2=head2;
	temp3=head3;
	while(temp1!=NULL)
	{
	
	while( temp2!=NULL)
	{
		if(temp1==temp2)
		{
			temp3=temp1;
		}
		
		temp2=temp2->next;
		temp3=temp3->next;
	}
	temp1=temp1->next;
	temp2=head2;
	}
	printf("%d",temp3->data);
}






