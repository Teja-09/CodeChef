#include<bits/stdc++.h>
using namespace std;

void printMaxSubSquare( int m[6][5])
{
	int ans[6][5];
	int i,j;
	for(i=0;i<6;i++)
	{
		ans[i][0] = m[i][0];
	}
	for(i=0;i<5;i++)
	{
		ans[0][i] = m[0][i];
	}
	
	
	for(i=1;i<6;i++)
	{
		for(j=1;j<5;j++)
		{
			if(m[i][j] == 1)
			{
				ans[i][j] = 1 + min(ans[i][j-1], min(ans[i-1][j], ans[i-1][j-1]));
			}
			else
			{
				ans[i][j] = 0;
			}
		}
	}
	
	int size = 0;
	
	for(i=0;i<6;i++)
	{
		for(j=0;j<5;j++)
		{	cout << ans[i][j] << "\t";
			if(size < ans[i][j])
			{
				size = ans[i][j];
			}
		}
		cout << "\n";
	}
	
	cout << size;
}


int main()
{
	 int M[6][5] = {{0, 1, 1, 0, 1},  
                    {1, 1, 0, 1, 0},  
                    {0, 1, 1, 1, 0},  
                    {1, 1, 1, 1, 0},  
                    {1, 1, 1, 1, 1},  
                    {0, 0, 0, 0, 0}}; 
    
    printMaxSubSquare(M);
}
