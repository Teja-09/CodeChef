#include<bits/stdc++.h>
using namespace std;

class node
{
	public:
		int data;
		node* left;
		node* right;
		node(int data)
		{
			this->data = data;
			left = NULL;
			right = NULL;
		}
};

node* newnode(int data)
{
	node* newnode = new node(data);
	return newnode;
}

void BFS(node* root)
{
	if(root == NULL)
	{
		cout << 0;
	}
	
	queue<node*>q;
	q.push(root);
	
	while(!q.empty())
	{
		int siz = q.size();
		
//		while(siz--)
//		{
			node* val = q.front();
			q.pop();
			
			cout << val->data << " ";
			if(val->left != NULL)
			{
				q.push(val->left);
			}
			
			if(val->right != NULL)
			{
				q.push(val->right);
			}
			
//		}
	}
	
	
}

int main()
{
	node* root = newnode(3);
	root->left = newnode(2);
	root->right = newnode(1);
	BFS(root);

}

