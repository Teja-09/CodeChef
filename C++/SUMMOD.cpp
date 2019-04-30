#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long n,i,sum = 0,val = 1;
		cin >> n;
		for(i=1;i<=n;i++)
		{
			val = (val * i) % 1000000007;
			sum += val; 
		}
		cout << sum%1000000007 << "\n";
	}
}