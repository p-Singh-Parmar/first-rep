#include<stdio.h>
#include<malloc.h>
void main()
{

struct node
{
	int data;
	struct node* next;
};
	struct node *head, *temp;

head =0;
int choice=1;

while(choice)
{	
	 
	printf("enter data\n");
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	scanf("%d",&newnode->data);
	
	newnode->next=0;
	if(head==0)
	{
		head=newnode;
		temp=head;
	}
	else
	{
		temp->next=newnode;
		temp=newnode;
	}
	printf("do you want to continue?(0 or 1)\n");
	scanf("%d",&choice);
	
}
temp=head;
while(temp!=0)
{
	printf("%d	",temp->data);
	temp=temp->next;
}
getch();
}
