#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *right,*left; //where right and left are nodes with respect to vertex	
};
struct node *createBinTree(void)
{
	int element;
	struct node *newnode = new node;
	cout<<"Enter data :(-1 to exit) : ";
	cin>>element;
	if(element==-1)
	{
		return NULL;
	}
	newnode->data=element;
	newnode->right=NULL;
	newnode->left=NULL;
	cout<<"Enter left node of"<<element<<":\n";
	newnode->left=createBinTree();
	cout<<"Enter right node of"<<element<<":\n";
	newnode->right=createBinTree();
	return newnode;
	
}

//main function
int main()
{
	struct node *createBinTree(void);
	struct node *root=NULL;
	root = createBinTree();
	cout<<"Your tree has been created!!"<<endl;
}
