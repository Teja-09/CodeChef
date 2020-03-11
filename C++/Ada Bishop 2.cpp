#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t, r0, t0, temp1, temp2;
	
	cin >> t;
	while(t--)
	{
		int count = 0;
		cin >> r0 >> t0;
		temp1 = r0;
		temp2 = t0;
		if(r0 > t0)
		{
			while(r0 != t0)
			{
				r0 = r0 - 1;
				t0 = t0 + 1;
			}
			++count;
		}
		else if(r0 < t0)
		{
			while(r0 != t0)
			{
				r0 = r0 + 1;
				t0 = t0 - 1;
			}
			++count;
		}
		else
		{
			r0 = 1;
			t0 = 1;
		}
		
		count = count + 26; // Commin to (1,1) and make 25 moves to cover all black squares
		
		cout << count << "\n";
		cout << r0 << " " << t0 << "\n";
		if(r0 != 1 && t0 != 1)
		{
			r0 = 1;
			t0 = 1;
			cout << r0 << " " << t0 << "\n"; 	
		}	
		
		int i = 0, rs, ts;
		for(i=1; i<=6; i++)
		{
			if(i < 4)
			{
				r0 = r0 + 1;
				t0 = t0 + 1;
				cout << r0 << " " << t0 << "\n";
				
				rs = r0 - (r0 - 1);
				ts = t0 + (t0 - 1);
				cout << rs << " " << ts << "\n";
				
				rs = r0 + (r0 - 1);
				ts = t0 - (t0 - 1);
				cout << rs << " " << ts << "\n";
				cout << r0 << " " << t0 << "\n";	
			}
			else if(i == 4)
			{
				r0 = r0 + 1;
				t0 = t0 + 1;
				cout << r0 << " " << t0 << "\n";
				
				rs = r0 - (r0 - 2);
				ts = t0 + (t0 - 2);
				cout << rs << " " << ts << "\n";
				
				rs = r0 + (r0 - 2);
				ts = t0 - (t0 - 2);
				cout << rs << " " << ts << "\n";
				cout << r0 << " " << t0 << "\n";
			}
			else if(i == 5)
			{
				r0 = r0 + 1;
				t0 = t0 + 1;
				cout << r0 << " " << t0 << "\n";
				
				rs = r0 - 2;
				ts = t0 + 2;
				cout << rs << " " << ts << "\n";
				
				rs = r0 + 2;
				ts = t0 - 2;
				cout << rs << " " << ts << "\n";
				cout << r0 << " " << t0 << "\n";
			}
			else if(i == 6)
			{
				r0 = r0 + 1;
				t0 = t0 + 1;
				cout << r0 << " " << t0 << "\n";
				
				rs = r0 - 1;
				ts = t0 + 1;
				cout << rs << " " << ts << "\n";
				
				rs = r0 + 1;
				ts = t0 - 1;
				cout << rs << " " << ts << "\n";
				cout << r0 << " " << t0 << "\n";
			}
		}
		cout << "8" << " " << "8" << "\n";
		
		
	}	
}
