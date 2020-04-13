#include<bits/stdc++.h>
using namespace std;

void prime(int n, vector<bool> &check)
{
	long long i, j;
	check[0] = false;
	check[1] = false;
	for(i=2;i*i<=n;i++)
	{
		if(i > n/2)
		{
			break;
		}
		if(check[i] == true)
		{
			for(j=i*i; j <= n;j = j + i)
			{
				check[j] = false;
			}	
		}
	}
	
	for(i=i;i<=n;i++)
	{
		if(check[i] == true)
		{
			for(j=2; i*j <= n;j++)
			{
				check[i*j] = false;
			}	
		}
	}	
}

int main()
{
	int t, n ,i ,j;
	cin >> t;
	vector<bool> check(1000001, true);
	prime(1000001, check);

	
	while(t--)
	{
		cin >> n;
		vector<vector<int>> ans(1000001);
		int days = 1;
		vector<bool> rest = check;
		
		ans[0].push_back(1);
		for(i=0;i <= n; i++)
		{
			if(rest[i] == true)
			{
				ans[0].push_back(i);	
			}
		}
		
		for(i=2;2*i<=n;i++)
		{
			ans[days].push_back(2*i);
			rest[2*i] = true;			
			days++;
		}
		cout << days << "\n";			
		
		int temp, k = 1;
		bool flag = true;
		for(i=9;i<=n;i++)
		{
			if(rest[i] == 0)
			{
				flag = true;
				while(flag)
				{
					if(__gcd(ans[k][0], i) != 1)
					{
						++k;
					}
					else	
					{
						ans[k].push_back(i);
						++k;
						flag = false;			
					}
				}
			}

		}
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
//		cout << "ran succ\n";
		}
		return 0;
	}	
