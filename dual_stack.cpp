#include<iostream>
using namespace std;

class Stack
{
	private:
		int arr[5];
		int b[5];
		int top,top2;
		
	public:
		Stack()
		{
			top=-1,top2=-1;
			for(int i=0; i<5;i++)
			{
				arr[i]=0;
				b[i]=0;
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
		void push2(int val)
		{
			{
				top2++;
				b[top2]=val;
			}
		}
		
		int pop()
		{
			if(isEmpty())
				cout<"stack underflow\n";
			else
			{
				int popval= arr[top];
				arr[top]=0;
				top--;
				return popval; 
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
		void display2()
		{
			cout<<"all values in stack 2 are:\n"<<endl;
			for(int i=4;i>=0;i--)
			{
				cout<<b[i]<<endl;
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
	s1.display();
	int p=	s1.pop();
	printf("\npopped value is:%d\n",p);
	s1.display();
	
	s1.push2(4);
	s1.push2(33);
	s1.push2(55);
	s1.push2(90);
	s1.push2(5);
	s1.display2();
	return 0;
}

