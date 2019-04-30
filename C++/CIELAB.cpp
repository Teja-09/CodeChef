#include<bits/stdc++.h>
using namespace std;
int main()
{
	srand (time(NULL));
	int a,b,c,d;
	cin >> a >> b;
	c = a-b;
	d = c % 10;
	b = c / 10;
	if(b==0)
	{
		c = rand() % 5;
	while(1)
	{
		if(c==d || c == 0)
		{
		c = rand() % 5;	
		}	
		else
		{
			break;
		}
	}
	cout << c;
	}
	else
	{
		c = rand() % 5;
	while(1)
	{
		if(c==d || c==0)
		{
		c = rand() % 5;	
		}	
		else
		{
			break;
		}
	}
	cout << b << c;
	}
	
}