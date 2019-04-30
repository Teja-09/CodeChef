#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	cin >> t;
	while(t--)
	{
		long i,j,first,sec,diff=0,sum=0,size,tot=0,flag = 0;
		cin >> n;
		string s;
		char c;
		cin >> s;
		cin >> c;
		size = s.size();
		tot = (size*(size+1))/2;
		for(i=0;i<size;i++)
		{
			if(s[i] == c && i==0)
			{
				first = i;
				flag = 1;
			}
			else if(s[i] == c && flag == 0 && i>0)
			{
				flag = 1;
				first = i;
				sum+=(i*(i+1))/2;
			}
			else if(s[i] == c && i>0)
			{
				sec = i;
				diff = sec - first - 1;
				sum+=(diff*(diff+1))/2;
				first = i;
				sec = 0;
			}
		}
		if(first != size-1)
		{
			sec = size - 1;
			diff = sec - first;
			sum+=(diff*(diff+1))/2;
		}
		if(flag == 1)
		{
			cout << tot - sum << "\n";
		}
		else
		{
			cout << "0" << "\n";
		}	
	}
	

	
	
	
}