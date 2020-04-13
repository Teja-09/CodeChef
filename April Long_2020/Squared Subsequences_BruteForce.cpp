#include<bits/stdc++.h>
using namespace std;

int checksum(int i, int j, vector<int> vec, int prev, vector<int>&lenval)
{
	int sum = 0, it;
	if(i == 1)
	{
		sum = vec[j];
		if(j == 0)
		{
			lenval[i-1] = sum;	
		}
	}
	else if(j == 0)
	{
		sum =  lenval[i-1-1] + vec[i-1];
		lenval[i-1] = sum;
	}
	else
	{
		if(vec[i+j-1] == 0)
		{
			return (prev - vec[j-1]);
		}
		else 
		{
			return (prev + vec[i+j-1] - vec[j-1]);
		}
	}

	return sum;
}

int main()
{
	int t, n, i, j,temp;
	cin >> t; 
	while(t--)
	{
		int ans = 0;
		cin >> n;
		vector<int>vec(n);
		vector<int>lenval(n);
		for(i=0;i<n;i++)
		{
			cin >> temp;
			if(temp % 4 == 0)
			{
				vec[i] = 2;
			}
			else if(temp%2 != 0)
			{
				vec[i] = 0;	
			}
			else
			{
				vec[i] = 1;
			}
		}
		int ret = 0, prev = 0;
		for(i=1;i<=n;i++)	
		{
			for(j=0;j<=n-i;j++)
			{
				ret = checksum(i, j, vec, prev, lenval);
				prev = ret;
				if(ret != 1)
				{
					++ans;
				}
			}
		}
		cout << ans << "\n";
	}
}

