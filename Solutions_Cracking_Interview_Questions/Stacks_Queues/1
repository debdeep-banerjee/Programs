#include<iostream>
#include<list>
using namespace std;
struct node{
	int data;
	node *next;
};
class Stack{
	public:
	node *top;
	node* push(node*,int);
	int pop(node*);
	void push_data_to_other_stack(node *,Stack, Stack); 
	Stack();
};
	
class MyQueue{
	public:
	node *front;
	node* rear;
	void enqueue(node*, int);
	int dequeue(node*);
	void show(node*);
	MyQueue();
};

MyQueue::MyQueue(){
	front=rear=NULL;
}
Stack::Stack()
{
	top=NULL;
}
node *Stack::push(node* n, int data)
{
	if(n)
	{
		//Push at the beginning of the linked list
		node *n=new node();
		n->next=top;
		top->data=n->data;
	}
	return n;
}
void Stack::push_data_to_other_stack(node *n,Stack S1,Stack S2)
{
	int data;
	//Perform pop on the current stack 
	if(S1.top !=NULL)
	{
			
		data=S1.pop(n);
		S2.push(n,data);
	}
}
int Stack::pop(node *n)
{
	int data;
	//Check if top is not NULL
	if(n!=NULL)
	{
		data=n->data;
		n->next=top->next;
		delete(n);
	}
	return data;
}	 		
void MyQueue::enqueue(node *n, int data)
{
	//Create 2 stacks
	Stack S1;
	Stack S2;
	S1.push(n,data);
	S1.push_data_to_other_stack(n,S1,S2);
}
void MyQueue::show(node *n)
{
	if(n)
	{
		while(rear!=NULL)
		{
			cout <<" The data of the Queue is"  << rear->data << endl;
			rear=rear->next;
		}
	}
}
	
	
int main()
{
	MyQueue M;
	struct node *n=new node();
	n=NULL;
	M.enqueue(n,34);
	M.enqueue(n,56);
	M.show(n);
	return 0;
}
	
