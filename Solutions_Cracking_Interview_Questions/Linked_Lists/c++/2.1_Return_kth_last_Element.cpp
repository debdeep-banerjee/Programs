#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
	node();
};
node::node()
{
	data=0;
	next=NULL;
}	
class Linked_List
{
	public:
	node *head;
	void add_element_end(node *, int);
	node* return_k_last_element(node*);
	void sort_bubblesort(node*);
	void sort_merge_sort(node*);
	void print_list(node *);
	node* getnewnode(node*, int);
	Linked_List();
};
Linked_List::Linked_List()
{
	head=NULL;
}
node* Linked_List::getnewnode(node *n, int data)
{
	node *n1=new node();
	n1->data=data;
	n1->next=NULL;
	return n1;
}
	
void Linked_List::add_element_end(node *n, int data)
{
	n=head;
	node *ptr;
	if(n)
	{
		while(n->next!=NULL)
		{
			n=n->next;
		}
		ptr=getnewnode(n,data);
		n->next=ptr;
		//ptr-data=data;
		//ptr->next=NULL;
	}
	else
	{
		ptr=getnewnode(n,data);
		head=ptr;
	}

}
void Linked_List::sort_bubblesort(node *n)
{
	node *ptr;
	int temp;
	for(n=head; n != NULL; n=n->next)
	{
		for(ptr=head; ptr != NULL; ptr=ptr->next)
		{
			if(n->data < ptr->data)
			{
				temp=n->data;
				n->data=ptr->data;
				ptr->data=temp;
			}
		}

	}
}
void Linked_List::mergesort(node *n)
{
	node *ptr;
	node *ptr1;
	ptr=head;
	int count=0;
	int start=count;
	while(ptr != NULL)
	{
		ptr=ptr->next;
		count++;
	}
	int end=count;
	mid=(start+end)/2;
	 
} 
void Linked_List::print_list(node *n)
{
	n=head;
	if(n)
	{
		while(n !=NULL)
		{
			cout << "The value is" << n->data << endl;
			n=n->next;

		}
	}
}
	
int main()
{
	Linked_List L1;
	struct node *n1=NULL;
	L1.add_element_end(n1,34);
	L1.add_element_end(n1,35);
	L1.add_element_end(n1,300);
	L1.add_element_end(n1,2);
	L1.sort(n1);
	L1.print_list(n1);
}
	
		
	

