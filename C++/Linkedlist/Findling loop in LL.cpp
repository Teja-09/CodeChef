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
		
		void cycle(int n)
		{
			Node* temphead = head;
			Node* temptail = tail;
			int i = 0;
			for(i=0;i<len-n;i++)
			{
				temphead = temphead->next;
			}
			cout << "cycle meet  " << temphead->data << "\n";
			tail->next = temphead;
		}
		
		void printlist()
		{
			int val = 0;
			Node* temp = head;
			while(temp->next != NULL)
			{
				if(val < 9)
				{
					cout << temp->data << " -> ";
					temp = temp->next;	
					++val;
				}
				else
				{
					return ;
				}
			}
		}
		
		void hareTortoise()
		{
			Node* hare = head;
			Node* tort = head;
			if(hare->next != NULL)
			{
				hare = hare->next->next;
				tort = tort->next;
			}
			int flag = 0;
			while(hare != tort)
			{
				if(hare->next != NULL && hare->next->next != NULL)
				{
					hare = hare->next->next;
					tort = tort->next;
				}
				else
				{
					cout << "No cycle!" << "\n";
					flag = 1;
					return;
				}
			} 
			if(flag == 0){
				cout << "Loop exists";
			}
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
	ll->append(8);
	ll->append(9);
	
//	ll->cycle(4);
	ll->printlist();
	ll->hareTortoise();
}
