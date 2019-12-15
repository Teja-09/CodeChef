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
	Linkedlist()
	{
		head = NULL;
	}
	
	void push(int data)
	{
		Node* new_node = new Node(data);
		new_node->next = head;
		head = new_node;
	}
	
	
	void printlist()
	{
		Node* temp = head;
		while(temp != NULL)
		{
			cout << temp->data << " -> ";
			temp = temp->next;
		}
	}
};

int main()
{
	Linkedlist li = *(new Linkedlist()); // or Linkedlist* = new Linkedlist();
	li.push(5);							// li->push(5)
	li.push(4);
	li.push(2);
	li.printlist();
	
}
