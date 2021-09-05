#include<iostream>
#include<malloc.h>
using namespace std;
void create()
{
	int ch=1,data;
	struct node *temp, *newnode, *head;
	head=NULL;
	while(ch!=0)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		cout<<"enter data";
		cin>>newnode->data;
		newnode->next=NULL;
		if(head==NULL)
		{
			head=newnode;
			temp=head;
		}
		else
		{
			head->next=newnode;
			temp=newnode;
		}
		cout<<"do you want to coni=tinue?";
		cin>>ch;
	}
	temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data;
		temp=temp->next;
	}
}
int main()
{
	create();
}
