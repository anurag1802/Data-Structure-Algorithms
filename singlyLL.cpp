#include <iostream>
using namespace std;
//node structure declaration//
struct node{
	int data;
	struct node *next;
};
//driver function//
int main()
{
	struct node *start = NULL, *newnode, *temp;
	int choice;
	do
	{
		newnode = new node;
		cout<<"Enter data :\n";
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
		cout<<"Do you wish to continue ? (1 for YES/ 0 for NO)";
		cin>>choice;
	}
	while (choice !=0);
	
	//algorithm for displaying data inside linked list//
	temp=start;
	cout<<"Display: ";
	while(temp != NULL)
	{
		cout<<" "<<temp->data;
		temp = temp->next;
	}
}
