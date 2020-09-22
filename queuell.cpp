#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *next;
};
struct node *front=NULL, *rear=NULL;

//function of enqueue//
void enqueue(int element)
{
	struct node *newnode=new node;
	newnode->data=element;
	newnode->next=NULL;
	if(front==NULL && rear==NULL)
	{
		front=rear=newnode;
	}
	else
	{
		rear->next=newnode;
		rear=newnode;
	}
}

//dequeue function of queue//
void dequeue (void)
{
	struct node *temp=front;
	if(front==NULL)
	{
		cout<<"Queue is empty!!"<<endl;
	}
	else
	{
		front=front->next;
		delete(temp);
	}
	
}

//display function//
void display (void)
{
	struct node *temp=front;
	cout<<"\nDisplay : ";
	while(temp != NULL)
	{
		cout<<"\t"<<temp->data;
		temp=temp->next;
	}
	cout<<endl;
}

//function to peep top element//
void peep (void)
{
	if(front==NULL)
	{
		cout<<"Queue is empty!!";
		return;
	}
	else
	{
		cout<<"\nfront element : "<<front->data;
		cout<<"\nrear element : "<<rear->data;
	}
}

//main function//
int main ()
{
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	display();
	dequeue();
	display();
	peep();
	display();
}

