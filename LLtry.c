#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>


struct node
{
	int num;
	int *next;
};

struct node* Input()
{
	struct node *head;
	int n=5;
	head=(struct node*)malloc(n*sizeof(struct node));
	while(head->next!=0)
	{
		head=head->next;
		head->num=n;
		n--;
		printf("d\n",head->num);
	}
}
int main()
{
	struct node *head=Input();
	
	return 0;
}
