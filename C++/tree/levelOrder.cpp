#include<bits/stdc++.h> // No.of nodes at particular level using level order.
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


int maxwidth(Node* root)
{
	if(root == NULL)
	{
		return 0;
	}
	int result = 0;
	
	queue<Node*> q;
	q.push(root);
	while(!q.empty())
	{
		int count = q.size();
		
		result = max(count, result);
		
		while(count--)
		{
			Node* temp = q.front();
			q.pop();
			
			if(temp->left != NULL)
			{
				q.push(temp->left);
			}
			if(temp->right != NULL)
			{
				q.push(temp->right);
			}
		}	
	}
	return result;
}


//seperate lvl order
void levelorder(Node* root)
{
	if(root == NULL)
	{
		cout << 0;
	}
	
	queue<Node*>q;
	q.push(root);
	
	while(!q.empty())
	{
		int count = q.size();
		
		while(count--)
		{
			Node *temp = q.front();
			q.pop();
			cout << temp->data << " -> " ;
			
			if(temp->left!=NULL)
			{
				q.push(temp->left);
			}
			if(temp->right != NULL)
			{
				q.push(temp->right);	
			}	
		}
	}
	
}

int main()
{
	Node* root = newNode(1);
    root->left        = newNode(2); 
    root->right       = newNode(3); 
    root->left->left  = newNode(4); 
    root->left->right = newNode(5); 
    root->right->right = newNode(8); 
    root->right->right->left  = newNode(6); 
    root->right->right->right  = newNode(7);
    
    cout << "Level order is " << "\n";
    levelorder(root);
    cout <<"\n";
    cout << "Max width = " << maxwidth(root) << "\n";
}
