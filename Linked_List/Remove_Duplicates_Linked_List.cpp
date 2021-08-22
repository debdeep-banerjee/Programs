#include<iostream>
using namespace std;
struct Node{
	int data;
	Node * next;
	Node();
};
class Linked_List{
	public:
	Node *head;
	Node* insert_at_the_end(Node*, int);
	void remove_duplicate(Node*);
	void print(Node*);
	Node* Create_New_Node(Node *, int);
	Linked_List();
};
Linked_List::Linked_List()
{
	head=NULL;
}
Node::Node()
{
	next=NULL;
	data=0;
}
Node* Linked_List::Create_New_Node(Node* n, int data)
{
	Node *n1=new Node();
	n1->next=NULL;
	n1->data=data;
	return n1;
}
Node* Linked_List::insert_at_the_end(Node *n1, int data)
{
	Node *ptr;
	Node *n2=new Node();
	ptr=head;
	if(head)
	{
		while(ptr->next != NULL)
		{
			ptr=ptr->next;
		}
		//Node *n2=new Node();
		//ptr=n2;
		n2->next=NULL;
		n2->data=data;
		//ptr=Create_New_Node(n1,data);
	}
	else
	{
		cout << "The linked list is empty" << endl;
		//ptr=Create_New_Node(n1,data);	
		//Node *n2=new Node();
		head=n2;
		n2->next=NULL;
		n2->data=data;
	}
	return head;
}
void Linked_List::print(struct Node *node)
{
	node=head;
	if(node)
	{
		while(node !=NULL)
		{
			cout << "The data in the node is" << node->data << endl;
			node=node->next;
		}
	}
}
	
int main()
{
	Linked_List L1;
	struct Node* n1=NULL;
	Node *n2;
	n1=L1.insert_at_the_end(n1,3000);
	L1.insert_at_the_end(n1,200);
	L1.insert_at_the_end(n1,500);
	L1.print(n1);
	return 0;
}
