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
		
		void push(int data)
		{
			Node* new_node = new Node(data);
			new_node->next = head;
			head = new_node;
			++len;
		}
		
		int i;
		void inode(int n)
		{
			Node* temp = head;
			for(i=0;i<len-n;i++)
			{
				temp = temp->next;
			}
			cout <<  "value of " << n <<" node from last is " << temp->data;
		}
		
		
		// append at last
		
//		Node* tail = head;
		void append(int data)
		{
			Node* new_node = new Node(data);
			if(len == 0)
			{
				head = new_node;
				tail = new_node;
				head->next = NULL;
				++len;
			}
			else
			{
				tail->next = new_node;
				new_node->next = NULL;
				tail = new_node;
				++len;
			}
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
	Linkedlist* li = new Linkedlist();
	char c;
	cout << "a - append at the back " << "\n";
	cout << "p - push from the front " << "\n"; 
	cin >> c;
	if(c == 'p')
	{
		li->push(2);
		li->push(8);
		li->push(10);
		li->push(1);
		
		li->printlist();
		
		li->inode(3);
	}
	else if(c == 'a')
	{
		li->append(2);
		li->append(4);
		li->append(6);
		li->append(9);
		
		li->printlist();
	}

}

