#include<bits/stdc++.h>
using namespace std;

int main()
{
	 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,i;
	long h;
	cin >> n;
	cin >> h;
	vector< int >a(n);
	vector < int >b();
	for(i=0;i<n;i++)
	{
		cin >> a[i];
	}
	int w = 1;
	i = 0;
	int up = 0, t = 0;
	while(w!=0 && t ==0)
	{
		cin >> w;
		switch(w)
		{
			case 0:
				t = 1;
				break;
				
			case 1:
				if(i != 0)
				{
					--i;	
				}
				break;
			
			case 2:
				if(i != n-1)
				{
					i++;
				}
				break;
				
			case 3:
				if(up == 0 && a[i]!=0)
				{
					up = 1;
					--a[i];					
				}
				break;
				
			case 4:
				if(up == 1 && a[i] < h)
				{
					++a[i];
					up = 0;
				}
				break;
		}
		
	}
	for(i=0;i<n;i++)
	{
		cout << a[i] << " ";
	}
	
}