#include<bits/stdc++.h>
using namespace std;

struct Test
{
	int x, y, z;
};

int main()
{
	int t, n, m;
	cin >> t;
	while(t--)
	{
		cin >> n >> m;
		int i;
		vector < int > pts(n+1);
		for(i=1;i<=n;i++)
		{
			cin >> pts[i];
		}
		
		vector< Test > coord(n);
		int a, b, c;
		for(i=1;i<n;i++)
		{
			a = pts[i+1] - pts[i];
			b = i - i - 1;
			c = -1 * (a * i + b * pts[i]);
			coord[i] = {a, b, c};
		}
//		for(i=1;i<n;i++)
//		{
//			cout << coord[i].x << " " << coord[i].y << " " << coord[i].z << "\n";
//		}
		
		int count = 0, x1, x2, y;
		float poix, poiy;
		while(m--)
		{
			unordered_map <int, int>map;
			int ans = 0;
			count = 0;
			cin >> x1 >> x2 >> y;
			for(i=1;i<n;i++)
			{
				a = 0;
				b = x1 - x2;
				c = -1 * (a * x1 + b * y);
				
				poix = (coord[i].y * c - b * coord[i].z) / (coord[i].x * b - a * coord[i].y);
				poiy = (coord[i].z * a - c * coord[i].x) / (coord[i].x * b - a * coord[i].y);
				cout << fixed << setprecision(5) << "poix = " << poix << "\n";
				cout << fixed << setprecision(5) << "poiy = " << poiy << "\n";

				if((poix >= i && poix <= i+1) || (poiy >= pts[i] && poiy <= pts[i+1]))
				{
					if((x2 == i && y == pts[i]) || (x1 == i+1 && y == pts[i+1]))
					{
						continue;
					}
					if(map[poix] == 0)
					{
						map[poix] = poiy;
//						cout << "POI  = (" << poix << ", " << poiy << ")\n"; 
						++ans;
					}
					else
					{
						continue;
					}
				}
			}
			cout << ans << "\n";
		}
	}

}

