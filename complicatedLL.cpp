class Node
{
	public:
		int  key;
		int data;
		Node* next;
		Node()
		{
			key=0;
			data=0;
			next=NULL;
		}
		Node(int k, int d)
		{
			key=k;
			data=d;
			next=NULL;
		}
		void 
		int main()
		{
			
};

class singleLinkedList
{
	public:
		Node *head;
		singleLinkedList()
		{
			head=NULL;
		}
		Node nodeExist(int k) //check if node exist using key value
		{
			Node* temp=NULL;
			Node* ptr=head;
			while(ptr!=NULL)
			{
				if(ptr->key==k)
				{
					temp=ptr;
				}
				ptr=ptr->next;
			}
			return temp;
		}
		//2. To append a new node
		void append(Node *n);
		{
			if(nodeExist(n->key)!=NULL)
			{
				cout<<"node already exist\n";
			}
			else
			{
				if(head==NULL)
				{
					head=n;
					cout<<"node appended\n";
					
				}
				else
				{
					Node* ptr=head;
					while(ptr->next!=NULL)
					{
						ptr=ptr->next
					}
					ptr->next=n;
					cout<<"node appended\n";					
				}
			}
			
			
		}
	//3.Prepend a node at the start
		void prepend(Node *n)
		{
			if(nodeExist(n->key)!=NULL)
			{
				cout<<"node with this key already exist\n";
			}
			
			else
			{
				n->next=head;
				head=n;
				cout<<"node prepended\n";
				
			}
			
		}
	//4.Insert a node
		void insertNode(int k, Node *n)
		{
			Node *ptr=nodeExist(k);
			if(*ptr==NULL)
				cout<<"node does not exist\n";
				
			else
			{
				if(nodeExist(n->key)!=NULL)
				{
					cout<<"node with this key already exist\n";
				}
				else
				{
					n->next=ptr->next;
					ptr->next=n;
					cout<<"node inserted\n";
				}
			}
		}
	//5
		
			
			
		}
		void updateNode(key)
		
		
	//6.deleting a node	
		void deleteNode(int k)
		{
			Node *ptr=nodeExist(k);
			if(*ptr==NULL)
				cout<<"node does not exist\n";
			else if(head!=NULL)
			{
				if(head->key==k)
				{
					head=head->next;
					cout<<"node unlinked with key value: "<<k<<endl;
				}
				else
				{
					while(head->next!=NULL)
					{
						if(head->key!=k)
						{
							head
						}
					}
				}
			}
			else
	
			
		}
		
		
	int main()
	{
		Node n1(1,10);
		Node n2(2,20);
		Node n3(3,30);
		
		singleLinkedList s(&n1);
		s.append(&n2);
		s.prepend(&n3);
		
	}
}
