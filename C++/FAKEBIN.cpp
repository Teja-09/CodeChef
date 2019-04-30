#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);
	int t;
	cin >> t;
	int n;
	while(t--)
	{
		int i, sum = 0;
		cin >> n;
		vector< int >a(n);
		for(i=0;i<n;i++)
		{
			cin >> a[i];
			sum+=a[i];
		}
		cout << sum << "\n";
	}
}