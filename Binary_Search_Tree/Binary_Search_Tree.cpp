#include<iostream>
using namespace std;
struct Node{
	int data;
	Node();
	~Node();
	Node *left;
	Node *right;
};
class BST{
	public:
	Node *root;
	BST();
	Node *GetNewNode(int);
	Node* insert_data(Node *,int);
	void Show(Node *);
};
Node::Node()
{
	left=NULL;
	right=NULL;
}
BST::BST()
{
	root=NULL;
}
Node* BST::GetNewNode(int data)
{
	Node *n1=new Node();
	n1->data=data;
	n1->left=n1->right=NULL;
	return n1;			
}
Node*  BST::insert_data(Node * n1, int data)
{
	if(n1==NULL)
	{
		return GetNewNode(data);
	}
	
	
	if(data > n1->data)
	{
		n1->right=insert_data(n1->right,data);
	}
	else if(data < n1->data)
	{
		n1->left=insert_data(n1->left,data);
	}
	
	/*else
	{
		Node *n2=new Node();
		root=n2;
		root->data=data;
		root->left=NULL;
		root->right=NULL;
	}*/
	return n1;
}
void BST::Show(Node *n1)
{
	if(n1 !=NULL)
	{
		cout << "The tree element is" << n1->data<< endl;
		Show(n1->left);
		Show(n1->right);
	}
}	
int main()
{
	BST B1;
	Node *root=NULL;
	root=B1.insert_data(root,34);
	B1.insert_data(root,232);
	B1.insert_data(root,33);
	B1.insert_data(root,44);
	B1.insert_data(root,55);
	B1.insert_data(root,66);
        B1.Show(root);
	return 0;

}
		
