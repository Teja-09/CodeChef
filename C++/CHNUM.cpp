#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,i;
	cin >> t;
	while(t--)
	{
	cin >> n;
	vector< long long > arr(n);
	long long pos = 0 , neg = 0;
	for(i=0; i<n ;i++)
	{
		cin >> arr[i];
		if(arr[i] > 0)
		{
			++pos;
		}
		else
		{
			++neg;
		}
	}
	cout << max(pos, neg) << " ";
	if(pos==0 || neg == 0)
	{
		cout << max(pos, neg);
	}
	else
	{
		cout << min(pos, neg);
	}
	cout << "\n";
	}
}