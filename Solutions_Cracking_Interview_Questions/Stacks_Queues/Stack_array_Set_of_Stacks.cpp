#include<iostream>
using namespace std;
#define MAX_SIZE 1
class Stack{
	int data;
	int top;
	int min;
	int multiStack_count;
	int Stack_Size;
	int Stack_number;
	int arr[10];
	public:
	void push(Stack, int);
	int pop();
	int peek();
	void show();
	bool isEmpty();
	Stack();
};
Stack::Stack()
{
	data=0;
	top=-1;
	min=0;
	multiStack_count=3;
	Stack_Size=3;
	Stack_number=0; 
}
void Stack::push(Stack S;int data)
{
	bool new_Stack=false;
	if(S.top >MAX_SIZE)
	{
		//Create a new Stack
		bool new_Stack=true;
		Stack S_new=new Stack;
		MAX_SIZE+=MAX_SIZE;
		//return;
	}
		
		
	/*if(Stack_number ==0)
	{
		if(top >MAX_SIZE/3)
		{
			return;
		}		
	}
	if(Stack_number ==1)
	{
		if(top >2*(MAX_SIZE/3))
		{
			return;
		}		
	}
	if(Stack_number ==3)
	{
		if(top >(MAX_SIZE))
		{
			return;
		}		
	}*/
	if(new_Stack)
	{
		if(min>arr[new_Stack.top])
		{
			min=arr[new_Stack.top];
		}
		top++;
		/*if(top==0)
		{
			min=arr[top];
			cout << "The top is 0 and the value of min is" << min << endl;
		}*/
		arr[new_Stack.top]=data;
	}
	else
	{
		if(min>arr[S.top])
		{
			min=arr[S.top];
		}
		top++;
		/*if(top==0)
		{
			min=arr[top];
			cout << "The top is 0 and the value of min is" << min << endl;
		}*/
		arr[S.top]=data;
	}
	
	if(top==0)
	{
		min=arr[top];
		cout << "The top is 0 and the value of min is" << min << endl;
	}
}
int Stack::pop()
{
	//int data;
	/*if(top >MAX_SIZE)
	{
		return;
	}*/
	/*if(Stack_number ==0)
	{
		if(top <0)
		{
			return 0;
		}		
	}
	if(Stack_number ==1)
	{
		if(top >(MAX_SIZE/3) && top <(2*(MAX_SIZE/3)))
		{
			return 0;
		}		
	}
	if(Stack_number ==3)
	{
		if(top >2*(MAX_SIZE/3) && (top <(MAX_SIZE)))
		{
			return 0;
		}		
	}*/
	if(top <0)
	{
		return 0;
	}
	//data=arr[top];
	//top--;
	return arr[top--];
} 
int Stack::peek()
{
	if(top <0)
	{
		return 0;
	}
	return arr[top];
}
bool Stack::isEmpty()
{
	return (top <0);
}
	 
void Stack::show()
{
	while(top >-1)
	{
		cout << "The value of the stack element is" << arr[top--] << endl;
	}
	cout << " The value of min is" << min << endl;	
}	
int main()
{
	Stack S;
	S.push(12);
	S.push(9);
	S.push(10);
	S.push(100);
	//S.pop();
	//S.peek();
	//S.isEmpty();
	S.show();		
}
