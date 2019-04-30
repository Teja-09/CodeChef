#include<bits/stdc++.h>
using namespace std;

int main()
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	
	int t;
	cin >> t;
	while(t--)
	{
		long n;
		long i,j,k = 32;
		cin >> n;
		unsigned int tmp;
		//vector< unsigned long long > map(n,0);
		vector< long > bitcount(k,0);
		long count = 0;
		string s;
		for(i=0;i<n;i++)
		{
			cin >> s;
			long long len = s.length();
			tmp = 0;
			for(j=0;j<len;j++)
			{
				switch(s[j])
				{
					case 'a': tmp = (tmp | 16);
								break;
								
					case 'e': tmp = (tmp | 8);
								break;
								
					case 'i': tmp = (tmp | 4);
								break;
								
					case 'o': tmp = (tmp | 2);
								break;
		
					case 'u': tmp = (tmp | 1);
								break;				
				}	
			}
			++bitcount[tmp];
		}
		
		long long res = 0;
		for(i=0;i<32;i++)
		{
			for(j=0;j<32;j++)
			{
				if((i | j) == 31)
				{
					
					if(i == j)
					{
						res = res + (bitcount[i] * (bitcount[i] - 1));
						continue;
					}
					res = res + (bitcount[i]*bitcount[j]);
//						cout << i << "  " << j << " ";
				}
			}
		}
		cout << (res/2) << "\n";
	}
}