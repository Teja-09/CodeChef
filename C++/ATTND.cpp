#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,i,j;
		cin >> n;
		vector< string >fname(n);	
		vector< string >lname(n);
		vector< int >a(n,0);
		for(i=0;i<n;i++)
		{
			cin >> fname[i];
			cin >> lname[i];
		}
		for(i=0;i<n;i++)
		{
			 for(j=i+1;j<n;j++)
			 {
			 	if(fname[i] == fname[j])
			 	{
			 		a[i] = a[j] = 1;
				}
			 }
		}
		for(i=0;i<n;i++)
		{
			if(a[i] == 1)
			{
				cout << fname[i] << " " << lname[i] << "\n";
			}
			else
			{
				cout << fname[i] << "\n";
			}
		}
	}
	
}