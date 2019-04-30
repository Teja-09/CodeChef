#include<bits/stdc++.h>
using namespace std;

int main()
{
	long t, n ,a;
	cin >> t;
	while(t--)
	{
		long long sum = 0,i,flag = 1,x,p=0;
		cin >> a >> n;
		long long k = pow(a,n);
		while(k > 0)
		{
			x = k % 10;
			sum += x;
			k = k / 10;
		}
	//	cout << sum << "\n";
		if(sum ==1 || sum ==2)
		{
			cout << 1 << "\n";
			p = 1;
		}
		if(p==0)
		{
			for(i=2;i<=sqrt(sum);i++)
			{
			if(sum%i == 0)
			{
				flag = 0;
				break;
			}
			}
			if(flag == 1)
			{
				cout << 1 << "\n";
			}
			else
			{
				cout << 0 << "\n";
			}
		}
		
	}
	
}