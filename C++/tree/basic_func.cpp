#include<bits/stdc++.h>   // Tree size & height
using namespace std;

class Node
{
	public:
	int data;
	Node* left;
	Node* right;
	Node(int data)
	{
		this->data = data;
		left = NULL;
		right = NULL;
	}
};

Node* new_node(int data)
{
	Node* node = new Node(data);
	return node;
}

// Size of tree - no.of nodes in a tree
int size(Node* node)
{
	if(node == NULL)
	{
		return 0;
	}
	else
	{
		return (size(node->left) + 1 + size(node->right));
	}
}

// max ht of a tree
int maxdepth(Node* node)
{
	if(node == NULL)
	{
		return 0;
	}
	else
	{
		int ldepth = maxdepth(node->left);
		int rdepth = maxdepth(node->right);
		
		return(max(ldepth, rdepth) + 1);
	}
}

int main()
{
	Node* root = new_node(2);
	root->left = new_node(3);
	root->right = new_node(4);
	root->left->right = new_node(5);
	
	cout << "height of tree is " << maxdepth(root) << "\n";
	cout << "size of tree is "<< size(root) << "\n";
	
}
