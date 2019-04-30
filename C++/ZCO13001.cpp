#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long n;
	long long rev = 0;
	cin >> n;
	vector < int >st(n);
	long i,j;
	for(i=0;i<n;i++)
	{
		cin >> st[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			rev += abs(st[i] - st[j]);
		}
	}
	cout << rev;
}