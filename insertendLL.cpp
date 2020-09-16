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
}
