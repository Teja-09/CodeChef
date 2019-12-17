#include<bits/stdc++.h>
using namespace std;

int main()
{
	stack <int> s;
	s.push(2);
	s.push(4);
	s.push(1);
	
	int len = s.size();
	
	for(int i=0;i<len;i++)
	{
		cout << s.top() << "  ";
		s.pop();
	}
	return 0;
}
