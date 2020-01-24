#include<bits/stdc++.h>
using namespace std;

int mini(int x, int y, int z)
{
	if(x < y)
	{
		return (x < z)? x : z;
	}
	else
	{
		return (y < z)? y : z;
	}
}

int mincost(int a[][3], int m, int n)
{
	int i, j;
	
	int tc[3][3];
	
	tc[0][0] = a[0][0];
	
	for(i=1;i<=m;i++)
	{
		tc[i][0] = tc[i-1][0] + a[i][0];
	}
	
	for(j=1;j<=n;j++)
	{
		tc[0][j] = tc[0][j-1] + a[0][j];
	}
	
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			tc[i][j] = a[i][j] + mini(tc[i-1][j], tc[i][j-1], tc[i-1][j-1]);
//			cout << "mini = " << mini(a[i-1][j], a[i][j-1], a[i-1][j-1]) << "\n";
		}
	}
	
//	cout << " return  " << tc[m][n];

	for(i=0;i<=m;i++)
	{
		for(j=0;j<=n;j++)
		{
			cout << tc[i][j] << "\t";
		}
		cout << "\n";
	}
	return tc[m][n];
}

int main()
{
	int a[3][3];
	int i, j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin >> a[i][j];
		}
	}
//	cout << "Done for";
	int ans = mincost(a, 2, 2);
	cout << ans;
	return 0;
}
