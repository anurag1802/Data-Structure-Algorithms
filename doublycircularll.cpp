#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *next,*prev;
};
struct node *start=NULL, *end=NULL, *temp;

//function to create doubly circular linked list//
void DCLL(void)
{
	struct node *newnode;
	int choice =1;
	while(choice != 0)
	{
		newnode = new node;
		cout<<"Enter data to insert :\n";
		cin>>newnode->data;
		newnode->next=newnode->prev=NULL;
		if(start==NULL)
		{
			start=end=newnode;
			start->next=start;
			start->prev=start;
		}
		else
		{
			end->next=newnode;
			newnode->prev=end;
			newnode->next=start;
			start->prev=newnode;
			end=newnode;
		}
		cout<<"Continue 1:if YES and 0: if NO =>";
		cin>>choice;
	}
}

//function for display forward//
void displayForward(void)
{
	temp=start;
	do
	{
		cout<<temp->data;
		temp=temp->next;
	}
	while(temp != start);
	cout<<endl;
}

//function for display backward//
void displaybackward(void)
{
	temp=end;
	do{
		cout<<temp->data;
		temp=temp->prev;
	}
	while(temp != end);
	cout<<endl;
}

//main function.//
int main()
{
	DCLL();
	displayForward();
	displaybackward();
	
}
