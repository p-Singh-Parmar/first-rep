#include<iostream>
using namespace std;

class queue
{
	public:
		int n;
		int arr[5];
		int front=-1;
		int rear=-1;
	
	void enQ()
	{
		cout<<"enetr data:\n";
		cin>>n;
		arr[rear]=n;
		rear++;
		if(front==-1)
			front++;
	}
	void deQ()
	{
		cout<<arr[front]<<endl;
		arr[front]=0;
		front++;
	}
	
	
	int main()
	{
		queue q;
		q.enQ();
		q.enQ();
		q.enQ();
		q.deQ();
		q.enQ();
		return 0;
	}	
};
