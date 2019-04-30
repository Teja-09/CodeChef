#include<bits/stdc++.h>
using namespace std;

int main()
{
	long n;
	long i;
	cin >> n;
	vector < long > a(n);
	for(i=0;i<n;i++)
	{
		cin >> a[i];
	}
//	cout << a[n-1] << "\n";
	sort(a.begin(),a.end());
//	for(i=0;i<n;i++)
//	{
//		cout << a[i] << "\t";
//	}
	for(i=n-1;i>=1;i--)
	{
//		cout << i << " " << i-1 << "\n"; 
//		cout << a[i] << " % " << a[i-1] << " = " << a[i]%a[i-1] << "\n";
		if(a[i]%a[i-1] != 0)
		{
			cout << a[i-1];
			exit(0);
		}else if (i==1)
		{
			cout << a[i] % a[i-1];
		}
		
	}
}