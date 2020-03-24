#include<iostream>
#include<queue>
using namespace std;

int main()
{
	cout << "Priority queue" << "\n";
	priority_queue< int > pqueue;  // Default Max heap, To get MIN vals - store the values by 
									// multiplying -1 and push to queue
	pqueue.push(5);
	pqueue.push(1);
	pqueue.push(7);
	pqueue.push(2);
	pqueue.push(10);
	
	while(!pqueue.empty())
	{
		int val = pqueue.top();
		cout << val << "\t";
		pqueue.pop();
	}
	
	cout << "\n";
	
	priority_queue< int > minq;
	minq.push(-5); // Pushing 5, 1, 7, 2, 10
	minq.push(-1);
	minq.push(-7);
	minq.push(-2);
	minq.push(-10);
	
	while(!minq.empty())
	{
		int val = minq.top();
		cout << -1*val << "\t";
		minq.pop();
	}
	

}

