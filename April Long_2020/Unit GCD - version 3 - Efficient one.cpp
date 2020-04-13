#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t, n, count, i;
	cin >> t;
	while(t--)
	{
		cin >> n;
		count = 3;
		if(n < 3)
		{
			count = n;
		}
		int days = n/2;
		if(days == 0)
		{
			days = 1;
		}
		cout << days << "\n";
		cout << count << " ";
		if(n <= 3)
		{
			for(i = 1;i<=n;i++)
			{
				cout << i << " ";
			}
		}
		else
		{
			if(n%2 != 0)
			{
				for(i = 1;i<=3;i++)
				{
					cout << i << " ";
				}
				cout << "\n";
				for(i=4;i<=n;i+=2)
				{
					cout << 2 << " " << i << " " << i+1 << "\n";
				}				
			}
			else
			{
				for(i = 1;i<=3;i++)
				{
					cout << i << " ";
				}
				cout << "\n";
				for(i=4;i<=n;i+=2)
				{
					if(i == n)
					{
						cout << 1 << " " << i << "\n";	
					}
					else
					{
						cout << 2 << " " << i << " " << i+1 << "\n";	
					}
					
				}			
			}
		}			
	}

}

