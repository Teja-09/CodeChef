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
		left = NULL;
		right = NULL;
	}
};

Node* newNode(int data)
{
	Node* new_node = new Node(data);
	return new_node;
}

void inorderTraversal(Node* node)
{
	if(node == NULL)
	{
		return;
	}
	
	//left 
	inorderTraversal(node->left);
	
	//data
	cout << node->data << "  ";
	
	//right
	inorderTraversal(node->right);
}

void preorderTraversal(Node* node)
{
	if(node == NULL)
	{
		return;
	}
	
		//data
	cout << node->data << "  ";
	
	//left 
	preorderTraversal(node->left);
	
	//right
	preorderTraversal(node->right);
}

void postorderTraversal(Node* node)
{
	if(node == NULL)
	{
		return;
	}
	
	//left 
	postorderTraversal(node->left);
	
		//right
	postorderTraversal(node->right);
	
	//data
	cout << node->data << "  ";
	

}


int main()
{
	Node* root = newNode(1);
	root->left = newNode(2); 
    root->right = newNode(3); 
    root->left->left = newNode(4); 
    root->left->right = newNode(5); 
    inorderTraversal(root);
    cout << "\n";
    postorderTraversal(root);
    cout << "\n";
    preorderTraversal(root);

}
