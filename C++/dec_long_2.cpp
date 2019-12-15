#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, i ,j, n;
	cin >> t;
	while(t--)
	{
		int cone = 0;
		int czero = 0;
		int ans = 0;
		cin >> n;
		vector< int > a(n);
		for(i=0;i<n;i++)
		{
			cin >> a[i];
			if(a[i] == 0)
			{
				++czero;	
			}
			else if(a[i] == 2)
			{
				++cone;
			}
		}
		czero = (czero * (czero+1))/2 - czero;
		cone = (cone * (cone+1))/2 - cone;
		if(czero < 0)
		{
			czero = 0;
		}
		else if(cone < 0)
		{
			cone = 0;
		}
		ans = cone + czero;
		cout << ans << "\n";
	}
	return 0;
}
