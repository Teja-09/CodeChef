#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, i, j;
	cin >> n;
	vector< int >val(n);
	int ind = 0, min;
	
	for(i=0;i<n;i++)
	{
		cin >> val[i];
	}
	
	for(i=0;i<n;i++)
	{
		cout << val[i] << "\t";
	}
	cout << "\n";
	
	for(i=0;i<n-1;i++)
	{
		min = val[i+1];
		ind = i+1;
		for(j=i;j<n;j++)
		{
			if(min > val[j])
			{
				min = val[j];
				ind = j;
			}
		}
		int temp = min;
		val[ind] = val[i];
		val[i] = temp;
	}
	
	cout << "came out " << "\n";
	
	for(i=0;i<n;i++)
	{
		cout << val[i] << "\t";
	}
	

}

