#include<bits/stdc++.h>
using namespace std;


void merge(vector< int > &a, int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;
	
	int left[n1];
	int right[n2];
	
	for(i=0;i<n1;i++)
	{
		left[i] = a[l+i];
	}
	
	for(i=0;i<n2;i++)
	{
		right[i] = a[m+i+1];
	}
	
	i = 0; j = 0; k = l;
	
	while(i < n1 && j < n2)
	{
		if(left[i] <= right[j])
		{
			a[k] = left[i];
			i++;
			k++;
		}
		else
		{
			a[k] = right[j];
			j++;
			k++; 
		}
	}
	
	while(i < n1)
	{
		a[k] = left[i];
		i++;
		k++;
	}
	
	while(j < n2)
	{
		a[k] = right[j];
		j++;
		k++;
	}
	
}


void mergesort(vector< int > &ar, int l, int r)
{
	if(l < r)
	{
		int m = l + (r - l)/2;
		
		mergesort(ar, l, m);
		mergesort(ar, m+1, r);
		
		merge(ar, l, m, r);
	}
}


int main()
{
	int n, i;
	cin >> n;
	vector< int >arr(n);
	for(i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	
	mergesort(arr, 0, n-1);
	
	for(i=0;i<n;i++)
	{
		cout << arr[i] << "\t";
	}

}

