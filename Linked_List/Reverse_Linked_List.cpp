#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
	Node();
};
class Linked_List{
	public:
	Node *head;
	Linked_List();
	Node* insert_at_end(Node*,int);
	Node* reverse_list(Node*);
	void print_list(Node*);
};
Node::Node()
{
	data=0;
	next=NULL;
}
	
Linked_List::Linked_List()
{
	head=NULL;
}
Node* Linked_List::insert_at_end(Node* n2,int data)
{
	Node *n1=new Node();
	Node *ptr;
	//cout << "The value of head pointer in the insert function is" << head << endl;
	ptr=head;
	//cout << "The value of ptr pointer in the insert function is" << ptr << endl;
	if(head)
	{
		//cout << "In the node true condition of the insert function" << endl;
		while(ptr->next !=NULL)
		{
			//cout << "#######################################" << endl;
			//cout << "The value of data while iterating is" << ptr->data <<endl;
			ptr=ptr->next;
		}
		ptr->next=n1;
		//head=n1;
		n1->next=NULL;
		n1->data=data;
		//cout << "The value of data in n1 is" << n1->data <<endl;
		//cout << "The value of pointer in n1 is" << n1 <<endl;

	}
	
	else
	{
		cout << "The Linked List is empty" << endl;	
		head=n1;
		n1->next=NULL;
		n1->data=data;
		//cout << "The value of data in n1 is" << n1->data <<endl;
		//return *n1;	
	}
	//ptr->next=n1;
	//n1->next=NULL;
	//n1->data=data;
	//cout << "The value of data in n1 is" << n1->data <<endl;
	return n1;	
}

Node* Linked_List::reverse_list(Node *n1)
{
	//Node *current;
	//Node *prev;
	//Node *ptr;
	if(n1->next==NULL)
	{
		head=n1;
		return n1;
	}
	Node* t =reverse_list(n1->next);
	n1->next->next=n1;
	n1->next=NULL;
	return t;
}	
	
void Linked_List::print_list(Node* n1)
{
	//Print the list from the head node
	Node *ptr;
	ptr=n1;
	cout << "The head node is" << head << endl;
	if(n1)
	{
		while(n1 !=NULL)
		{
		
			//ptr=ptr->next;
			//cout <<"#######################################" << endl;
			cout << "The current node data is" << n1->data << endl;
			//cout << "The current node pointer is" << ptr << endl;
			n1=n1->next;

		}
	}
	else
	{
		cout << "The list is empty" << endl;
	}		
}
int main()
{
	Linked_List L1;
	//Node *n1= new Node();
	Node *n2;
	//L1.head=new Node();
	//n1=L1.head;
	struct Node *n1=NULL;
	//cout << "The value of head is" << n1 <<endl;
	n1=L1.insert_at_end(n1,3);
	L1.insert_at_end(n1,23);
	L1.insert_at_end(n1,113);
	L1.print_list(n1);
	n1=L1.reverse_list(n1);
	cout << "#######After reversing the linked list#######"  <<endl;
	L1.print_list(n1);
	return 0;
}
