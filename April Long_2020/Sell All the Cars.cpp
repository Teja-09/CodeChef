#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t, n, i;
	cin >> t;
	while(t--)
	{
		cin >> n;
		vector< long >vec(n);
		for(i=0;i<n;i++)
		{
			cin >> vec[i];
		}
		sort(vec.begin(), vec.end());
		reverse(vec.begin(), vec.end());
		long long ans = 0;
		int temp = 0;
		for(i=0;i<n;i++)
		{
			if(vec[i] - i > 0)
			{
				ans = ans + ((vec[i] - i) % 1000000007);	
			}
		}
		cout << ans % 1000000007 << "\n";
	}

}

