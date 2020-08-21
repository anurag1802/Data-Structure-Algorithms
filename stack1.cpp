#include <iostream>
#define size 5
using namespace std;
int stack[size], top=-1;

//to insert element in the stack 
int push (int element)
{
	if(top==size-1) cout<<"stack is full element cannot be insert";
	else
	{
		top++;
		stack[top] = element;
		cout<<"your element is "<<stack[top]<<"pushed"<<endl;
	}

}

//to delete element from stack
void pop (void){
	if(top==-1) cout<<"stack is empty cannot delete any element\n";
	else 
	{
		cout<<"your top element" <<stack[top]<<" is popped"<<endl;
		top--;
		
	}

}

//to display element of stack
int display (void)
{
	int i;
	cout<<"Display ->";
	if(top==-1) cout<<"stack is empty insert any element to display"<<endl;
	else for(i=0; i<top; i++)
	{
		cout<<stack[i]<<"\t";
	}

}

//to peek top element in stack
int peek (void)
{
	if(top==-1) cout<<"stack is empty!!";
	else
	{
		cout<<stack[top];
	}
	
}

int main (){
	push(10);
	push(20);
	push(30);
	pop();
	display();
	peek();
	return 0;
}
