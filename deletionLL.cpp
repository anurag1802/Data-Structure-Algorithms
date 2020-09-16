#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *next;
};
struct node *start=NULL, *newnode, *temp,*nextnode;

//*function to add element from end*//
void insertEnd(int element)
{
	newnode = new node;
	newnode->data = element;
	newnode->next = NULL;
	if(start==NULL)
	{
		start=newnode;
	}
	else
	{
		temp = start;
		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;
	}
}
//*function to delete element from beginning*//
void deleteBeginning()
{
	if(start == NULL)
	{
		cout<<"No element inside the linked list\n";
	}
	else
	{
		temp = start;
		start = start->next;
		delete(temp);
	}
}
//*function to delete element from end*//
void deleteEnd()
{
	temp = start;
	if(temp->next == NULL)
	{
		start=NULL;
		delete(temp);
	}
	else
	{
		while(temp->next->next != NULL)
		{
			temp = temp->next;
		}
		delete(temp->next);
		temp->next=NULL;
	}
}
//*function to delete element from specific position*//
void deletePosition(int pos)
{
	temp = start;
	int i;
	for(i=1; i<pos-1; ++i)
	{
		temp = temp->next;
	}
	nextnode = temp->next;
	temp->next = nextnode->next;
	delete(nextnode);
}
//*function to display elements inside the linked list*//
void display()
{
		temp=start;
	cout<<"\nDisplay: ";
	while(temp != NULL)
	{
		cout<<" "<<temp->data;
		temp = temp->next;
	}
}
//*main function*//
int main()
{
	insertEnd(10);
	insertEnd(20);
	insertEnd(30);
	insertEnd(40);
	insertEnd(50);
	display();
	deleteBeginning();
	display();
	deleteEnd();
	display();
	deletePosition(2);
	display();
	
}
