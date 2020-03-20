#include<bits/stdc++.h>
using namespace std;
#define max 99999
#define siz 4


//All pair shortest path
//The final matrix shows the shortest dist from x node to y node
// Complexity is n^3

void floydWarshall(int matrix[][siz])
{
	int i, j, k;
	for(k = 0;k < siz; k++)
	{
		for(i = 0; i < siz; i++)
		{
			for(j = 0; j < siz; j++)
			{
				matrix[i][j] = min(matrix[i][j], matrix[i][k]+matrix[k][j]);
			}
		}
	}

	
	
	
	for(i=0;i<siz;i++)
	{
		for(j=0;j<siz;j++)
		{
			cout << matrix[i][j] << "\t";
		}
		cout << "\n";
	}
}

int main()
{
	int matrix[siz][siz] = {
							{0, 3, max, 7},
							{8, 0, 2, max},
							{5, max, 0, 1},
							{2, max, max, 0}
						   };

	floydWarshall(matrix);
}

