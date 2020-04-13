#include<bits/stdc++.h>
using namespace std;

void prime(int n, vector<int> &check, vector<vector<int>> & ans, vector<int> &rest)
{
	ans[0].push_back(1);
	int i, j;
	check[0] = 0;
	check[1] = 0;
	for(i=2;i<=n;i++)
	{
		if(check[i] != 0)
		{
			for(j=2; i*j <= n;j++)
			{
				check[i*j] = 0;
			}	
		}
	}
	
	for(i=1;i<=n;i++)
	{
		if(check[i] == 1)
		{
//			cout << i << " ";
			rest[i] = 0;
			ans[0].push_back(i);
		}
	}
//	cout << "\n";
}

int main()
{
	int t, n ,i ,j;
	cin >> t;
	while(t--)
	{
		cin >> n;
		vector<int> check(n+1, 1);
		vector<int> rest(n+1, 1);
		rest[0] = 0;
		rest[1] = 0;
		vector<vector<int>> ans(10000000);
		prime(n, check, ans, rest);
		
		int k = 1, p, days = 1;
		for(i=2;i<=n;i++)
		{
//			k = 1;
			k = k % days;
			if(check[i] == 1)
			{
				for(j=2; i*j<=n; j++)
				{					
					if(rest[i*j] == 1)
					{
						for(p = 0; p<ans[k].size();p++)
						{
							if(ans[k][p] % i == 0)
							{
								++k;
//								break;
							}
						}
						
						if(i == 2)
						{
							++days;	
						}
						ans[k].push_back(i*j);
//						cout << i*j << " ";
						rest[i*j] = 0;
						++k;	
					}		
				}
//				cout << "\n";
			}
	
		}	
		
		int siz = ans.size();
//		cout << "siz = " << siz << "\n";
		
//		cout << "\n\n\n";
		cout << days << "\n";
		for(i=0;i<1000001;i++)
		{
			if(ans[i].size() == 0)
			{
				break;
			}
			cout << ans[i].size() << " ";
			for(j=0;j<ans[i].size();j++)
			{
				cout << ans[i][j] << " ";
			}
			cout << "\n";
		}
	}	
}
