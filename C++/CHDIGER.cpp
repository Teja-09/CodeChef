#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string n,res = "";
		int d,i;
		cin >> n >> d;
		string arr = "0123456789";
		int st = 0; 
		while(true)
		{
			int minindex = -1;
			int	 minval = d;
			for(i=st;i<n.length();i++ )
			{
				if(n[i] - '0' < minval)
				{
					minval = n[i] - '0';
					minindex = i;
				}	
			}
			if(minindex  == -1)
			{
				break;
			}
			else
			{
				res = res + arr[minval];
				st = minindex + 1;
			}
		}
		
		int len = res.length();
		for(i=0;i<len;i++)
		{
			cout << res[i];
		}
		for(i = 0 ; i<(n.length() - len) ; i++)
		{
			cout << d;
		}

		cout << "\n";
	}
}