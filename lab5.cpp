#include<iostream>
using namespace std;

class Stack
{
	private:
		int arr[5];
		int top;
		
	public:
		Stack()
		{
			top=-1;
			for(int i=0; i<5;i++)
			{
				arr[i]=0;
			}
		}
		
		
		bool isEmpty()
		{
			if(top==-1)
				return true;
			else
				return false; 
		}
		
		bool isFull()
		{
			if(top==4)
				return true;
			else
				return false;
		}		
		void push(int val)
		{
			if(isFull())
				cout<<"stack overrflow"<<endl;
			else
			{
				top++;
				arr[top]=val;
			}
		}
		
		int pop()
		{
			if(isEmpty())
				cout<"stack underflow\n";
			else
			{
				return arr[top];
				arr[top]=0;
				top--; 
			}
		}
		
		int peek(int pos)
		{
			if(isEmpty())
			{
				cout<<"stack underflow"<<endl;
				return 0;
			}
			else
				return arr[pos];
		}
		
		void change(int val, int pos)
		{
			arr[pos]=val;
		}
		
		void display()
		{
			cout<<"all values in stack are:\n"<<endl;
			for(int i=4;i>=0;i--)
			{
				cout<<arr[i]<<endl;
			}
		}
			
};

int main()
{
	
	Stack s1;
	int value;
	
	for(int i=0;i<5;i++)
	{
		cin>>value;
		s1.push(value);
	}
	
	int p=	s1.pop();
	printf("\n%d\n",p);
	
	
	
	s1.display();
	return 0;
}

