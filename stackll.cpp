#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *prev;
};
struct node *top=NULL;

//function to push any element//
void push (int element)
{
	struct node *newnode=new node;
	newnode->data=element;
	newnode->prev=top;
	cout<<"\nyour element "<<element<<" is inserted\n";
}

//function to pop element//
void pop (void)
{
	struct node *temp=top;
	if(top==NULL)
	{
		cout<<"Stack Empty";
	}
	else
	{
		top=top->prev;
		delete(temp);
	}
		cout<<"Your element is popped";
}

//function to display stack elements//
void display(void)
{
	struct node *temp=top;
	while(temp != NULL)
	{
		cout<<temp->data;
		temp=temp->prev;
	}
	cout<<endl;
}

//function to peep from stack//
void peep (void)
{
	if(top==NULL)
	{
		cout<<"Stack is empty:";
		return;
	}
	else
	{
		cout<<"Element on the top is :"<<top->data<<endl;
	}
}

//main function//
int main ()
{
	push(10);
	push(20);
	push(30);
	push(40);
	display();
	pop();
	display();
	peep();
	display();
}
