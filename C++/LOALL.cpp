#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,x;
	cin >> n;
	vector<int> a(n);
	vector<int>b;
	for(i=0;i<n;i++)
	{
		cin >> a[i];
		while(a[i] > 0)
		{
			x = a[i] %10;
			b.push_back(x);
			a[i] = a[i] / 10;
		}
	}
	sort(b.begin(),b.end());
	for(i=b.size()-1;i>=0;i--)
	{
		cout << b[i];
	}
	
}