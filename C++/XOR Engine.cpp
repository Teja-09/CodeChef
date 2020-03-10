#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t, n, q, i, p, bits = 0;
	cin >> t;
	while(t--)
	{
		int even = 0, odd = 0;
		cin >> n;
		cin >> q;
		vector< int > val(n);
		vector< int > xoo(n);
		vector< int > eveo(n); //0-even, 1-odd
		for(i=0;i<n;i++)
		{
			cin >> val[i];
			bits = __builtin_popcount(val[i]);
			if(bits % 2 == 0)
			{
				eveo[i] = 0;
				++even;
			}
			else
			{
				eveo[i] = 1;
				++odd;
			}
		}
		while(q--)
		{
			int ceven = 0, codd = 0;
			cin >> p;
			bits = __builtin_popcount(p);
			if(bits % 2 == 0)
			{
				p = 0;
			}
			else
			{
				p = 1;
			}
			
			if(p == 0)
			{
				codd = odd;
				ceven = even;
			}
			
			if(p == 1)
			{
				ceven = odd;
				codd = even;	
			}
			cout << ceven << " " << codd << "\n";
		}
	}
}
