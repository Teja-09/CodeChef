#include<bits/stdc++.h>
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
		left = right = NULL;
	}
};

Node* new_node(int data)
{
	Node* newNode = new Node(data);
	return newNode;
}

void inorder(Node* node)
{
	Node* templ = node->left->left;
	//Node* tempr = node->left->left;
	

	
	if(templ == NULL)
	{
		cout << "node";
		return;
	}
	inorder(node->left);
	
	cout << node->data << " ";
	
	inorder(node->right);
}

int main()
{
	Node* root = new_node(1);
	root->left = new_node(8);  
    root->right = new_node(12);  
    root->left->left = new_node(3); 
    inorder(root);
}

