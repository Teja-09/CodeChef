#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n,i;
	cin >> n;
	vector< long long >a(n);
	for(i=0;i<n;i++)
	{
		cin >> a[i];
	}
	sort(a.begin(),a.end());
	long long max = 0,temp = 0;
	for(i=0;i<n;i++)
	{
		temp = a[i]*(n-i);
		if(temp > max)
		{
			max = temp;
		}
	}
	cout << max << "\n";
	
	
	
}
