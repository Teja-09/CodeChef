#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,i;
	cin >> t; 
	while(t--)
	{
	cin >> n;
	vector< long long > a(n);
	for(i=0; i<n; i++)
	{
		cin >> a[i];
	}
	sort(a.begin(),a.end());
	long long min = a[1] - a[0];
	for(i=1;i<n-1;i++)
	{
		if(min > (a[i+1] - a[i]))
		{
			min = a[i+1] - a[i];
		}
	}
	cout << min << "\n";
	}
}