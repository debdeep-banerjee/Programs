#include<iostream>
#include<list>
using namespace std;
class node{
	public:
	int data;
	node *next;
	node *prev;
	node();
};
class Linked_List{
	public:
	node *head;
	void add_to_start(node*, int);
	node * reverse(node*);
	void Add_A_Loop_In_Linked_List(node *, int);
	void Detect_Loop(node*);
	void Print(node*);
	Linked_List();
	//~Linked_List();
};
Linked_List::Linked_List()
{
	head=NULL;
}
node::node()
{
	next=NULL;
	prev=NULL;
}
void Linked_List::add_to_start(node *n1, int data1)
{
	node *ptr;
	ptr=head;
	//Check if the linked list is empty
	if(ptr==NULL)
	{
		cout << "The linked list is empty" << endl;
		//Create a new node
		node *n2=new node();
		head=n2;
		n2->data=data1;
		n2->next=NULL;
	}
	else
	{
		//Traverse to the end of the linked list
		while(ptr->next != NULL)
		{
			ptr=ptr->next;
		}
		node *n2=new node();
		ptr->next=n2;
		n2->data=data1;
		n2->next=NULL;
	}
			
}
node* Linked_List::reverse(node *n1)
{
	if(n1->next==NULL)
	{
		head=n1;
		return n1;
	}
	//while(n1->next !=NULL)
	//{
	//	n1=n1->next;
	//}
	reverse(n1->next);
	n1->next->next=n1;
	n1->next=NULL;
}
void Linked_List::Add_A_Loop_In_Linked_List(node *n1,int position)
{
	node *ptr;
	node *ptr1;
	int count=0;
	node *address_end_list;
	node *address_position;
	ptr=ptr1=address_end_list=address_position=head;
	//Iterate to the end of the loop
	while(ptr->next != NULL)
	{
		if(count ==position)
		{
			address_position=ptr;
		}
		ptr=ptr->next;
		count++;
	}
	address_end_list=ptr;
	address_position->next=address_end_list;
	
	 	
}
void Linked_List::Detect_Loop(node *n1)
{
	node *ptr;
	node *slow;
	node *fast;
	slow=fast=ptr=head;
	//slow=slow->next;
	//fast=fast->next->next;
	//Iterate through the length of the linked list
	if(ptr->next !=NULL)
	{
		if(slow==fast)
		{
			cout << "#########The linked list is circular##########" << endl;
		}
		else
		{
			slow->next;
			fast->next->next;
		}
	}

}
void Linked_List::Print(node *n1)
{
	node *ptr;
	ptr=head;
	while (ptr != NULL)
	{
		cout << "The current data of node of the linked list is" << ptr->data <<endl;
		ptr=ptr->next;
	}
}
int main()
{       
        
	//list<int> L;
	//L.push_back(100);
	//L.push_front(1);
	//L.insert(++L.begin(),2);
	//copy(L.begin(),L.end(),ostream_iterator<int>(cout," "));
	Linked_List L1;
	cout << "The head node of the linked list is" << L1.head;
	L1.add_to_start(L1.head,10);
	L1.add_to_start(L1.head,100);
	L1.add_to_start(L1.head,1000);
	L1.add_to_start(L1.head,10000);
	L1.Add_A_Loop_In_Linked_List(L1.head,1);
	L1.Detect_Loop(L1.head);
	L1.reverse(L1.head);
	L1.Print(L1.head);
	return 0;	
}


