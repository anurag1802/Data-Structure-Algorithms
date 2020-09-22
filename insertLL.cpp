#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *next;
};
struct node *start=NULL, *newnode, *temp;

//insert from beginning//
void insertbegin (void)
{
	newnode->next=start;
	start=newnode;
}

//insert from end//
void insertend (void)
{
	temp=start;
	while(temp->next != NULL)
	{
		temp=temp->next;
	}
	temp->next = newnode;
}

//insert from pos//
void insertpos (int p)
{
	int count =1;
	temp = start;
	while(count<p)
	{
		temp = temp->next;
		count++;
	}
	newnode->next = temp->next;
	temp->next = newnode;
}

//display function//
void display (void)
{
	temp=start;
	while(temp != NULL)
	{
		cout<<temp->data;
		temp=temp->next;
	}
}

//main function//
int main()
{
	int p,choice;
	do{
		cout<<"\n1:Insert from beginning\n";
		cout<<"\n2:Insert from end\n";
		cout<<"\n3:Insert from position\n";
		cout<<"\n4:Display\n";
		cout<<"\n5:Exit\n";
		cout<<"Enter your choice : ";
		cin>>choice;
		if(choice==1 || choice==2 || choice==3)
		{
			newnode=new node;
			cout<<"Enter data : ";
			cin>>newnode->data;
			newnode->next=NULL;
		}
		switch(choice)
		{
			case 1:
				insertbegin();
				break;
			case 2:
				insertend();
				break;
			case 3:
				cout<<"Enter your position :";
				cin>>p;
				insertpos(p);
				break;
			case 4:
				display();
				break;
			case 5:
				break;
			default:
				cout<<"Please try again... Invalid choice!!\n";
		}
	}
	while (choice != 5);
}
