#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t,n,i,j;
	string s;
	cin >> t;
	while(t--)
	{
		vector< int >a(6,0);
		int cc =0, co = 0, cd = 0, ce = 0, ch = 0,cf = 0;
		cin >> n;
		for(j=0;j<n;j++)
		{
			cin >> s;
			for(i=0;i<s.size();i++)
			{
				switch(s[i])
				{
					case 'c':
						++cc;
						break;
					
					case 'o':
						++co;
						break;
						
					
					case 'd':
							++cd;
						break;
					
					case 'e':
							++ce;
						break;
					
					case 'h':
							++ch;
						break;
								
					case 'f':
						++cf;
						break;	
				}
			}
		}
		a[0] = cc;
		a[1] = co;
		a[2] = cd;
		a[3] = ce;
		a[4] = ch;
		a[5] = cf;
		a[0] = a[0]/2;
		a[3] = a[3]/2;
		sort(a.begin(),a.end());
		cout << a[0] << "\n";
		
	}
}