#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *next;
};
struct node *start=NULL, *newnode, *temp, *nextnode;
//*function to create a circular linked list*//
void createCircularLinkedList(void)
{
	struct node *newnode;
	int choice=1;
	while(choice != 0)
	{
		newnode= new node;
		cout<<"Enter data to insert:";
		cin>>newnode->data;
		newnode->next=NULL;
		if(start==NULL)
		{
			start=temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
		temp->next=start;
		cout<<"Continue ? 1:YES, 0:NO =>";
		cin>>choice;
	}
}

//display function //
void display (void)
{
	temp = start;
	do{
		cout<<temp->data;
		temp=temp->next;
	}
	while(temp!=start);
	cout<<endl;
}

int main()
{
	createCircularLinkedList();
	display();
}
