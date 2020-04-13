#include <bits/stdc++.h>
using namespace std;

bool find(long long x, long long k) 
{
  	int ct = 0;
	
	while (x % 2 == 0)
	{
		ct += 1;
		x /= 2;
	}

	for(int i = 3; i <= sqrt(x); i += 2) 
	{
		while (x % i == 0) 
		{
	  		ct += 1;
	  		x /= i;
		}
	}

	if(x > 2)
	{
		ct += 1;
	}

	if (ct >= k)
	{
		return true;
	}
	else
	{
    	return false;
  	}
}

int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    long long x, k;
    cin >> x >> k;

    if (k > 1)
	{
    	if(find(x, k)) 
		{
        	cout << "1" << "\n";
      	}
		else 
		{
        	cout << "0" << "\n";
      	}
    }
	else 
	{
    	if (x > 1) 
		{
        	cout << "1" << "\n";
      	} 
	  	else 
		{
        	cout << "0" << "\n";
      	}
    }
  }
  return 0;
}
