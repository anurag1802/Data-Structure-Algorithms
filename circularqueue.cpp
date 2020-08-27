#include<iostream>
#define size 5
using namespace std;
int queue[size];
int front=-1, rear=-1;

//insert any element
void enqueue (int element)
{
	if((rear+1)%size==front)
	{
		cout<<"\nStack overflow"<<endl;
	}
	else if(front==-1 && rear==-1)
	{
		cout<<"\nyour element "<<element<<" is added into queue"<<endl;
		front=rear=0;
		queue[rear]=element;
	}
	else
	{
		cout<<"\nyour element"<<element<<" is added into queue."<<endl;
		rear=(rear+1)%size;
		queue[rear]=element;
	}
}

//to delete any element

void dequeue (void)
{
	if(front==-1 && rear==-1)
	{
		cout<<"\nStack underflow"<<endl;
	}
	else if(front==rear)
	{
		cout<<"\nyour element "<<queue[front]<<" is deleted"<<endl;
		front=rear=-1;
	}
	else
	{
		cout<<"\nyour element "<<queue[front]<<" is deleted"<<endl;
		front=(front+1)%size;
	}
}

//display elements of queue
void display (void)
{
	int i;
	cout<<"\ndisplay: ";
	if(front==-1 && rear==-1)
	{
		cout<<"\nstack is empty"<<endl;
	}
	else 
	{
		for(i=front; i<=rear; i++)
			{
				cout<<"\t"<<queue[i];
			}
	}
	
}

//to see front element
void peek (void)
{
	if(front==-1 && rear==-1)
	{
		cout<<"\nstack is empty"<<endl;
	}
	else
	{
		cout<<"\nyour front element is "<<queue[front]<<endl;
	}
}

int main()
{
	enqueue(10);
	enqueue(20);
	enqueue(-5);
	display();
	peek();
	dequeue();
	peek();
	display();
	return 0;
}



