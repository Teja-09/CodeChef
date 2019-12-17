#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t, n, p, s, i;
	cin >> t;
	while(t--)
	{
		vector<int> a(10,0);
		cin >> n;
		for(i=0;i<n;i++)
		{
			cin >> p >> s;
			a[p-1] = max(a[p-1], s);	
		}
		int ans = 0;
		for(i=0;i<=7;i++)
		{
			ans+=a[i];
		}
		cout << ans << "\n";
	}
	return 0;
}
