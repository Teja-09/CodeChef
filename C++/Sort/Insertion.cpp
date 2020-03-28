#include<bits/stdc++.h>
using namespace std;

void insertionsort(vector< int > &vec)
{
	int i,j, key;
	for(i = 1; i < vec.size(); i++)
	{
		key = vec[i];
		j = i - 1;
		while(j >= 0 && key < vec[j])
		{
			vec[j+1] = vec[j];
			j--;
		}	
		vec[j+1] = key;
	}
}


void printvector(vector< int > vec)
{
	for(int i = 0 ; i < vec.size(); i++)
	{
		cout << vec[i] << "\t";
	}
}

int main()
{
	int n, i;
	cin >> n;
	vector< int >vec(n);
	for(i=0;i<n;i++)
	{
		cin >> vec[i];
	}
	insertionsort(vec);
	printvector(vec);

}

