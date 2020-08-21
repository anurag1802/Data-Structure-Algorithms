#include<iostream>
#define size 5
using namespace std;
int front=-1,rear=-1,queue[size];
//enqueue function declaration
int enqueue(int x)
{
	if(rear==size-1)
	{
		cout<<"Queue Overflow!!!"<<endl;
	}
	else if(front==-1 && rear==-1)
	{
		front=rear=0;
		queue[rear]=x;
		cout<<"your element "<<x<<" is enqueued"<<endl;
	}
	else
	{
		rear++;
		queue[rear]=x;
		cout<<"your element "<<x<<" is enqueued"<<endl;
	}
};
//dequeue function declaration
void dequeue(void)
{
	if(front==-1 && rear==-1)
	{
		cout<<"Queue is empty!!!"<<endl;
	}
	else if(front==rear)
	{
		cout<<"your element "<<queue[front]<<" is deleted"<<endl;
		front=rear=-1;
	}
	else
	{
		cout<<"your element "<<queue[front]<<" is deleted"<<endl;
		front++;
	}
}
//display function
int display (void)
{
	int i;
	cout<<"Display ->";
	if(front==-1 && rear==-1)
	{
		cout<<"queue empty\n";
	}
	else for(i=front; i<=rear; i++)
	{
		cout<<"\t"<<queue[i];
	
	}
	
}
int peek (void)
{
	if(front==-1 && rear==-1)
	{
		cout<<"queue empty"<<endl;
	}
	else 
	{
		cout<<"data at front = "<<queue[front]<<endl;
	}
}
int main()
{
	enqueue(10);
	enqueue(20);
	enqueue(30);
	dequeue();
	dequeue();
	peek();
	display();
	return 0;
}

