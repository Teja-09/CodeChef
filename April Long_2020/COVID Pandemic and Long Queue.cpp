#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t, n, i;
	cin >> t;
	while(t--)
	{
		int count = 0, flag = 0;
		cin >> n;
		int temp  = 0, y = 0;
		vector< int >vec(n);
		for(i=0;i<n;i++)
		{
			cin >> vec[i];
		}
		for(i=0;i<n;i++)
		{
//			cin >> temp;
			if(flag == 0 && vec[i] == 1)
			{
				flag = 1;
			}
			else if(flag == 1 && vec[i] == 1)
			{
				if(count < 5)
				{
					y = 1;
					break;
				}
				else
				{
					count = 0;
				}
			}
			else if(flag == 1 && vec[i] == 0)
			{
				++count;
			}
		}		
		if(y)
		{
			cout << "NO" << "\n";
		}
		else
		{
			cout << "YES" << "\n";
		}
	}
}

