#include<bits/stdc++.h>
using namespace std;

long long findsum(long long index, long long length, long long odd)
{
	if(odd == 0)
	{
		if(index <= (length/2))
		{
			return ((index) * ((2*length) + (index-1) * -2))/2;
		}
		else
		{
			index = length - index + 1;
			return ((index) * ((2*length) + (index-1) * -2))/2;
		}
	}
	else
	{
		if(index <= (length/2) + 1)
		{
			return ((index) * ((2*length) + (index-1) * -2))/2;
		}
		else
		{
			index = length - index + 1;
			return ((index) * ((2*length) + (index-1) * -2))/2;
		}
	}
}

int main()
{
	long long t, n, i, j;
	cin >> t;
	while(t--)
	{
		cin >> n;
		vector<long long>ele(n);
		vector<long long>div2;
		for(i=0;i<n;i++)
		{
			cin >> ele[i];
			if(ele[i] % 2 == 0)
			{
				div2.push_back(i+1);
			}
		}
		long long fi = (n * (n+1)) / 2;
		long long s = div2.size(), sub = 0;
		long long l = 1, r = n;
		long long odd = 0;

		long long len , ret;
		for(i=0;i<s;i++)
		{
			if(ele[div2[i]-1] % 4 == 0)
			{
				l = div2[i]+1;
				continue;
			}
			if(i == s-1)
			{
				r = ele.size();
				len = r - l +1;
				if(len%2 != 0)
				{
					odd = 1;
				}
				else
				{
					odd = 0;
				}
				
				if(div2[i] == l || div2[i] == r)
				{
					ret = len;
				}
				else
				{
					ret = findsum(div2[i] - l + 1, len, odd);	
				}
				
				sub = sub + ret;
				l = div2[i] + 1;
			}
			else
			{
				r = div2[i+1] - 1;
				len = r - l +1;
				if(len%2 != 0)
				{
					odd = 1;
				}
				else
				{
					odd = 0;
				}
				
				if(div2[i] == l || div2[i] == r)
				{
					ret = len;
				}
				else
				{
					ret = findsum(div2[i] - l + 1, len, odd);	
				}
				sub = sub + ret;
				l = div2[i] + 1;
			}

		}
		cout <<  fi - sub << "\n";
	}
}


