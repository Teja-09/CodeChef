#include<bits/stdc++.h>
using namespace std;

class Node
{
	public:
		int data;
		Node* next;
		Node(int data)
		{
			this->data = data;
			next = NULL;
		}
};

class Linkedlist
{
	public:
	Node* head;
	Node* tail;
	int len;
	Linkedlist()
	{
		head = NULL;
		tail = NULL;
		len = 0;
	}
	
	void append(int data)
	{
		Node* new_node = new Node(data);
		if(len == 0)
		{
			head = new_node;
			tail = new_node;
			new_node->next = NULL;
			++len;
		}
		else
		{
			tail->next = new_node;
			tail = new_node;
			tail->next = NULL;
			++len;
		}
	}
	
	//Adding new node at specific index 
	void addNode(int index, int data)
	{
		Node* new_node = new Node(data);
		int i = 0;
		Node* temp = head;
		Node* templink;
		for(i=0;i<index-1;i++)
		{
			temp = temp->next;
		}
		templink = temp->next;
		temp->next = new_node;
		new_node->next = templink;
	}
	
	void deleteNode(int index)
	{
		int i;
		Node* temp = head;
		Node* delNode;
		for(i=0;i<index-1;i++)
		{
			temp = temp->next;
		}
		delNode = temp->next;
		temp->next = delNode->next;
		delNode->next = NULL;
	}
	
	void printlist()
	{
		Node* temp = head;
		while(temp != NULL)
		{
			cout << temp->data << " -> ";
			temp = temp->next;
		}
		cout << "\n";
	}
};

int main()
{
	Linkedlist* ll = new Linkedlist();
	ll->append(2);
	ll->append(3);
	ll->append(4);
	ll->append(5);
	ll->append(6);
	ll->append(7);
	
	ll->addNode(2, 30);
	
	ll->printlist();
	
	ll->deleteNode(2);
	
	ll->printlist();
}
