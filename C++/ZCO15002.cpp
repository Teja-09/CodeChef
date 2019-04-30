#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long k,i,n,count = 0,j;
	cin >> n;
	cin >> k;
	vector < long >a(n);
	for(i=0;i<n;i++)
	{
		cin >> a[i];
	}
	sort(a.begin(),a.end());
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(abs(a[i] - a[j]) >= k)
			{
				count = count + (n-j);
				break;
			}
		}
	}
	cout << count << "\n";
}