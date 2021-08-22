#include<iostream>
#include<vector>
using namespace std;

class node{
	public:
	int data;
	node *left;
	node* right;
	node();
};
node::node()
{
	data=0;
	left=NULL;
	right=NULL;
}
class BST{
	public:
	BST();
	node *root;
	node* getnewnode(int);
	node *Insert(node*,int);
	int find_path(node*,vector<int>&, vector<int>&,int);
	void print_k_paths(node*, int);
	bool Is_Subtree(node *, node*);
	void print(node*);
};
BST::BST()
{
	root=NULL;
}
node* BST::getnewnode(int data)
{
	node *n1=new node();
	n1->data=data;
	n1->left=NULL;
	n1->right=NULL;
	return n1;
}
node* BST::Insert(node* n, int data)
{
	if(n == NULL) return getnewnode(data);
	if (data<n->data)
	{
		n->left=Insert(n->left, data);
	}
	else if(data >n->data)
	{
		n->right=Insert(n->right,data);
	}
	return n;
}
void printvector(vector<int> v, int k)
{
	cout << "In the print vector function" <<endl;
	for(int i=k; i<v.size(); i++)
	{
		cout << " Elements are" << v[i] << endl;
	}
}
int BST::find_path(node *n, vector<int> &v, vector<int> &k, int sum)
{	
	if(!n) return 0;
	//vector<int> v;
	//vector<int> k;
	v.push_back(n->data);
	find_path(n->left,v,k,sum);
	find_path(n->right,v,k,sum);
	int sum_cal=0;
	int d=0;
	for(int i=v.size()-1; i>=0; i--)
	{
		sum_cal+=v[i];
		k.push_back(v[i]);
		cout << " The value of element of v[i] is" << v[i] << endl;
		cout << " The value of element of sum_cal is" << sum_cal << endl;
		if(sum_cal==sum)
		{
			cout << " The sum_cal and sum are the same" << endl;
			d++;
			printvector(k,i);
			sum_cal=0;
			//d++;
			k.clear();
		}
		v.pop_back();
	}
	return d;
}	
		
bool Are_equal(node *root, node* root2)
{
	if((root==NULL) && (root2==NULL)) return true;
	if((root==NULL) || (root2==NULL)) return false;
	
	return((root->data == root2->data) && Are_equal(root->left, root2->left) && Are_equal(root->right, root2->right));
}
bool BST::Is_Subtree(node *root, node *root2)
{
	bool result;
	if(root==NULL) return false;
	if(root2==NULL) return true;
	result=Are_equal(root,root2);
	cout << "############The boolean result in Is_Subtree is##############" << result << endl;
	return(Is_Subtree(root->left, root2->left) || (Is_Subtree(root->left, root2->left)));
} 
	
void BST::print(node *n)
{
	if(n!=NULL)
	{
		
		cout << " Element in tree is" << n->data << endl;
		print(n->left);
		print(n->right);
	}
} 
int main()
{
	BST B1;
	node *root=NULL;
	vector<int> v;
	vector<int> k;
	int result;
	root=B1.Insert(root,8);
	B1.Insert(root,10);
	B1.Insert(root,15);
	B1.Insert(root,100);
	B1.print(root);
	result=B1.find_path(root,v, k, 133);
	//cout << " The number of times the path was found is result" <<result<< endl;
	BST B2;
	node *root2=NULL;
	bool result_value;
	root2=B2.Insert(root,8);
	B2.Insert(root2,10);
	B2.Insert(root2,15);
	B2.print(root2);
	result_value=B2.Is_Subtree(root,root2);
	cout << "###########The result value is###############" <<result_value<< endl;
	return 0;
}
