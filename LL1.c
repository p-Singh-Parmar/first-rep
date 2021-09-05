#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>


	struct node
	{
		int num;
		struct node *next;
	};
	
struct node* Input()
{
	struct node *head;
	
	head=(struct node*)malloc(5*sizeof(struct node));
	head->num=1;
	head->next->num=2;
	head->next->next->num=3;
	head->next->next->next->num=4;;
	head->next->next->next->next->num=5;
	head->next->next->next->next->next=NULL;
	return head;
}
void print(struct node *head)
{
	printf("the list is\n");
	printf("%d\n",head->num);
	printf("%d\n",head->next->num);
	printf("%d\n",head->next->next->num);
	printf("%d\n",head->next->next->next->num);
	printf("%d\n",head->next->next->next->next->num);
	printf("\n");
}
int main()
{
	struct node *head=Input();
	print(head);
	return 0;
}
