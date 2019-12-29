#include<bits/stdc++.h>
using namespace std;
int main()
{
	set < int > a;
	a.insert(2);
	a.insert(3);
	set< int > :: iterator itr;
	int i;
	int pos = a.find(3);
	cout << pos <<"\n";
	for(itr = a.begin(); itr != a.end(); itr++)
	{
		cout << *itr << "\n";
	}
}
