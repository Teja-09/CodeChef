#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main()
{
	unordered_map < int,int >a;
	for(int i = 0; i < 10; i++)
	{
		a[i] = a[i] + 1;
	}
	
	for(int i = 0; i < 10; i++)
	{
		cout << a[i] << "\n";
	}
}
