#include<stdio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
int preorder(struct node *root)		//printng in preorder
{
	if(root==0)
	{ return 0;	}
	printf("%d\t",root->data);
	preorder(root->left);
	preorder(root->right);
}
search(int val, struct node *root)    //searching a number in tree
{
	if(root==NULL)
	{
		return NULL;
	}
	if(root->data==val)
	{
		return root->data;
	}
	if(root->data>val)
	{
		return search(val,root->left);
	}
	if(root->data<val)
	{
		return search(val,root->right);
	}
}
insert(int val,struct node *root)		//inserting a newnnode
{
	if(root==NULL)
	{
		root->data=val;
		return;
	}
	if(root->data>val)
	{
		if(root->left==NULL)
		{
			root->left->data=val; 
			return;
		}
		insert(val,root->left);
	}
	if(root->data<val)
	{
		if(root->right==NULL)
		{
			root->right->data=val;
			return;
		}
		insert(val,root->right);
	}
	}
int height(struct node *p)		//finding height of binary tree
{
	int maximum;
	if(p==NULL)
		return 0;
	int left=height(p->left);
	int right=height(p->right);
	
	int maximum = max(left, right)+1;
	return maximum;
}

int main()
{
	int n, i, item;
	struct node *p, *q, *root;
	printf("enter the number of node:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		p=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&item);
		p->data=item;
		p->left=NULL;
		p->right=NULL;
		if(i==0)
			root=p;
		else
		{
			q=root;
			while(1)
			{
				if(p->data>q->data)
				{
					if(q->right==NULL)
					{
						q->right=p;
						break;
					}
					else
					{
						q=q->right;
					}
				}
				else
				{
					if(q->left==NULL)
					{
						q->left=p;
						break;
					}
					else
					{
						q=q->left;
					}
				}
			}
		}
		
	}
	printf("preorder is:  ");
	preorder(root);
	printf("\n");
	int h=height(root);
	printf("height is: %d",h);
/*	int value=5;
	int s=search(value,root);
	printf("\n\n\nvalue is :%d\n",s);
	int val=15;
	insert(val,root);
	
	printf("preorder is:  ");
	preorder(root);
	printf("\n"); */
}
