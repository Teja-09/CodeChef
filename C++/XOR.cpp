#include<bits/stdc++.h>
using namespace std;

int countSetBits(int n) 
{ 
    unsigned int count = 0; 
    while (n) { 
        n &= (n - 1); 
        count++; 
    } 
    return count; 
} 

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t, n, q, i, p, bits = 0;
	cin >> t;
	while(t--)
	{
		cin >> n;
		cin >> q;
		vector< int > val(n);
		vector< int > xoo(n);
		for(i=0;i<n;i++)
		{
			cin >> val[i];
		}
		while(q--)
		{
			int ceven = 0, codd = 0;
			cin >> p;
			for(i=0;i<n;i++)
			{
				xoo[i] = val[i] ^ p;
//				bits = __builtin_popcount(xoo[i]);
				bits = countSetBits(xoo[i]);
				if(bits % 2 == 0)
				{
					ceven++;
				}
				else
				{
					codd++;
				}
			}
			cout << ceven << " " << codd << "\n";
		}
	}
}
